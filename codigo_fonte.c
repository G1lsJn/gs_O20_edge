
#include <WiFi.h>
#include <PubSubClient.h>
#include "DHT.h"

#define DHTPIN 10
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

#define POTSAL 34
#define POTPH 35
int LED_wifi = 2;
int LED_mqtt = 15;
String status;

// Credenciais para acesso a rede e ao MQTT mosquito

const char* ssid = "Wokwi-GUEST";
const char* password = "";
const char* mqtt_server = "test.mosquitto.org";

WiFiClient WOKWI_Client;
PubSubClient client(WOKWI_Client);

void setup_wifi() {

  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
   
    if (client.connect("WOKWI_Client")) {
      Serial.println("connected");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void setup() {
  
  pinMode(POTSAL, INPUT);
  pinMode(POTPH, INPUT);
  pinMode(LED_wifi, OUTPUT); 
  pinMode(LED_mqtt, OUTPUT); 

  Serial.begin(115200);
  dht.begin();
  setup_wifi();
  client.setServer(mqtt_server, 1883);

  Serial.println(F("Iniciando..."));
}

void Conectado_WiFi() {
  if(WiFi.status()) 
  digitalWrite(LED_wifi, HIGH);
  else 
  digitalWrite(LED_wifi, LOW);
}

void Conectado_Mosquitto() {
  if(client.connected()) 
  digitalWrite(LED_mqtt, HIGH);
  else 
  digitalWrite(LED_mqtt, LOW);
}

bool verificarTemperatura(float temp) {
    return temp >= 10.0 && temp <= 30.0;
}

bool verificarSalinidade(float sal) {
    return sal >= 30.0 && sal <= 40.0;
}

bool verificarPH(float ph) {
    return ph >= 7.0 && ph <= 8.5;
}

void loop() {

  reconnect();
  Conectado_WiFi();
  Conectado_Mosquitto();

  delay(2000);

  float t = dht.readTemperature();
  float s = map(analogRead(POTSAL), 0, 4095, 0.0, 100.0);
  float ph = map(analogRead(POTPH), 0, 4095, 0.0, 14.0);

  if (verificarTemperatura(t) && verificarSalinidade(s) && verificarPH(ph)) {
    status = "Condições da água apropriadas.";
  } else {
    status = "Condições da água inadequadas.";
  }

  // Publicando os dados
  // client.publish("TOPICO_WOKWI", String(t).c_str());
  // client.publish("TOPICO_WOKWI", String(s).c_str());
  client.publish("TOPICO_WOKWI", String(status).c_str());

  Serial.println("---------------------------");
  Serial.println(status);
  Serial.println(" ");
 
  Serial.print(F("Temperatura: "));
  Serial.print(t);
  Serial.println(F(" *c "));
 
  Serial.print(F("Salinidade: "));
  Serial.print(s);
  Serial.println(F(" % "));
 
  Serial.print(F("pH da água: "));
  Serial.print(ph);
  
  Serial.println(" ");
 
}

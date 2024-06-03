// Inclui as bibliotecas
#include <OneWire.h>
#include <DallasTemperature.h>

// Define o pino de dados para o barramento OneWire
#define ONE_WIRE_BUS 6

// Cria uma instância do barramento OneWire usando o pino definido
OneWire oneWire(ONE_WIRE_BUS);

// Passa a instância do barramento OneWire para a biblioteca DallasTemperature
DallasTemperature sensors(&oneWire);

// Declara uma variável para armazenar o endereço do sensor
DeviceAddress sensor;

void setup() {

  Serial.begin(9600);
  sensors.begin();

  // Verifica se o modo de energia parasita está ativo e imprime o status
  Serial.print("Parasite power: ");
  if (sensors.isParasitePowerMode()) 
    Serial.println("ON");
  else 
    Serial.println("OFF");

  // Obtém o endereço do primeiro sensor encontrado e verifica se foi encontrado com sucesso
  if (!sensors.getAddress(sensor, 0)) 
    Serial.println("Não foi possível encontrar o sensor");

  // Define a resolução do sensor (número de bits)
  sensors.setResolution(sensor, 9);
}

void loop() {
  // Informa que está solicitando a temperatura
  Serial.print("Solicitando temperatura...");
  
  // Solicita a leitura da temperatura ao sensor
  sensors.requestTemperatures();
  
  // Informa que a leitura foi concluída
  Serial.println("FEITO");

  // Obtém a temperatura em Celsius do sensor
  float tempC = sensors.getTempC(sensor);
  
  // Imprime a temperatura lida
  Serial.print("Temperatura da água: ");
  Serial.print(tempC);
  Serial.println(" C");

  // Espera 1 segundo antes de fazer uma nova leitura
  delay(2000);
}


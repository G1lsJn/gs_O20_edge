<h1 align="center"> 
    Monitoramento da Temperatura da Água com Arduino <br> 
    <img src="https://github.com/Gustavo-b017/challenger-SijiA/assets/143201541/a09b4e42-15bb-48de-b423-8e3bb0c7440c" width=150> 
</h1>

## <h1>  Integrantes </h1>

* Gilson Dias .............................. RM552345 
* Gustavo Bezerra .....................RM553076 

## 📝 Descrição do Problema:

O desenvolvimento do site e do protótipo com Arduino é motivado pela necessidade urgente de combater a desinformação e aumentar a conscientização sobre a saúde dos oceanos e o impacto das mudanças climáticas nas correntes marinhas, como a AMOC. Enquanto o site fornece informações didáticas e objetivas sobre a importância dos oceanos, as ameaças que enfrentam e as ações necessárias para sua preservação, o protótipo com Arduino monitora a temperatura da água, fornecendo dados cruciais para entender as variações climáticas. Juntos, esses esforços visam educar a população e promover ações positivas para a sustentabilidade marinha.

## 💡 Visão Geral da Solução:

Este projeto desenvolve um protótipo de monitoramento da qualidade da água usando um ESP32, que mede temperatura, salinidade e pH, determinando se estão dentro de intervalos apropriados para a estabilidade da AMOC. Os dados são enviados a um servidor MQTT para monitoramento remoto. LEDs indicam o status das conexões Wi-Fi e MQTT. A solução utiliza um sensor de temperatura e dois potenciômetros que simulam sensores de salinidade e pH, além de bibliotecas adequadas para leitura e transmissão de dados, permitindo o monitoramento eficiente das condições dos oceanos.

## ⚙️ Instruções de Configuração e Execução

### 1. **Materiais Necessários**:

#### Hardware
* ESP32
* Sensor DHT22
* 2 Potenciômetros (para simular os sensores de salinidade e pH)
* 2 LEDs (indicadores de Wi-Fi e MQTT)
* Resistores apropriados para LEDs
* Jumpers
* Fonte de Alimentação (USB ou bateria)

#### Software
* Simulador Wokwi
* Bibliotecas Arduino:
    * WiFi 
    * PubSubClient
    * DHT

### 2. **Execução**:

#### Monitoramento:

* Abra o Serial Monitor (Tools > Serial Monitor) para acompanhar os logs de conexão e leituras dos sensores.
* Ajuste os potenciômetros para simular diferentes níveis de salinidade e pH.
* Verifique os LEDs para o status de conexão Wi-Fi e MQTT.
* Monitore as mensagens publicadas no servidor MQTT para verificar as condições da água. Utilize um cliente MQTT como o MQTT.fx ou um serviço online como o HiveMQ para visualizar as publicações.

    Observações:<br>
    * Verifique se o servidor MQTT (test.mosquitto.org) está acessível e funcional.
    * Os intervalos de verificação de temperatura, salinidade e pH podem ser ajustados conforme necessário para simular diferentes condições da água.

## Protótipo no Wokwi: 

### 🔗 Link: https://wokwi.com/projects/399602709766019073

<img src="https://github.com/Gustavo-b017/challenger-SijiA/assets/143201541/4115063e-9ef9-4e3c-a713-7369353706cb" width=300>

### 📽️ Vídeo demostrativo: 

### 🔗 Link: https://youtu.be/QzOC28FwZKg

## 📈 Envio dos dados para internet

### Estrutura do node-red
<img src="https://github.com/G1lsJn/gs_O20_edge/assets/143201541/5e45a4a2-ac61-410c-9126-af05de3fde1d" width=700>

### Painel da Tago
<img src="https://github.com/G1lsJn/gs_O20_edge/assets/143201541/9c30b7eb-a722-4c3d-b2ea-61acb9632960" width=700>

## 🎯 Importância da Integração:

A integração do projeto do site com o protótipo ESP32 que monitora a situação das correntes marítimas traz uma série de benefícios e possibilidades:

1. **Visualização Remota dos Dados:** O site pode exibir os dados coletados pelo protótipo em tempo real, permitindo que os usuários monitorem as condições das correntes marítimas de qualquer lugar com acesso à internet.

2. **Acesso Amplo e Facilitado:** Ao disponibilizar os dados online, o site torna as informações acessíveis a um público mais amplo, incluindo pesquisadores, ambientalistas, formuladores de políticas e o público em geral interessado na saúde dos oceanos.

3. **Conscientização e Educação:** O site pode incluir seções educativas que explicam a importância das correntes marítimas, os impactos das mudanças climáticas e da poluição nos oceanos, e como as pessoas podem contribuir para a preservação dos ecossistemas marinhos.

4. **Análise e Pesquisa:** Os dados coletados pelo protótipo podem ser utilizados em estudos científicos e pesquisas sobre o comportamento das correntes marítimas, o que pode contribuir para uma melhor compreensão dos oceanos e para o desenvolvimento de estratégias de conservação.

5. **Alertas e Avisos:** O site pode ser configurado para enviar alertas e avisos em tempo real caso sejam detectadas condições adversas nas correntes marítimas, como mudanças abruptas na temperatura ou salinidade da água.

Em resumo, a integração do projeto do site com o protótipo ESP32 amplia o alcance e o impacto das iniciativas de monitoramento das correntes marítimas, promovendo a conscientização ambiental, facilitando o acesso aos dados e incentivando a colaboração e a participação da comunidade na proteção dos oceanos.

## 🔧Dependências

As dependências do código fornecido são as seguintes:

1. **Biblioteca WiFi.h:** Essa biblioteca permite que o dispositivo ESP32 se conecte a redes Wi-Fi. Ela é necessária para configurar e estabelecer a conexão com a rede Wi-Fi especificada.

2. **Biblioteca PubSubClient.h:** Essa biblioteca implementa um cliente MQTT para o ESP32. Ela é necessária para se comunicar com um servidor MQTT e enviar/receber mensagens.

3. **Biblioteca DHT.h:** Essa biblioteca é utilizada para interagir com os sensores de temperatura e umidade do tipo DHT (como o DHT22). Ela fornece funções para ler os dados desses sensores.

4. **Biblioteca Arduino.h:** Essa biblioteca fornece as funções básicas do Arduino, como `pinMode()`, `digitalWrite()`, `analogRead()`, `delay()`, etc. Ela é necessária para configurar os pinos GPIO, controlar LEDs, ler os valores dos potenciômetros, entre outras operações.

## 📈 Futuros Trabalhos

1. **Adição de Sensores:** Incluir mais sensores para monitorar outras variáveis ambientais.
2. **Desenvolvimento de Algoritmos:** Criar algoritmos para análise dos dados coletados.
3. **Integração com Sistemas de Controle:** Conectar o protótipo a sistemas de controle automatizado.
4. **Expansão do Dashboard:** Ampliar o dashboard na plataforma TagoIO com mais recursos.
5. **Testes de Campo e Validação:** Realizar testes extensivos para validar a precisão e confiabilidade.
6. **Desenvolvimento de Interfaces Intuitivas:** Criar interfaces mais fáceis de usar e compreender.

# Autores

| [<img loading="lazy" src="https://avatars.githubusercontent.com/u/143201541?s=96&v=4" width=115><br><sub>Gilson Dias</sub>](https://github.com/G1lsJn) |  [<img loading="lazy" src="https://avatars.githubusercontent.com/u/143757732?v=4" width=115><br><sub>Gustavo Bezerra</sub>](https://github.com/Gustavo-b017) |   
| :---: | :---: | 

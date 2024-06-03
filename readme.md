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

Este projeto visa monitorar a temperatura da água utilizando uma placa Arduino e o sensor de temperatura DS18B20. A coleta precisa de dados de temperatura é essencial para várias aplicações ambientais e científicas, como o estudo das mudanças climáticas, monitoramento de habitats aquáticos e processos industriais. Este sistema simples e eficiente exibe os dados coletados diretamente no monitor serial do Arduino IDE, dispensando a necessidade de conexão à internet ou displays adicionais.

## ⚙️ Instruções de Configuração e Execução

O projeto consiste em:

* Uma placa Arduino (Uno).
* Um sensor de temperatura DS18B20 que mede a temperatura da água.
* Um resistor de 4.7kΩ usado na conexão do sensor.

A exibição dos dados de temperatura no monitor serial do Arduino IDE.
O Arduino lê os dados de temperatura do sensor DS18B20 e os envia para o monitor serial, onde os dados podem ser visualizados em tempo real.

### Visualizar os Dados

1. Abrir o Monitor Serial:

    Após carregar o código, abra o Monitor Serial no Arduino IDE (Ferramentas > Monitor Serial).

2. Verificar as Leituras:

    As leituras de temperatura serão exibidas no Monitor Serial a cada 2 segundos.

### 1. **Materiais Necessários**:

#### Hardware
* Arduino (Uno, Nano, ou qualquer outro modelo compatível)
* Sensor de Temperatura DS18B20
* Resistor de 4.7kΩ
* Jumpers e Protoboard
* Fonte de Alimentação (USB ou bateria)

#### Software
* Arduino IDE
* Bibliotecas Arduino:
    * OneWire
    * DallasTemperature

<br>

<img src="https://github.com/Gustavo-b017/challenger-SijiA/assets/143201541/3b666033-9658-4f7d-85ed-5b198286f97d" width=300>


### 2. **Execução do Programa**:

## Protótipo no Wokwi: 

### 🔗 Link: https://wokwi.com/projects/399602709766019073

<img src="https://github.com/Gustavo-b017/challenger-SijiA/assets/143201541/88e86d0e-b24b-47af-af59-21a1bef942fd" width=700>

### 📽️ Vídeo demostrativo: 



## 🎯 Importância da Integração:

Este projeto é importante dentro do contexto do monitoramento ambiental, pois permite a coleta de dados precisos de temperatura da água. Esses dados podem ser usados para:

* Análise das condições ambientais.
* Estudos sobre o impacto das mudanças climáticas.
* Monitoramento de habitats aquáticos.
* Controle de processos industriais que envolvem água.

### Conclusão
Este projeto é uma ferramenta valiosa para o monitoramento ambiental, proporcionando uma maneira simples e eficaz de coletar dados de temperatura da água. Ele serve como uma base para futuros desenvolvimentos, como a integração com outros sensores e a implementação de funcionalidades adicionais, como a conexão a uma rede para monitoramento remoto.

## 🔧Dependências

* OneWire Library: Para comunicação com o sensor DS18B20.
* DallasTemperature Library: Para leitura de dados de temperatura do sensor DS18B20.

## 📈 Futuros Trabalhos

* Integração com outros sensores ambientais (pH, salinidade, turbidez).
* Implementação de conectividade para monitoramento remoto.
* Desenvolvimento de uma interface gráfica para visualização de dados.
* Integração com serviços de armazenamento e análise de dados na nuvem.

# Autores

| [<img loading="lazy" src="https://avatars.githubusercontent.com/u/143201541?s=96&v=4" width=115><br><sub>Gilson Dias</sub>](https://github.com/G1lsJn) |  [<img loading="lazy" src="https://avatars.githubusercontent.com/u/143757732?v=4" width=115><br><sub>Gustavo Bezerra</sub>](https://github.com/Gustavo-b017) |   
| :---: | :---: | 

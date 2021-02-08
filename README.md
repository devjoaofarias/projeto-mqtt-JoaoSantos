# projeto-mqtt--JoaoSantos-
## Objetivo
Esse projeto ilustra utilizar o Arduino como um 'Sensor Magnético', para monitorar se a porta de um Rack de Rede está ABERTO ou FECHADO; enviar essa informação via Internet utilizando o protocolo MQTT (Message Queuing Telemetry Transport) para um servidor MQTT hospedado na Amazon Web Service (AWS) e exibir a informação em um cliente MQTT (MQTT Dash) instalado em um Smartphone, conforme imagem abaixo.

<img src="https://github.com/devjoaosantos/projeto-mqtt-JoaoSantos/blob/main/Circuito.png" height="500" width="780">

### Foram utilizadas as seguintes bibliotecas:

* [PubSubClient](https://www.arduino.cc/reference/en/libraries/pubsubclient/) : Essa biblioteca é responsável pela conexão do cliente MQTT.
* [UIPEthernet](https://www.arduino.cc/reference/en/libraries/uipethernet/) : Essa biblioteca é responsável pela conexão entre o shield de REDE(ENC28J60) e o Arduino.
* [SPI](https://www.arduino.cc/en/reference/SPI) : Essa biblioteca permite que você se comunique com dispositivos SPI, com o Arduino como o dispositivo mestre.

### Materiais

1. Arduino uno
2. Módulo Ethernet (ENC28J60)
3. Sensor Magnético (MC-38)
4. Jumpers

## Circuito

<img src="https://github.com/devjoaosantos/projeto-mqtt-JoaoSantos/blob/main/Fluxograma.jpg" height="330" width="950">

#### _Autor: João Santos!_

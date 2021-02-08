#include <PubSubClient.h>
#include <SPI.h>
#include <UIPEthernet.h>

int pino2 = 2; 
bool mensagem; 
bool estado_sensor;

//Define o endereço MAC 
byte mac[] = {0xA4, 0x33, 0xD3, 0x6E, 0x2C, 0x34};

//Inicia o client Ethernet
EthernetClient client;
PubSubClient mqttClient(client);

void setup() {
   //Inicia o controlador Ethernet e solicita um IP para o servidor de DHCP
    Ethernet.begin(mac);

    //Inicia o monitor Serial
    Serial.begin(9600);

    mqttClient.setServer("54.161.191.80", 1883);

    //Exibe no Monitor Serial as informações sobre o IP do Arduino
    Serial.print("O IP do Arduino e: ");
    Serial.println(Ethernet.localIP());

    //Exibe no Monitor Serial as informações sobre a Máscara de Rede do Arduino
    Serial.print("A Mascara de Rede do Arduino e: ");
    Serial.println(Ethernet.subnetMask());

    //Exibe no Monitor Serial as informações sobre o Gateway do Arduino
    Serial.print("O Gateway do Arduino e: ");
    Serial.println(Ethernet.gatewayIP());

    //Exibe uma linha em branco
    Serial.print('\n');

    // Inicializa o sensor magnético
    pinMode(pino2, INPUT_PULLUP);
}

void loop() {
   mqttClient.connect("joaosantos");
   estado_sensor = digitalRead(pino2);

   if(estado_sensor == 1 ){
        mensagem = mqttClient.publish("joaosantos", "A porta esta aberta");  
        Serial.println(mensagem);
    }
   else{
        mensagem = mqttClient.publish("joaosantos", "A porta esta fechada"); 
        Serial.println(mensagem);
    }

     mqttClient.loop();
     delay(500);
}

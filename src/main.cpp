/*Autor: Denilson Gomes Vaz da Silva
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
* sensorVibra: Codigo para analisar o sinal obtido do sensor de vibração Ky-002
*/

#include <Arduino.h>

//Variaveis e constantes
int sensor = 2; //Pino do sensor
int led = 3; //Pino do led
int valor; //variavel para leitura do sensor

//setup
void setup() {
    Serial.begin(9600); //Inicia a comunicação serial
    pinMode(sensor, INPUT); //sensor como entrada
    pinMode(led, OUTPUT); //led como saida
}

//loop
void loop() {
    valor = digitalRead(sensor); //Atribui a leitura do sensor para valor
    digitalWrite(led,valor); //Atribui o valor do sensor para saida do led
    Serial.print("O valor do sensor é: "); //Exibe a mensagem
    Serial.println(valor); //Exibe o valor do sensor
    delay(2000); //Espera 2 segundos
}
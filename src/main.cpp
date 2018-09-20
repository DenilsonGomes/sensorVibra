/*Autor: Denilson Gomes Vaz da Silva
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
* sensorVibra: Codigo para analisar o sinal obtido do sensor de vibração Ky-002
*/

#include <Arduino.h>

//Variaveis e constantes
int sensor = 2;
int led = 3;
int valor;

//setup
void setup() {
    Serial.begin(9600);
    pinMode(sensor, INPUT);
    pinMode(led, OUTPUT);
}

//loop
void loop() {
    valor = digitalRead(sensor);
    digitalWrite(led,valor);
    Serial.print("O valor do sensor é: ");
    Serial.println(valor);
    delay(2000);
}
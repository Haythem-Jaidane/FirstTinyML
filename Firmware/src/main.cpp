#include <Arduino.h>
#include "model.h"

float size ;

Eloquent::ML::Port::DecisionTree Tree_Model;

void setup() {

  randomSeed(analogRead(0));

  Serial.begin(9600);
  Serial.println("*********************************");
  Serial.println("Welcome to my first TinyML");
  Serial.println("*********************************");

  
}

void loop() {
  
  size=random(300);

  Serial.print("the size is ");
  Serial.print(size);
  Serial.print("the decission is ");
  Serial.println(Tree_Model.predictLabel(&size));

  delay(2000);
}
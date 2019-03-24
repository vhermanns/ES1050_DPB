#include <Arduino.h>
#include <SoftwareSerial.h> //needed to communicate with the arduino
#include "HC06.h"

blueTooth::blueTooth() {}
blueTooth::~blueTooth() {}

//initialize the bluetooth connection
void blueTooth::init(){
  Serial.begin(9600);
}

void blueTooth::sendData(double angle){
  //send angle over bluetooth connection
  Serial.println(angle);
}

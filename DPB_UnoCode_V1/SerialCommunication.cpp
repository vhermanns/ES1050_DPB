#include <Arduino.h>
#include <SoftwareSerial.h> //needed to communicate with the arduino
#include "SerialCommunication.h"

SerialCom::SerialCom() {}
SerialCom::~SerialCom() {}

//initialize bluetooth
void SerialCom::init(){
  Serial.begin(9600); 
}

//update time and position data
void SerialCom::update(){
  
  //convert time to seconds 
   tm = millis();
   t = tm/1000;
   d = tm%1000;

  //insure data is current
   Serial.flush();
  
}

void SerialCom::sendData(int position, double angle){

  
  //print run time in seconds 
  Serial.print("time : ");
  Serial.print(t);
  Serial.print(".");
  Serial.print(d);
  Serial.println("s\t");

  //print rotary data
  Serial.print("Position: ");
  Serial.println(position);
  Serial.print("Angle: ");
  Serial.println(angle);
  
  //remove in final code, intended for debugging when bluetooth is not attached 
  delay(500);//delay of seconds
}

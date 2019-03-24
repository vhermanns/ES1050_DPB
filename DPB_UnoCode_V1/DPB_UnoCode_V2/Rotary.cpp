#include <Arduino.h>
#include <stdint.h>
#include "Rotary.h"
#include <ACE128.h>
#include <ACE128map12345678.h> //mapping for pin order

rotaryEncoder::rotaryEncoder() {}
rotaryEncoder::~rotaryEncoder() {}

//mapping for rotary encoder grey code and position values
ACE128 ACE(2,3,4,5,6,7,8,9, (uint8_t*)encoderMap_12345678);

void rotaryEncoder::init(){
  ACE.begin();
  Serial.begin(9600);
}

//Setter for position
void rotaryEncoder::updateRawPos(){
  rawPos = ACE.rawPos();
}

//Setter for angle
void rotaryEncoder::setAngle(){
  angle = rawPos*(360/numPos);
}

//Getter for position
double rotaryEncoder::getRawPos(){
  return rawPos;
}

//Getter for angle
double rotaryEncoder::getAngle(){
  return angle;
}

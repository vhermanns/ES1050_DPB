#include <Arduino.h>
#include <stdint.h>
#include "Rotary.h"
#include <ACE128.h>
#include <ACE128map12345678.h> //mapping for pin order

rotaryEncoder::rotaryEncoder() {}
rotaryEncoder::~rotaryEncoder() {}

ACE128 ACE(2,3,4,5,6,7,8,9, (uint8_t*)encoderMap_12345678);

void rotaryEncoder::init(){
  ACE.begin();
  Serial.begin(9600);
}

//Setters
void rotaryEncoder::updateRawPos(){
  rawPos = ACE.rawPos();
}

void rotaryEncoder::setAngle(){
  angle = rawPos*(360/numPos);
}

//Getters
double rotaryEncoder::getRawPos(){
  return rawPos;
}

double rotaryEncoder::getAngle(){
  return angle;
}

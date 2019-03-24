/*
 * 1050 DPB: IID
 * Studio 17, Team 1
 * Rotary encoder, and serial communication code
 * Version 2 (Bluetooth enabled)
 */

#include "HC06.h"
#include "Rotary.h"

blueTooth bt;
rotaryEncoder rotary;

void setup() {
  rotary.init();
  bt.init();
}

void loop() {
  //update data and insure it is current
  rotary.updateRawPos();
  rotary.setAngle();

  //send data over bluetooth 
  int pos = rotary.getRawPos();
  rotary.setAngle();
  double ang = rotary.getAngle();
  bt.sendData(ang);
}

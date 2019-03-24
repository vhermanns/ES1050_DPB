/*
 * 1050 DPB: IID
 * Studio 17, Team 1
 * Rotary encoder, and wire communication code
 * Version 1 
 * Start Date: 02/20/2019
 * Last Updated: 03/14/2019
 */

#include "SerialCommunication.h"
#include "Rotary.h"

SerialCom com;
rotaryEncoder rotary;

void setup() {
  rotary.init();
  com.init();
}

void loop() {
  //update data and insure it is current
  rotary.updateRawPos();
  rotary.setAngle();
  com.update();

  //send data over serial connection 
  int pos = rotary.getRawPos();
  rotary.setAngle();
  double ang = rotary.getAngle();
  com.sendData(pos, ang);
}

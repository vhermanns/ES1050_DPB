/*
 * Methods to collect and interpret data from Bourns ACE rotery encoder
 * Uses 8 digital pins, and 2 connections to ground on Arduino Uno 
*/
#ifndef Rotary_H
#define Rotary_H

#include <Arduino.h>
#include <stdint.h>

class rotaryEncoder {
  private:
    const double numPos = 128; //number of positions on rotary encoder
    
  protected:
    double rawPos; //mechanical position
    double angle; //calculated angle 

  public:
    rotaryEncoder();
    ~rotaryEncoder();

    void init();
    
    //setters
    void updateRawPos(); //mechanical position based on zero point reference
    void setAngle(); //calculated angle

    //getters
    double getRawPos(); //collected position data
    double getAngle(); //calculated angle

};

#endif

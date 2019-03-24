/*
 * Code for HC-06 bluetooth module
 * Start Date: 02/20/2019
 * HC-06 module in use is rated for 3.3V, arduino communication is 5V - USE A VOLTAGE DIVIDER
 */

#ifndef HC06_H
#define HC06_H

class blueTooth{
  protected:

  public:
  blueTooth();
  ~blueTooth();
  void init();
  void sendData(double angle);  
};

#endif

/*
 * Code for wired communication without bluetooth module
 */

#ifndef HC06_H
#define HC06_H

class SerialCom{
  protected:

  public:
  SerialCom();
  ~SerialCom();
  void init();
  void sendData(int position, double angle);
  void update();
  long tm,t,d; //variables to record time in seconds  
};

#endif

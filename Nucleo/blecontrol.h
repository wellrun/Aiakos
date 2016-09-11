#ifndef BLECONTROL_H
#define BLECONTROL_H

#include "Arduino.h"

class bleControl
{
public:
    bleControl();
    bool begin(bool bCentral);
    bool loop(void);
    bool getLocalMacAddress(byte* address, byte& length);
    bool findUnboundPeripheral(const char *remoteBtAddress);
    bool secureConnect(const char* remoteBtAddress, unsigned long &passcode);
private:
    bool _isCentral;
};

#endif // BLECONTROL_H

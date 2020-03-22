#include "beamerControl.h"

beamerControl::beamerControl() {
    

}
beamerControl::~beamerControl() {

}

void beamerControl::switchBeamerOn()
{
    #ifdef TESTMODE
        Serial.println(BEAMER_ON);
    #endif

    #ifdef DEFAULTMODE
        Serial2.println(BEAMER_ON);
    #endif
}

void beamerControl::switchBeamerOff()
{
    #ifdef TESTMODE
        Serial.println(BEAMER_OFF);
    #endif

    #ifdef DEFAULTMODE
        Serial2.println(BEAMER_OFF);
    #endif
}

void beamerControl::switchToHDMI1()
{
    #ifdef TESTMODE
        Serial.println(HDMI1);
    #endif

    #ifdef DEFAULTMODE
        Serial2.println(HDMI1);
    #endif

}

void beamerControl::switchToHDMI2()
{
    #ifdef TESTMODE
        Serial.println(HDMI2);
    #endif

    #ifdef DEFAULTMODE
        Serial2.println(HDMI2);
    #endif

}

bool beamerControl::transmissionSuccess() {
char *buffer = NULL;
char cr = ':';
int length = 100;
if(Serial1.available())
{
    Serial1.readBytes(buffer, length);
}

if(*buffer == cr)
{
    return true;
    Serial.println("Es wurde gelesen:");
    Serial.println(buffer);
    Serial.println();
}else
{
    return false;
    Serial.println("Diese miese");
}

}
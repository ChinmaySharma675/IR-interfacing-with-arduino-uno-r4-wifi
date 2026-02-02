#include <Arduino.h>
#define irPin 2
void setup(){
    pinMode(irPin,INPUT);
}
void loop()
{
    int irValue = digitalRead(irPin);
    if (irValue == HIGH)
    {
        Serial.println("IR Sensor:No Obstacle");
    }else
    {
        Serial.println("IR Sensor:Obstacle Detected");
    }
    delay(500); //Delay for readability

}
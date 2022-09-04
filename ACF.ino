#include <Servo.h>
int servoPin=9;
int gateopen=180;
int gateclosed=0;
int trig=12;
int echo=11;
int ping;
Servo servoGate;

void setup() {
  // put your setup code here, to run once:
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
servoGate.attach(servoPin);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(ping);
digitalWrite(trig,LOW);
delayMicroseconds(10);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
ping=pulseIn(echo,HIGH);
delay(25);

if (ping <=900){
  servoGate.write(gateopen);
}
else {
  servoGate.write(gateclosed);
}
}
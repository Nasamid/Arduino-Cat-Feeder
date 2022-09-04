# Arduino-Cat-Feeder
An automatic cat-feeder that uses Arduino to automate its functionality. The system utilizes an HC-SR04 ultrasonic sensor as an input to detect the proximity of the cat to the device, once it gets close enough, a servo attached to the bottom of a loose lid, whose some part is cut out, will rotate 180 degrees which causes the catfood to fall. 

## Components Used
* Arduino UNO
* HC-SR04 Ultrasonic Sensor
* 9g-Servo
* Breadboard
* Jumper Wires

## Diagram and Schematics

![Untitled Sketch 2_bb](https://user-images.githubusercontent.com/108247941/188292500-db8ecbfa-0aed-4a62-9a55-113e4e6751b9.png)
![Untitled Sketch 2_schem](https://user-images.githubusercontent.com/108247941/188292502-dc5a58e5-2bc8-4729-9b3a-4a76bad0a805.png)

## Recalibrate:
* value of ping depending on how sensitive you want your sensor to be. 
```
if (ping <=900){
  servoGate.write(gateopen);
}
```
## Demo

https://user-images.githubusercontent.com/108247941/188292636-88ea1084-0152-4eb2-aed7-b73b3cafcb0b.mp4


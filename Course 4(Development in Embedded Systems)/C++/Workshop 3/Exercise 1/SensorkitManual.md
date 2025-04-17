# AZ Delivery sensor-kit
Brief summary of what is included and where you can find good info.  

### Table of contents
1. [Introduction](https://github.com/bubba-94/Chas-Academy-SUVx24/edit/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%203/Exercise%201/SensorkitManual.md#introduction)
2. [Requirements](https://github.com/bubba-94/Chas-Academy-SUVx24/edit/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%203/Exercise%201/SensorkitManual.md#requirements)
3. [Sensor list](https://github.com/bubba-94/Chas-Academy-SUVx24/edit/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%203/Exercise%201/SensorkitManual.md#sensors-included)
________
### Introduction 
This is an easy comprehensive guide followin the [AZ-Delivery sensor kit](https://jmux.se/products/paket-med-sensorer-16-delar-for-elektronikprojekt?_pos=1&_sid=29f087479&_ss=r) 
that include 16 different sensors for you to play around with.  
This guide will give you the info you need to implement both internal and external libraries found to help you create new prototypes.  
_____
### Requirements: 
  * Hardware:
    * Power supply   
    * PC / Laptop 
    * Microcontroller
    * Breadboard
    * Jumper wires
    * [Sensors](https://github.com/bubba-94/Chas-Academy-SUVx24/edit/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%203/Exercise%201/SensorkitManual.md#sensor-list) listed below
  * Software:
    * Arduino IDE or other platform environment. Feel free to use my own [guide](https://github.com/bubba-94/Chas-Academy-SUVx24/blob/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%201/PlatformIO/ManualForPlatformIO.md) for setting up PlatformIO in VS Code
    * TinkerCAD account for making prototype/simulation
______
### Sensor list:  
| **Sensors** | **Description** | **Library** | **Example** | **Link to info** | 
|---------|------------|---------------------------|--------------|-------------|
DHT-11 | Temperature and humiditysensor | External | <SimpleDHT.h> | [SimpleDHT library](https://github.com/winlinvip/SimpleDHT)
HC-SR501 | Passive IR sensor | None required | digitalRead() | [Available in TinkerCAD](https://www.tinkercad.com/learn/overview/OJGMQFOL26F9H0F?type=circuits) |
DS1302 | Real-time clock | External | <DS1302.H> | [DS1302 library](https://github.com/Treboada/Ds1302)| 
HC-SR04 | Ultrasonic sensor | External | <HCSR04.h> |[HCSR04 library](https://github.com/gamegine/HCSR04-ultrasonic-sensor-lib)
YL-69 | Soil humidity sensor | None required | analogRead() | [Available in TinkerCAD](https://www.tinkercad.com/things/0bsHoBH6qzp-arduino-soil-moisture-sensor)
MQ-2 | Gas sensor | External | <MQ2.h> | [MQ-2 library](https://github.com/labay11/MQ-2-sensor-library) |
GY-68 BMP-180H | Barometer and temperature sensor | External | <BMP180.h> | [BMP180 library](https://github.com/enjoyneering/BMP180)
TCRT5000 | Optical sensor | External | <TCRT5k.h> | [TCRT5000 library](https://github.com/Cediddi/TCRT5000/tree/master/examples/Simple)
Soundsensor | Sensor for detecting sounds | None required | analogRead() | [Available in TinkerCAD](https://www.tinkercad.com/things/csv3Zxj9bwB-sound-sensor)
Rain sensor | Sensor for detecting rain | None required | analogRead() | [Simple rain sensor](https://projecthub.arduino.cc/edwardthe/how-to-use-raindrop-sensor-with-arduino-leonardo-acf24d)
Flame sensor | Sensor for detecting flame | None required | analogRead() | [Simple flame sensor](https://projecthub.arduino.cc/SURYATEJA/arduino-modules-flame-sensor-e48e97)
Photoresistor | Resistor for light barriers | None required | analogRead() | [Simple photoresistor](https://projecthub.arduino.cc/tropicalbean/how-to-use-a-photoresistor-1143fd) 
Obstacle detector | IR Sensor for detecting obstacles | None required | digitalRead() | [Simple obstacle detector](https://projecthub.arduino.cc/aboda243/obstacle-detector-using-ir-module-tutorial-101320)
Vibration sensor | Sensor for detecting vibrations | None required | digitalRead() | [Simple vibration detector](https://projecthub.arduino.cc/albertoz/vibration-sensor-module-71e849)
Tilt sensor | Sensor for detecting tilt of an object | None required | digitalRead() | [Simple tilt detector](https://docs.arduino.cc/tutorials/generic/tilt-sensor/) 

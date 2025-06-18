# Realiability and Functionality

Basics on how we create realiable and functional applications
In this project we are going to use the Arduino Debugger and pass through programs that are intentionally made for debugging.

## Environments in PIO

I am going to setup environments in my configuration file so that i can gather different .cpp file that are supposed to run alone on my arduino.

* Steps:

 1. Look up certain environments [here](https://github.com/bubba-94/Chas-Academy-SUVx24/blob/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop26/platformio.ini)
 2. Setup the actual hardware
 3. Setup the code that is supposed to be uploaded
 4. Determine which environment to upload (found inside the .ini file)
 5. Run -debug to launch the debugger for programs with the Arduino Debugger running from PlatformIO

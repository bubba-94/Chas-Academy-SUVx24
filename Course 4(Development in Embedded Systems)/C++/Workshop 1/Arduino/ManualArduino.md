# Setting up Arduino IDE
This is a link to [Arduinos own website](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE) where you can find different versions for each OS. Make sure you pick the one compatible with yours. 

### 

* ### Arduino IDE:
  * #### Who:
    **Anybody** can start experimenting with Arduino since there are alot of different tutorials and websites that explain the product alot.  
    The Arduino IDE is typically for smaller project where you do not have to use other existing libraries or platforms.  
    If you want to build **bigger and more complex** prototypes I would advise to look up **PlatformIO and VS Code** for a better version control while building the project.
      * [This](https://github.com/bubba-94/Chas-Academy-SUVx24/blob/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%201/PlatformIO/ManualForPlatformIO.md) is a guide to setup an environment with **PlatformIO and VS Code**.
    
  * #### What:
    The Arduino IDE is and open source platform that gives the user access to Arudinos full library.   
    Inside the IDE you gain access to multiple different functionality that is compatible with all physical Arduino boards.
    
  * #### Where:
    As described in the link at the top you can download the platform and install it on your computer.  
    You can use the [Arduino language reference website](https://docs.arduino.cc/language-reference/) to look up all available functions and variables.  
    At the bottom of this page you can found a reference to another website called [TinkerCAD](https://github.com/bubba-94/Chas-Academy-SUVx24/edit/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%201/Arduino/README.md#tinkercad), 
    this **free** website gives you possibility to practice and create circuits using either **Arduino** microcontrollers aswell as other controllers.
  * #### Why:
    If you are here for work, fun or just bored. Getting an Arduino and diffrent components is a good way to dispel time.  
    Creating a circuit where lamps blink and at the same time make weird noices with a buzzer, an Arduino microcontroller and IDE are very fun to play with.

___________
### First prototype:  
This is an easy but fun circuit, both code and circuit are provided but after hopefully you can experiment further on.  
If you are familiar with coding you can probably figure out what is happening but if not i can give you a small explanation.  
<p align="center">
<img src="https://github.com/bubba-94/Chas-Academy-SUVx24/blob/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%201/images/circuit.png"/>
<img src="https://github.com/bubba-94/Chas-Academy-SUVx24/blob/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%201/images/code.png"/>
</p>   

#### Key explanations: 
* When this program is uploaded and run on th Arduino board, **setup()** will run first and **only one time**.   
* loop() will be the logic that is run on the controller and the instructions you want to run should be put inside this function.  
* RED_LED and NEW_LED are declared as const integers and that variable is then assigned as a pin slot on the Arduino board via pinMode().  
 * pinMode(RED_LED, OUTPUT) will tell the code to read from RED_LED (which is actually Digital pin 4).
 * delay() will prolong all other code for a certain amount of milliseconds
 * digitalWrite(pinSlot, HIGH/LOW) will instruct the board to write a HIGH or LOW state to that certain PIN.
 * In this case HIGH/LOW will indicate if that pin/LED is on or off.
____________
   
### TinkerCAD:
Is a good website to use for designing a prototype. Try to remember that electrical components can (if not connected properly) cause a short circuit or even destroy the actual component.  
That is why it is good to always try and set up a prototype on [TinkerCAD](www.tinkercad.com) 

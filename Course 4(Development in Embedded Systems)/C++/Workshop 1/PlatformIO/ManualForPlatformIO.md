# Comprehensive guide for using Platform IO in VSCode

**If you do not have VS Code, use this guide to setup the VS Code environment. [Setup VS Code](https://code.visualstudio.com/docs/setup/setup-overview)**
### Platform IO
is a cross platform environment that gives the user access to many different **libraries** and capabilities from different platforms provided **on one single platform**.  
If you want to build a project that needs a bridge connecting different platforms, **Platform IO** is the key.  
This platform can easily be installed into your **VS Code** and help gather alot more libraries on one single platform.  
If you feel the need for using **Platform IO** or just wanna try it out, follow these steps.
___________
## Building an Arduino prototype: 
We will set up an **Arduino** sketch (which is an external IDE) in our **VS Code using Platform IO**.  
[This](https://github.com/bubba-94/Chas-Academy-SUVx24/blob/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%201/Arduino/ManualArduino.md) is a guide for setting up **Arduino** IDE and creating the actual prototype.
 * ### Instructions for building the prototype:
  1. Open VS Code and install the **Platform IO** extension.  
  2. Look for the new **Platform IO** icon and click on it.  
  ![Platform IO](https://github.com/bubba-94/Chas-Academy-SUVx24/blob/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%201/images/PlatformIO.png)
  3. Click on "New project" (if you do not have an existing one).  
  4. When created, open (usually) "main.cpp" file under the "src" folder.  
  5. Implement the existing code provided below or write your own.  
  ![Code](https://github.com/bubba-94/Chas-Academy-SUVx24/blob/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%201/images/CodeAndLocation.png)
  6. Build and verify the existing code (making sure the code is compiled).  
  ![Build/upload pic](https://github.com/bubba-94/Chas-Academy-SUVx24/blob/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%201/images/BuildUpload.png)
  8. Upload to a connected **Arduino** board.  

 Congratulations, you have built your first **Arduino** project inside using **VS Code and Platform IO**.  
 Keep practicing and build even more complex and advanced projects further on.  
 [This](https://docs.platformio.org/en/stable/integration/ide/vscode.html) is a more detailed guide on how you can expand your knowledge.

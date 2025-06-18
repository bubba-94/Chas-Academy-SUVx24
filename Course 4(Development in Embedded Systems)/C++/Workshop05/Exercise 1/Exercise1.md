
# Serial Peripheral Interface (SPI)

## Key differences between SPI, I2C and UART

* What is SPI's advances?  

  * Speed improvedment over UART / I2C  
  * Supports full duplex communication
* Is there any disadvantages using SPI?
  * Loosely defined, does not specify frame format, number of bits transmitted or voltage levels.
* When is SPI often used?
  * Often used sending data between smart controllers to less smart controllers.
  * Used with common application with sensors, displays, DAC / ADC, RTC, gamecontrollers.

______

* How does the communication work with SPI?

  The master decides which slave to "talk" to via the CS line and the line is pulled LOW to the actual target of communication.
  And the slave then listens for the SCLK and MOSI signal and the CS line is kept LOW until communication is complete
  * The SPI structure is a 4 wire interface being:
    * CS (Chip Select): Decides the actual "target" of where the data is supposed to be commited.
    * SCLK (Syncrhronous Clock): Provides the timing/synchronization for the transmitting.
    * MOSI (Master Out, Slave in): Data transmitted from the master.
    * MISO (Master In, Slave Out): Data recieved by the master (other way around from MOSI).

* What do you have to think about when you are using SPI as communication?
  * There are alot of different names used for the components using SPI protocol.
  * There are different ways of configuring the clock.
  * Both master and slave have to be configured the same way
  * Physical challenges may occur regarding cables with serial communication.

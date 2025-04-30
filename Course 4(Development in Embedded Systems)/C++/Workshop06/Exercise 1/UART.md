# UART (Universal Asynchronous Reciver / Transmitter)
UART is a protocol for exchanging serial data between two devices.  

### How are units connected using UART
UART uses two wires that are connected each direction (excluding GND):  
TX -> RX: Transmitts from TX to RX.
RX -> TX: And then back from RX to TX.

### What does **Frame Format** mean and what parts are included

### Key differences between UART, SPI and I2C
* What are the advantages of UART?  
  UART is a [asynchronous](https://github.com/bubba-94/Chas-Academy-SUVx24/edit/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%206/Exercise%201/UART.md#explanations)
  versatile protocol that can be [simplex, half-duplex and full-duplex](https://github.com/bubba-94/Chas-Academy-SUVx24/edit/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop%206/Exercise%201/UART.md#explanations).
  Today UART is still considered important that are used for lower-speed, low-throughput applications because of its simplicity,
  low cost and easy to implement
* Are there any disadvantages of using UART?
* When do we use UART?  
  One of the earliest protocols that are used in Serial (COM) ports, RS-232, modems etc.  
  Popularity is slowly decreasing and being "replaced" by SPI and I2C.  
  

### How does the communication work with UART
* What do you have to think about when using UART?
  * The clock has to share the same "speed" (measured in BAUD) on both transmitter and receiver.
  * Has to use the same frame / structures and parameters
* Which parts of the protocol to do you have to oversee and eventually configure for the protocol to function?

#### Explanations
* Simplex: "Speaking" in one direction only.
* Half-duplex: "Speaking" in both directions (but just one at a time).
* Full-duplex: "Speaking" in both directions simoultaneously.
* Asynchronous: meaning that the transmitter and receiver does not share a common clock signal.    

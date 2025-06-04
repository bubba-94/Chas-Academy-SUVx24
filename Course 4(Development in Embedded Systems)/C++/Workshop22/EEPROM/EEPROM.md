# EEPROM

[SHA-256 video](https://www.youtube.com/watch?v=PbFVTb7Pndc&t=734s)

## Word descriptions

* **Hashing**: scrambles data into fixed size and irreversible 256 bit output.

* **[SHA-256](https://github.com/bubba-94/Chas-Academy-SUVx24/blob/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop22/EEPROM/SHA256.md)**: is a fast and secure hashing function that generates a set "ID/fingerprint" or a string of characters to encrypt a certain message.

* **CRC (Cyclic Redundancy Check)**: is an error detecting code used to check for accidental changes or corruption in stored or transmitted data inside the EEPROM.

### General questions (generated from ChatGPT)

#### What does EEPROM stand for and what is its primary function in electronics

* Electrically erasable programmable read-only memory.

#### How does EEPROM differ from other types of memory like RAM and Flash memory

* EEPROM is very slow compared to RAM or Flash memory

#### Why is EEPROM considered non-volatile memory

* Because the data written to indexes is saved when the EEPROM loses power.

#### What are some common use cases for EEPROM in embedded systems

* Device Configuration, User References and Security and Access Control among alot of other things.

#### What are the limitations of EEPROM in terms of write cycles and data retention

* Each read and write to and from an EEPROM will decrease the EEPROMs life-span and could later be equal to memory leaks and limitations.  
Most EEPROM chips have a life span of 10,000 to 100,000 write cycles.

### Arduino specific questions

#### How can you read and write data to the EEPROM using Arduino code? Provide a basic example

```cpp  
#include <EEPROM.h> // Library for manipulating EEPROM

int address = 0; // Adress / index of EEPROM
int value; // Value at certain address

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    // Assign the value from read positions at (address)
    value = EEPROM.read(address); 

    Serial.print(address);
    Serial.print("\t");
    Serial.print(value);
    Serial.println();   

    // Loop inside arduino loop
    address = address + 1;  

    // 512 = all cells of the EEPROM inside ATmega168 and ATmega8
    if (address == 512)
      address = 0;    

    delay(500);
}
```

#### What library or functions does Arduino provide for EEPROM manipulation, and how do you use them to store custom data types (e.g., structs)

|**Method**           | **Param**                               |**Return value**|**Description**                                                                                |
|---------------------|-----------------------------------------|----------------|-----------------------------------------------------------------------------------------------|
| **EEPROM.read()**   | int address                             | byte           | Reads a byte from the EEPROM. Locations that have never been written to have the value of 255 |
| **EEPROM.write()**  | int address, byte                       | none           | Write a byte to the EEPROM.                                                                   |
| **EEPROM.update()** | int address, byte                       | none           | Write a byte to the EEPROM. Written over ONLY if it differs from previous byte data           |
| **EEPROM.get()**    | int address, data (eg. float or struct) | &data          | Read any data type or object from the EEPROM                                                  |
| **EEPROM.put()**    | int address, data (eg. float or struct) | &data          | Write any data type or object from the EEPROM                                                 |
| **EEPROM[]**        | int address                             | EEPROM &cell   | Use EEPROM like an array to directly read and write to certain cell                           |
| **EEPROM.length()** | unsigned int index                      | unsigned int   | Get the length of EEPROM (MCUs have diffrent capacities)                                      |

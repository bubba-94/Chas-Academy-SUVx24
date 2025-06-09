# MQTT

A protocol used in the IoT industry for short and easy communication to and from devices.

## Explanations

* **QoS (Quality of Service)**: is a certain measurement of how the message is handled by the MQTT protocol.

### Sources i have worked with

[Guide to MQTT (Basic, SWE)](https://www.induo.com/b/mqtt-protokollet-for-iot/#:~:text=MQTT%20och%20meddelanden%20%C3%84mnena%20representeras%20med%20str%C3%A4ngar,%C3%A4r%20av%20intresse%20f%C3%B6r%20de%20prenumererade%20enheterna.)
[What is MQTT (Video)](https://www.youtube.com/watch?v=bzuSCFaBjds)
[MQTT Basics (Video)](https://www.youtube.com/watch?v=z4r4hIZcp40)
[Mastering MQTT (In-depth, ENG)](https://www.emqx.com/en/blog/the-easiest-guide-to-getting-started-with-mqtt)

### Assignment

#### What is MQTT and what is it used for

* **MQTT (Message Queuing Telemetry Transport)** is a protocol for data transport that works as a lightweight publish-subscribe messaging for IoT devices.  
The protocol is used for devices for low bandwidth communication.

#### What are the roles of a publisher, subscriber and broker in MQTT

* **Publisher**: is a MQTT client (temperature sensor) that publishes/sends messages or information to a broker(server).
* **Subscriber**: is a MQTT client (for example a laptop or smartphone) that receives/reads messages from the broker(server).
* **Broker**: handles the connection and communication between the devices using MQTT protocl and "forwards" information to the subscriber.

#### What is a topic in MQTT

* A **topic** is a UTF-8 string that acts as a routing label for messages.  
A subscriber must be subscribed to a certain topic to be able to use that information.

#### What are QoS levels in MQTT

* **Level QoS0**: also referred to as "fire and forget", that uses a PUBLISH sequence. Publishes packets to the broker who when passes it along to the related subscribers. No acknowledgement needed for this level.
* **Level QoS1**: is a level with more acknowledgement, this level uses a PUBLISH/PUBACK sequence between the publisher and broker aswell as between broker and server. When a packet has been received another message will be delivered from the receiver to confirm the action. Message is delivered atleast once
* **Level QoS2**: is a level with the most acknowledgement, that always sends two packets, PUBLISH/PUBREC and PUBREL/PUBCOMP. If conditions are met, this ensure that the messages is only delivered **once**.

#### What is the purpose of the "Last Will and Testament" in MQTT

* To ensure the connectivity of the devices inside an MQTT protocol. If a device has loses connection to the broker, the broker will then send the Last Will to all subscribers of the topic in mind.

#### What is retained messaging in MQTT

* Is a boolean message retained flag set to true, and if the flag is set to true then this message will be stored and published to each subscriber that is connected to the broker.
This is to ensure access to the latest relevant information.

#### What is the difference between MQTT and HTTP for IoT communications

They are both data transfer protocols but they serve a different kind of purpose and have different characteristics. 

| **Feature**                        | **MQTT**                                                         | **HTTP**         |  
| -----------------------------------|------------------------------------------------------------------|------------------|
| **Message style**                  | Publish/Subscribe                                                | Request/Response |
| **Data exchange**                  | Binary, minimal overhead                                         | Text-based, larger headers |
| **Connection**                     | Persistent, reduces overhead                                     | Short-lived, connection for each response |
| **Use cases**                      | IoT, real-time updates, sensor networks                          | Web pages, API, file transfers |
| **Latency**                        | Low, suitable for time sensitive communication                   | Higher, better suited for standard requests/responses |
| **Scalability**                    | Highly scalable for numerous devices and subscribers             | Scalable, depending on concurrent requests/responses |
| **Resource usage**                 | Minimal, designed for devices with limited resources             | Higher due to overhead with requests and responses |
| **Choice of protocol if you need** | Low latency, real-time communication and efficient data exchange | General-purpose protocol, large payloads, greater resources |

* **HTTP**: is a general-purpose protocol used for web-browsing and file transfers handling greater flexibility and larger payloads.
* **MQTT**: is a publisher/subscriber protocol that is applied in IoT applications and devices for handling low bandwidth and low latency communication.

#### What kind of security features does the MQTT protocol offer

* **Username / password autentication** built in the MQTT protocol
* **Encryption** via TLS / SSL
* **Certificate authentcation** via TLS / SSL
* **Access control** via broker configuration

#### What are the pros and cons of MQTT protocol

* **Pros:**
  * Low energy consumption (good for battery driven devices)
  * Effective publishing to multiple devices
  * More reliable data transfer in remote areas
  * Scalability
* **Cons:**
  * Restricted/limited security of information
  * Compatibility with different systems

#### What ports are commonly used by MQTT (unencrypted and encrypted)

* 1883 for MQTT unencrypted
* 8883 for MQTT over TLS (encrypted)

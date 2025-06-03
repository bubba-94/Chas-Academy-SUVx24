# HTTPS

## Word descriptions

* **SSL/TSL** SSL/TLS provides secure communication between a client (e.g., a web browser) and a server, typically used for web applications.  
* **HTTPS**: Hypertext Transfer Protocol Secure is a protocol for encrypted data traffic for the regular HTTP protocol.

What is the purpose of `WiFiSSlClient client;` in the code and how is it separate from a regualar `WiFiClient`:

* `WiFiSSLClient` will secure an encrypted connection over HTTPS or other SSL protocols instead of `WifiClient` that connects to HTTP or TCP.
SSL is used to ensure an encrypted (safer) connection.

What part does `WiFiS3.h` have in the program and why is it included:

* Becaues `WiFiS3.h` is the library for the actual module/controller that support WiFi and Bluetooth connectivity.

Why is portnumber 443 used i `client.connect(server, 443)` instead port 80 for example:

* Port 443 is set to HTTPS by default by the IANA and it supports SSL / TLS encryption while port 80 is readable by anyone intercepting it.
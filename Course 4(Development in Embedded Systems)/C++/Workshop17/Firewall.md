# Explore the firewall
**Goal:** is to gain the knowledge of configuring inbound and outbound network traffic to your own computer.   
**To do:**  
Find a source that describes how inbound and outbound rules are configured for netwrok traffic, 
to and from your own computer in the Windows Defender Firewall.    

Use an AI-tool to help setup: 
* Create an http-server of a simpler choice with preferably C/C++ code.  
    * Instructions on how you start the server and what port is being used.  
* The server should be able to show a simple page in the browser with 127.0.0.1: portnmbr(localhost).  
    * You should be able to see the result of the response from the server with this simple website.  
* Try to reach the http-server from "another computer" with the IP-addres (and port number) to your computer and receive the same response.  
    * If you only have one computer i your local network set up a virtual computer (inside your own computer) 
    in the simplest way possible for testing communication with an external IP-adress.  
* Ask the Windows Defender Firewall how to block inbound traffic to the http-server you are running   
    * Test by trying to connect with your "other computer" the same way before but this time get an error message.  
    * Remove the block and verify communications again. 
* Figure out if you can create a scenario for outbound traffic in your firewall.

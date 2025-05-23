# Cyber Security

1.  Describe what cyber crime is and mention two common types of cyber crime.    
    Cybercrimes are crimes that are facilitated via computers or networks.     
    **Phishing**: is a type of engineering where attackers deceive individuals on the internet to trick them into providing sensitive information about oneself, such as passwords or credit card information.       
    **Ransomware**: is when malicious code holds files "hostage" and demands ransom to release them.    

2.  What two ways are often used by cyber criminals to earn illegal money online?  
    **Tumbling**: by demanding payments in cryptocurrency and working them through a **tumbler** to divide the currency in smaller forms and different currencies and funnel them into multiple accounts to make the money harder to track.  
    **Ransom**: by using ransomware to remotely lock certain files and demand payments to get them unlocked.

3.  What is the **"Dark Web"** and how is it separate from **"Deep Web"**?  
    **Dark Web**: is a hidden network that using anonymizing tools like To
    **Deep Web**: is referred to the part of the internet that is not covered by the standard search engines.  

4.  What is the primary function of the firewall in a network?  
    Firewalls monitor and control incoming and outgoing network traffic based on predetermined security rules. Traditional firewalls filter traffic based on IP, port, and protocol.  
    Working on the Layer 4 in the TCP / UDP model. 

5.  What security methods does a **Next Generation Firewall (NGFW)** provide compared to regular Layer 4 firewalls?  
    NGFWs analyze traffic at a deeper level, inspecting the content of packets and enforcing policies based on application, user identity, and threat intelligence.   

6.  How does a **NGFW** work with more detailed traffic compared to common firewalls?  
    Unlike basic firewalls that filter traffic based on simple rules (allow/deny by port/protocol), NGFWs can inspect the payload of packets, identify applications regardless of port used, and detect malicious behavior in real-time.  

7.  Why is **TLS** used in **HTTPS** and what is the difference between **TLS** and **SSL**?  
    **TLS (Transport Layer Security)** is used in **HTTPS** to encrypt data between the browser and the server, making it harder for attackers to intercept or tamper with the communication.

    **TLS** is the modern and more secure version of **SSL (Secure Sockets Layer)**. SSL is now outdated and has known vulnerabilities, while TLS is actively maintained and improved.

8.  Why is **HTTPS** important for secure web surfing and how do you know if a website uses it?  
    **HTTPS** ensures that the data sent between your browser and a website is encrypted, which helps prevent eavesdropping or tampering.  
    You can tell a site uses HTTPS if the URL starts with "https://" and usually has a padlock icon next to it in the browser address bar.

9.  What does **SSID** stand for, and what does it entail?  
    **SSID** stands for **Service Set Identifier**.  
    It is the name of a wireless network that devices use to identify and connect to a Wi-Fi access point.

10. What is entropy and why is it important?  
    Entropy in cyber security refers to the randomness or unpredictability in data, especially in cryptographic keys or passwords.  
    High entropy makes it harder for attackers to guess or brute-force values like passwords or encryption keys.

11. Why can a password like "Tr0ub4dor&3" be less secure than it seems?  
    While it contains a mix of characters, it follows a predictable pattern (common word + predictable substitutions), making it more vulnerable to dictionary or pattern-based attacks.

12. How does a password improve if you have a password like "CorrectHorseBatteryStaple"?  
    It uses multiple unrelated words in a sequence, which increases the overall entropy and length, making it significantly harder to crack through brute force or dictionary attacks.

13. What are some common mistakes users do when they create a password, and how do we avoid them?  
    * Using common words or personal information.  
    * Reusing passwords across multiple accounts.  
    * Choosing short or easily guessable passwords.  
    **Avoid by** using a password manager, creating long and unique passwords, and incorporating randomness.

14. What are the pros of **Multi-Factor Authentication (MFA)**, also provide a brief description.  
    **Multi-Factor Authentication** adds an additional layer of security by requiring more than one method of authentication:  
    * Something you know (password)  
    * Something you have (authenticator app or token)  
    * Something you are (fingerprint or face ID)  
    It greatly reduces the risk of unauthorized access even if one factor is compromised.

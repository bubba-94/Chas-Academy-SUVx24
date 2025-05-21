#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>

#pragma comment(lib, "ws2_32.lib")  // Link with Winsock library

#define PORT 8080

int main() {
    WSADATA wsaData;
    SOCKET serverSocket, clientSocket;
    sockaddr_in serverAddr, clientAddr;
    int clientSize = sizeof(clientAddr);
    char buffer[30000];

    std::string response =
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/html\r\n\r\n"
        "<!DOCTYPE html><html><head><title>Win C++ Server</title></head>"
        "<body><h1>Hello from a Windows C++ Server!</h1></body></html>";

    // Initialize Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData)) {
        std::cerr << "Failed to initialize Winsock\n";
        return 1;
    }

    // Create socket
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == INVALID_SOCKET) {
        std::cerr << "Socket creation failed\n";
        WSACleanup();
        return 1;
    }

    // Bind socket
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(PORT);

    if (bind(serverSocket, (sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        std::cerr << "Bind failed\n";
        closesocket(serverSocket);
        WSACleanup();
        return 1;
    }

    // Listen
    listen(serverSocket, SOMAXCONN);
    std::cout << "Server running at http://127.0.0.1:" << PORT << std::endl;

    while (true) {
        clientSocket = accept(serverSocket, (sockaddr*)&clientAddr, &clientSize);
        if (clientSocket == INVALID_SOCKET) {
            std::cerr << "Accept failed\n";
            break;
        }

        int bytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0);
        if (bytesReceived > 0) {
            std::cout << "Received request:\n" << std::string(buffer, bytesReceived) << "\n";
            send(clientSocket, response.c_str(), response.length(), 0);
        }

        closesocket(clientSocket);
    }

    closesocket(serverSocket);
    WSACleanup();
    return 0;
}

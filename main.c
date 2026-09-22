/*
Project: Make a Web Server in C

Goal and Functionality: Self explanatory
1. HTTP encryption
2. Local host accessible on default port
3. Display Hello World

Steps:-
1. Set up CONSTANTS for IP ADDRESS and DEFAULT PORT
2. Set up a server on IP ADDRESS and DEFAULT PORT displaying hello world.
    2.1  How does the C program as the OS to setup a socket?
3. How to bind IP ADDRESS AND DEFAULT PORT to socket?
4. Listen for incoming connection requests
4. Ensure HTTP Encryption for accessing localhost client.
    4.1 Read the incoming request and check its header for HTTP
    4.2 If yes, construct HTTP response based on request info
    4.3 Send back the HTTP Response
5. Close the connection after sending.(For now)

What is a server?
1. A server is a program that constantly monitors a port for incoming connections
2. Socket: it is an integer provided by the OS to act as a communication endpoint. YOu bind the IP Address + Port to that integer.
   2.1 Types of sockets: TCP, UDP
3. Figure out how to get a tcp socket from the OS using C
    3.1 Since my OS is Windows, I need to import the Winsock library to use the socket function. If this was Linux I can just use the socket command directly.
*/

#include <winsock2.h>

#pragma comment(lib,"Ws2_32.lib")

const char IP_ADDRESS = "localhost";
const char PORT = "8080";

int main() {

    return 0;
}
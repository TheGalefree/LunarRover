# LunarRover
PEEKbot Concordia Wheel Team 2023

CameraImageArduino file takes the camera image data from camera and stores into arduino, outputs to serial port --- written in C for Arduino UNO

SerialPortReader is used by computer to take image from Arduino and display image onto computer screen --- executable file to be run on windows

HomographyScript takes image and projects it onto an aerial plane view --- written in python, to be run on BBB

pathing takes the plane and draws paths based on colour data --- written in python, to be run on BBB

RoverDriverNew is the Arduino code for the Arduino BLE 33 controlling the motors. It is taken from previous teams, the most recent sourced from https://github.com/AlexandreFlorio/RoverDriver

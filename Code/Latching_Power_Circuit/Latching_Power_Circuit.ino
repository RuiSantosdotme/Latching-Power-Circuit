/*********
  Author: Rui Santos

  Complete project details at https://RandomNerdTutorials.com/latching-power-circuit/

  Permission is hereby granted, free of charge, to any person obtaining 
  a copy of this software and associated documentation files.

  The above copyright notice + link to project page and this permission 
  notice shall be included in all copies or substantial portions of the Software.
*********/

// Define power latch pin for ESP32 (GPIO 5) / ESP8266 (GPIO 5) / Arduino (Digital 5)
const int powerLatch = 5;
const int led = 4;

void setup() {
  // Define pin as an OUTPUT
  pinMode(powerLatch, OUTPUT); 
  pinMode(led, OUTPUT);
  
  // Keeps the circuit on
  digitalWrite(powerLatch, HIGH);
  
  // Turn ON an LED connected to GPIO 4
  // (after the powerLatch pin is set to LOW, your board powers off and it also turns off this LED automatically)
  digitalWrite(led, HIGH);

  // ADD YOUR TASK HERE (HTTP REQUEST, MQTT Message, Datalogger, etc)
  
  // Waits for 10 seconds
  delay(10000);
  
  // Turns the power latch circuit off
  digitalWrite(powerLatch, LOW);
}

void loop() {
  
}

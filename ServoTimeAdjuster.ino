#include <Servo.h>
#include <TimeLib.h>  // Include Time library for timekeeping

Servo myservo;  // Create servo object to control the servo

int currentPosition = 0;  // Variable to store the current servo position

void setup() {
  myservo.attach(9);  // Attaches the servo on pin 9 to the servo object
  Serial.begin(9600); // Starts serial communication at 9600 bps
  // Consider adding setup code for time synchronization here
}

void loop() {
  int currentHour = hour(); // Get the current hour from the Time library

  // Map the hour to a degree value only during 6 AM to 6 PM
  int targetPosition = (currentHour >= 6 && currentHour <= 18) ? (currentHour - 6) * 15 : 0;

  // Update servo position only if it has changed
  if (currentPosition != targetPosition) {
    currentPosition = targetPosition;
    myservo.write(currentPosition);  // Tell servo to move to the new position
    delay(1000);  // Wait for the servo to reach the position
  }
}

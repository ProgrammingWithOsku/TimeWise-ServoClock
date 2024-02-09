

# Servo Clock Adjuster

This Arduino sketch controls a servo motor to adjust its position according to the current hour of the day. The servo moves to a specific angle that represents the hour, providing a physical representation of the time within a specified range.

## Features

- **Time-Based Servo Positioning:** Maps the current hour to a servo position, where each hour corresponds to a unique angle from 0 to 180 degrees.
- **Daytime Range Limitation:** Only adjusts the servo position during the daytime hours (6 AM to 6 PM). Outside this range, the servo returns to the 0-degree position.

## Requirements

- Arduino board (e.g., Uno, Mega, Nano)
- Servo motor
- Arduino IDE for uploading the code to the board

## Installation

1. **Connect the Servo:** Attach the servo's signal cable to pin 9 on your Arduino board. Also, ensure the servo's power and ground wires are properly connected to the Arduino's 5V and GND pins, respectively.
2. **Setup the Arduino IDE:** Make sure you have the Arduino IDE installed and your board's drivers are up to date.
3. **Include the Servo Library:** This sketch requires the Servo library, which is included in the Arduino IDE by default. If not present, install it using the Library Manager.

## Usage

1. **Upload the Sketch:** Open this sketch in the Arduino IDE, select your Arduino board and port, and upload the code.
2. **Monitor Serial Output:** Open the Serial Monitor in the Arduino IDE to see debug prints. The baud rate is set to 9600.
3. **Observe the Movement:** The servo will adjust its position based on the current hour. Between 6 AM and 6 PM, it will move to a position reflecting the current hour mapped to a degree between 0 and 180. Outside this range, it will reset to 0 degrees.

## Code Explanation

- The `Servo` object `myservo` controls the servo motor.
- The `pos` variable holds the servo's target position.
- In the `setup()` function, the servo is attached to pin 9, and serial communication is started.
- The `loop()` function continuously checks the current hour, calculates the corresponding servo position, and updates the servo's position accordingly.

## Troubleshooting

- **Servo Doesn't Move:** Ensure the servo is correctly powered and the signal cable is connected to pin 9. Also, check if the current hour is within the specified range.
- **Erratic Movements:** Double-check your wiring and make sure the power supply to the servo is stable and sufficient.

## License

This project is open-sourced under the MIT License.

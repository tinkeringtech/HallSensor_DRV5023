/*
Tinkeringtech.com
Hall Sensor state read Arduino sketch
 */

const int HallSensorPin =  13;      // the pin number the Hall Sensor is connected to
int HallSensorState = 0;            // variable for reading the Hall Sensor State


// the setup function runs once when you press reset or power the board
void setup() {

  pinMode(HallSensorPin, INPUT);    // initialize digital pin 13 input
  Serial.begin(9600);               // initialize serial communication at 9600 bits per second:
  
}

// loop the function forever
void loop() {
 HallSensorState = digitalRead(HallSensorPin);   // read the value of the hall sensor connected to pin 13.
 Serial.println(HallSensorState);                // print the sensor value which is either 0 or 1.
}

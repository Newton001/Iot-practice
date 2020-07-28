/* Automated Sanitization*/

/* Author Newton Kelvin*/


// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
int pump = 8;
// defines variables
long duration;
int distance;
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
pinMode(pump, OUTPUT); // Set output high
}
void loop() 
{
  measure_distance();
  if (distance < 10)
  {
    digitalWrite(pump, HIGH);
    delay(500);
    digitalWrite(pump, LOW);
    delay(500);
    
  }
}
void measure_distance()
{
  // Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}

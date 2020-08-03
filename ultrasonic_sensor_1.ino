const int trigpin=7; //trigger pin
const int echopin=6; //echo pin
long duration, distance; //calculate distance
void setup() {
  serial.begin (9600)
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(3);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(12);
  digitalWrite(trigpin, LOW);
  duration= pulseIn(echopin, HIGH);
  //calculate distance
  distance=speed/2*time 

   serial.println(distance);
  delay(50);

}

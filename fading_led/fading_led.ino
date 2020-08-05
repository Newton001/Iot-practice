#define LED 5 //declare LED at pin 5

void setup() {
  pinMode(5, OUTPUT); //sets pin 5 as output

}

void loop() {

  int i; //declares int i
  for(i=0;i<=255;i++) { //increasing the brightness
    analogWrite(5, i); //sets the analogue
                       //value of pin 5as i
    delay(100);  //delays for 100ms

  }
  for(i=255;i>=0;i--){ //decreasing the brightness
    analogWrite(5, i);
    delay(100)
  }
  

}

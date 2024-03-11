//contando che non ho mai usato Arduino, questo è ciò che sono riuscita a fare in un giorno

//Consider the following setup: an Arduino Uno board is connected to a servomotor via the Serial port and to a joystick lever on pin A2. 
//The task is to program the Arduino board to control the position of the motor based on the position of the joystick: when the joystick 
//is in its lowest position, the motor should also be in its lowest position, and vice versa.

const int X_pin = 0; // analog pin connected to X output

void setup() {
  // put your setup code here, to run once:
  pinMode(A2, INPUT);  // pin A2 per il joystick analogico in input
  pinMode(1, OUTPUT);  // pin Serial TX 1 per il servomotor DC in output 

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  stick = analogRead(A2);  // leggo valore joystick ( tra 0 e 1023, 512 è al centro)

  if (stick > 512) {
    digitalWrite(1,0x3ff);
  } else if (stick < 512) {
    digitalWrite(1,0x1ff);
  } else {
    ;
  }
  
  delay(100);
}

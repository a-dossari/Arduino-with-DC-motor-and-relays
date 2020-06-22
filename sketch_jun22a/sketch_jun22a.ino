//configure the relays
int rel1 = 5;
int rel2 = 10;

void setup() {
//configure the pins as output
pinMode (rel1, OUTPUT);
pinMode (rel2, OUTPUT);

//the pins will be disabled
digitalWrite(rel1, LOW);
digitalWrite(rel2, LOW);
}

void loop() {
int but= digitalRead (1); //the button is connected in pin 1 in the arduino board, it reads the digital value of these pin

if (but == HIGH){ //if the button is pressed
//the pins will be enabled in case of "HIGH" and disabled in case of "LOW"
digitalWrite(rel1, HIGH);
digitalWrite(rel2, LOW);
delay(500);
digitalWrite(rel1, LOW);
digitalWrite(rel2, LOW);
delay(500);
digitalWrite(rel1, LOW);
digitalWrite(rel2, HIGH);
delay(500);
digitalWrite(rel1, LOW);
digitalWrite(rel2, LOW);
delay(500);
}
}

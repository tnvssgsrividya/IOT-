int switchPin=0;//d3
int LedPin=16;//d0
int switchValue;

void setup() {
pinMode(LedPin,OUTPUT);
pinMode(switchPin,INPUT_PULLUP);

}

void loop() {
  switchValue=digitalRead(switchPin);
  digitalWrite(LedPin,!switchValue);

}

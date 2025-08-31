int rcw = 9;
int led = 11;
void setup() {
 pinMode(rcw, INPUT);
 pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
  float val = digitalRead(rcw); 
  Serial.print("Hz= ");
  Serial.println(val);
  if(val > 0){
   digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}

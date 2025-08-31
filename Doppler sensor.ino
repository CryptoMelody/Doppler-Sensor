int rcw = 2;
void setup() {
 pinMode(rcw, INPUT);
Serial.begin(9600);
}

void loop() {
  float val = digitalRead(rcw); 
  Serial.print("Hz= ");
  Serial.println(val);
  if(val > 0){
   Serial.println("The movement detected")
  }
  else {
    Serial.println("Nothing")
  }
}


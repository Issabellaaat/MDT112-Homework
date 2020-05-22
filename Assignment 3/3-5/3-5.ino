int x;
void setup() {
  Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
     for (x=3; x<13; x++) {
    pinMode(x, OUTPUT);
    }   
}
int y =0;
void loop() 
{
    
  if (digitalRead(2) == 0) 
  {
       for (x=3; x<=13; x++) {
    digitalWrite(x, 1);
    }   
    delay(100);
  } 
  else 
  {
      for (x=3; x<=13; x++) {
    digitalWrite(x, 0);
    }   

    if (digitalRead(2) == 0) {
      y++;
      Serial.println(y);
    }
  }
  
}
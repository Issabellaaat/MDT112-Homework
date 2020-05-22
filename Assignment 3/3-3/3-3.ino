 int x=0;
void setup(){
    Serial.begin(9600);
    for (x=2; x<13; x++) {
    pinMode(x, OUTPUT);}     
}

void loop(){
   for (x=2; x<=13; x++) {
        delay (250);
    digitalWrite(x, 1);    
        delay (250);
        }
      
    for (x=2; x<=13; x++) { 
    digitalWrite(x, 0); 
        }   
        delay (250);

}
long lastTimeStateChange = 0;
String state = "ON";
void setup()
{
    Serial.begin(9600);
     int x;
    for (x=2; x<13; x++) {
    pinMode(x, OUTPUT);
    }   

}
void loop()
{
     long currentTime = millis();
     if (state == "ON" ){
    int x= 0;
   for (int x=0;x<13;x++)
   {
       digitalWrite(x,1);
    delay(500);
    digitalWrite(x,0);
   } 
     }
}
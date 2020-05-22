long lastTimeStateChange = 0;
String state = "ON";
void setup(){
    Serial.begin(9600);
    int x;
    for (x=2; x<13; x++) {
    pinMode(x, OUTPUT);
    }   
}
int x =0;
void loop(){
    long currentTime = millis();
    if (state == "ON" ){
        for (x=2; x<=7; x++) {
    digitalWrite(x, 1);}
        for (x=8; x<=13; x++) {
    digitalWrite(x,0);}
  
    if (currentTime - lastTimeStateChange >=500) {
            state = "OFF";
            lastTimeStateChange = currentTime;
        }
    }

    if (state == "OFF" ){
        for (x=2; x<=7; x++) {
    digitalWrite(x, 0);}
        for (x=8; x<=13; x++) {
    digitalWrite(x,1);}
   
     if (currentTime - lastTimeStateChange >=500) {
            state = "ON";
            lastTimeStateChange = currentTime;
        }
    }
}
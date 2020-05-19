void setup(){
    Serial.begin(9600);
    int x = 5;

    int *xp;
    xp = &x;
    Serial.print("This is value : " + String(*xp));
    Serial.print(int(xp),16)
}
void loop(){}
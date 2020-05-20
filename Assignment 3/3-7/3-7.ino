void setup() 
{
  Serial.begin(9600);

  int x;
    for (x=2; x<13; x++) {
    pinMode(x, OUTPUT);
    }   
}

int x = 1;
int a = 2;
void loop() 
{
  for (int i = 0; i < x && x <= 100; i++) 
  {
    for (int j = 1; j < a && j <= 13; j++) 
    {
      digitalWrite(a, 1);
      a++;
      if (a > 13) 
      {
        break;
      }
    }
    delay(x * 10);
    a = 2;
    for (int k = 1; k < a && k <= 13; k++) 
    {
      digitalWrite(a, 0);
      a++;
      if (a > 13) {
        break;
      }
    }
    delay(x * 10);
    a = 2;
  }
  x++;
  if (x > 100) {
      int y;
    for (y=2; y<13; y++) {
    pinMode(y,0);
    }   
    delay(1000);
    x = 1;
  }
}
 
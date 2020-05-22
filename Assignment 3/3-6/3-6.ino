int x;
void setup() 
{
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
 for (x=3; x<13; x++) {
    pinMode(x, OUTPUT);
    }  
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  Serial.println("Hello World");

}


void loop()
{
if (digitalRead(2) == 0) 
{
    
    switch (x) 
        {
            case 1:
            digitalWrite(8, 1);
             digitalWrite(9, 1);
             digitalWrite(10, 1);
            digitalWrite(11, 1);
            digitalWrite(12, 1);
            digitalWrite(13, 1);
            break;
        }
    

    if (digitalRead(2) == 0) 
    {
        switch (x) 
        {
            case 1:
            digitalWrite(8, 1);
            digitalWrite(9, 1);
             digitalWrite(10, 1);
             digitalWrite(11, 1);
             digitalWrite(12, 1);
              digitalWrite(13, 1);
              delay(100);

             digitalWrite(8, 0);
             digitalWrite(9, 0);
              digitalWrite(10, 0);
            digitalWrite(11, 0);
            digitalWrite(12, 0);
            digitalWrite(13, 0);
            delay(100);
            break;
        }
    }

    if (digitalRead(2) == 0) 
    {
      switch (x)
      {
          case 1:
      digitalWrite(8, 0);
      digitalWrite(9, 0);
      digitalWrite(10, 0);
      digitalWrite(11, 0);
      digitalWrite(12, 0);
      digitalWrite(13, 0);
      break;
      }
    }

    switch (x)
    {
        case 2:
      x = 1;
      break;
    }
}

else 
  {
    switch (x) 
    {
    case 1:
      digitalWrite(8, 1);
      digitalWrite(9, 1);
      digitalWrite(10, 1);
      digitalWrite(11, 1);
      digitalWrite(12, 1);
      digitalWrite(13, 1);
      break;
    case 2:
      digitalWrite(8, 1);
      digitalWrite(9, 1);
      digitalWrite(10, 1);
      digitalWrite(11, 1);
      digitalWrite(12, 1);
      digitalWrite(13, 1);
      delay(100);
      digitalWrite(8, 0);
      digitalWrite(9, 0);
      digitalWrite(10, 0);
      digitalWrite(11, 0);
      digitalWrite(12, 0);
      digitalWrite(13, 0);
      delay(100);
      break;
    case 3:
      digitalWrite(8, 0);
      digitalWrite(9, 0);
      digitalWrite(10, 0);
      digitalWrite(11, 0);
      digitalWrite(12, 0);
      digitalWrite(13, 0);
      break;
    case 4:
      x = 1;
      break;
    }
  }
  
    if (digitalRead(2) == 0) 
    {
      x++;
    }
}


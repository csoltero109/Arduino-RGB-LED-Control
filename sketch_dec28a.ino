int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{
  for(int r = 0; r <= 255; r++){
      for(int g = 0; g <= 255; g++){
          for(int b = 0; b <= 255; b++){
              setColor(r, g, b);
              delay(10);
            }
        }
    }
}
 
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}


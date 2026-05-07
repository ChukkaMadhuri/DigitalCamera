#include <LiquidCrystal.h>

// LCD Pins (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int buttonPin=7;
int ledPin=8;

void setup()
{
  pinMode(buttonPin,INPUT);
  pinMode(ledPin, OUTPUT);
  
  lcd.begin(16, 2);
  lcd.print("Camera Ready");
  
}

void loop()
{ 
  if(digitalRead(buttonPin)== 1);
  {
  lcd.clear();
  lcd.print("Capturing");
  digitalWrite(ledPin, HIGH);
    
 delay(20000);

  lcd.clear();
  lcd.print("Image saved");
  digitalWrite(ledPin, 1);

  delay(20000);
  }
}
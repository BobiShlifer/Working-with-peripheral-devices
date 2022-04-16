#include <rgb_lcd.h>
rgb_lcd lcd;

void printName(){  
  lcd.setCursor(0,0);
  lcd.print("Robert");
  lcd.setCursor(0,1);
  lcd.print("GrNum ");
}

void setup() {  
    lcd.begin(16, 2);  
    Serial.begin (9600);     
    printName();   
}

void loop() {   
  delay(1000);
  int result = analogRead(A1);  
  lcd.setCursor(7,1);
  lcd.print(result);  
}

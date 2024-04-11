//liquid crystal librery for control the lcd.
#include <LiquidCrystal.h>



//drfine the pins
 //lcd pins:
 int RS = 13;
 int E = 12;
 int D4 = 11;
 int D5 = 10;
 int D6 = 9;
 int D7 = 8;
 LiquidCrystal lcd(RS,E,D4,D5,D6,D7);
 //buz pins:
 int buzz_pin = 3;
 //rgb led pins:
 int rgb_r_pin = A5;
 int rgb_g_pin = A4;
 int rgb_b_pin = A3;
 //water sensor pins:
 int ws_pin = A0; 
// -------------


//the system functions
void setup() {

  //set the buzz pin:
  pinMode(buzz_pin,OUTPUT);

  //read from the water sensor:
  pinMode(ws_pin, INPUT);

  lcd.begin(20,4);
  lcd.setCursor(0,0);
  lcd.println("WATER SENSOR IS ON !");
  lcd.setCursor(0,1);
  lcd.println("MADE BY YAHIA.BSK");
  //Serial.begin(9600);
}



void loop() {

  int ws_data = map(analogRead(ws_pin), 0, 1023, 0, 255);
  //calc the water level:
  int water_per = (ws_data*100)/254;

  lcd.setCursor(0,2);
  lcd.print("WATER LEVEL ==> "); lcd.print(water_per); lcd.println("%");

  //rgb led logic
  if(water_per >= 0){
    if(water_per == 0){ //white
      analogWrite(rgb_r_pin, 255);
      analogWrite(rgb_g_pin, 255);
      analogWrite(rgb_b_pin, 255);
      lcd.setCursor(0,3);
      lcd.println("LED => WHITE : EMPTY");
    }
    if(water_per <= 30 && water_per > 0){ //green
      analogWrite(rgb_r_pin, 0);
      analogWrite(rgb_g_pin, 255);
      analogWrite(rgb_b_pin, 0);
      lcd.setCursor(0,3);
      lcd.println("LED => GREEN : V.LOW");
    }
    if(water_per > 30 && water_per <= 60){ //yellow
      analogWrite(rgb_r_pin, 255);
      analogWrite(rgb_g_pin, 255);
      analogWrite(rgb_b_pin, 0);
      lcd.setCursor(0,3);
      lcd.println("LED => YELLOW : MEDUIM");
    }
    if(water_per > 60 && water_per < 90){ //purple
      analogWrite(rgb_r_pin, 170);
      analogWrite(rgb_g_pin, 0);
      analogWrite(rgb_b_pin, 255);
      lcd.setCursor(0,3);
      lcd.println("LED => PURPLE : HIGH");
    }
    if(water_per >= 90 && water_per < 99){ //red
      analogWrite(rgb_r_pin, 255);
      analogWrite(rgb_g_pin, 0);
      analogWrite(rgb_b_pin, 0);
      lcd.setCursor(0,3);
      lcd.println("LED => RED : DANGER!");
    }
    if(water_per == 100){
      lcd.setCursor(0,3);
      lcd.println("WATER LEVER FULL!   ");
      digitalWrite(buzz_pin,1);
    }else{
      digitalWrite(buzz_pin,0);
    }
  }


}

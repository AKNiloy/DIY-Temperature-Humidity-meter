
#include <dht.h>                        //include the DHT library
#include <LiquidCrystal.h>              //include the LiquidCrystal library
#define DHTPin 12                        //define DHT pin
LiquidCrystal lcd(1, 3, 4, 5, 6, 7);    //define LCD pins (RS, E, D4, D5, D6, D7)
dht DHT;

void setup() {
   
  lcd.begin(16,2);//initializes the LCD and specifies the dimensions
}
void loop() {
  DHT.read11(DHTPin);
  float temp = DHT.temperature;
  float humi = DHT.humidity;
  lcd.setCursor(0,0); // write in the 1st row of the LCD
  lcd.print("Temp: ");
  lcd.print(temp);
  lcd.print(" C");
  lcd.setCursor(0,1); //write in the 2ND row of the lCD
  lcd.print("Humi: ");
  lcd.print(humi);
  lcd.print(" %");
  delay(2000); //reading after every 2 seconds
}

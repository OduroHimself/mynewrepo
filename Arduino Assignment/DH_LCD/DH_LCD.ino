// Diaplay Temperature and humidity readings on LCD 16x2
// import libraries (LiquidCrystal.h and DHT.h)
// creat object for LCD and the DHT 
//Turn the LCD on by specifying the size

# include<LiquidCrystal.h>
# include<DHT.h>
# define DHTtype 11
# define Dpin 2
LiquidCrystal lcd(10,9,5,4,3,2);
//LCD object with pins assigned  as (Rs,E,D3-D0)
DHT dht(Dpin, DHTtype); 
void setup() {
  lcd.begin(16,2);
  dht.begin();
  
}

void loop() {
  delay(2000);
  float tr = dht.readTemperature();
  float hr = dht.readTemperature();
  lcd.setCursor(0,0);
  lcd.print("Temperature : ");
  lcd.print(tr);
  lcd.println( "C");

  lcd.setCursor(0,1);
  lcd.print("Humidity : ");
  lcd.print(tr);
  lcd.println( "C");

}

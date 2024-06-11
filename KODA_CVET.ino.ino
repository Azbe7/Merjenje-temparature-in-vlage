#include <DHT.h>
#include <LiquidCrystal.h>

// Definicija pinov za DHT senzor in LCD zaslon
#define DHTPIN A0
#define DHTTYPE DHT11

// Ustvarjanje objektov za DHT senzor in LCD zaslon
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(8, 7, 12, 11, 10, 9);

void setup() {
  // Inicializacija serijskega monitorja za debugiranje
  Serial.begin(9600);

  // Inicializacija DHT senzorja
  dht.begin();

  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.write("Senzor je");
  lcd.setCursor(0,2);
  lcd.write("pripravljen");
  delay(2000);

}

void loop() {
  // Branje temperature in vlage iz DHT senzorja
  delay(100);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  // Prikaz temperature in vlage na LCD zaslonu
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Vlaga: ");
  lcd.print(h);
  lcd.print(" %");

  delay(10); // Posodobitev na vsaki 2 sekundi
}
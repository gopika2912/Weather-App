#include <SoftwareSerial.h>
#include <LiquidCrystal.h> // Load Liquid Crystal Library
#include <DHT.h>

#define DHTPIN 12   // Pin which is connected to the DHT sensor
#define DHTTYPE DHT11 // DHT 11 Sensor

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal LCD(2,3,4,5,6,7); // Create Liquid Crystal Object

int cnt = 0;
int t, h, mq, rain;

void setup() {
    LCD.begin(16, 2); // Initialize 16x2 LCD
    Serial.begin(9600);
    dht.begin();
}

void loop() {
    h = dht.readHumidity();
    t = dht.readTemperature();
    rain = analogRead(A1);
    mq = analogRead(A0);

    // Display values on LCD
    LCD.setCursor(0,0);
    LCD.print("                "); // Clear previous values
    LCD.setCursor(0,0);
    LCD.print(t); LCD.setCursor(4,0);
    LCD.print(h); LCD.setCursor(8,0);
    LCD.print(rain); LCD.setCursor(13,0);
    LCD.print(mq);

    cnt++;
    delay(1000);

    if (cnt >= 10) {
        Serial.print("*"); Serial.print(t); Serial.print(",");
        Serial.print(h); Serial.print(",");
        Serial.print(rain); Serial.print(",");
        Serial.print(mq); Serial.println("#");
        cnt = 0;
    }
}

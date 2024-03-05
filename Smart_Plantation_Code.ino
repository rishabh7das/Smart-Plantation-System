#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#define OLED_RESET 4
#define DHTPIN 2
#define DHTTYPE    DHT11
DHT_Unified dht(DHTPIN, DHTTYPE);
uint32_t delayMS;
Adafruit_SSD1306 display(OLED_RESET);
int show=0;
int led=13;
int buzzer=11;
int high_moisture=0;
int moisture=0;
int light=0;
float moisture_percentage=0.0;
float light_percentage=0.0;
int relay=8;
int flag=0;
void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(relay,OUTPUT);
Serial.begin(9600);
dht.begin();
  sensor_t sensor;
  dht.temperature().getSensor(&sensor);
   dht.humidity().getSensor(&sensor);
   delayMS = sensor.min_delay / 1000;
}

void loop() {
  sensors_event_t event;
  moisture=analogRead(A0); 
  light=analogRead(A1);
  moisture_percentage=((1024.0-moisture)/1024.0)*100.0;
  light_percentage=((1024.0-light)/1024.0)*100.0;
  String mp = ""; 
  String lp="";
  mp.concat(moisture_percentage);
  mp+="%";
  lp.concat(light_percentage);
  lp+="%";
  

  if(moisture<=850)
  {
    high_moisture=0;
  }
  else
  {
    high_moisture=1;
  }

  if(light>=500&&flag==0)
  {
    digitalWrite(relay,LOW);
    flag=1;
  }
  else if(light<500&&flag==1)
  {
    digitalWrite(relay,HIGH);
    flag=0;
  }

  if(high_moisture)
  {
    tone(buzzer,300,500);
    delay(500);
    //noTone(buzzer);
  }
  else
  {
    noTone(buzzer);
    //tone(buzzer,300,500);
    //delay(500);
  }

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  if(show%4==0)
  {
  display.println("Moisture:");
  display.println(mp);
  }
  else if(show%4==1)
  {
  display.println("Light:");
  display.println(lp);
  }
  else if(show%4==2)
  {
     dht.temperature().getEvent(&event);
  display.println("Temp.:");
  if (!isnan(event.temperature)) {
    display.println(event.temperature);
  }else
  {
    display.println("Error");
  }
  }
  else if(show%4==3)
  {
      dht.humidity().getEvent(&event);
  display.println("Humidity:");
  if (!isnan(event.relative_humidity)) {
    display.println(event.relative_humidity);
  }else
  {
    display.println("Error");
  }
  }

  display.display();

  show++;
  Serial.println("moisture: "+mp+"   light: "+lp+"  temperature: "+event.temperature+"  humidity: "+event.relative_humidity);
  
 
 delay(1000);
}

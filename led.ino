#define BLYNK_TEMPLATE_ID "TMPL3NDJojAvO"
#define BLYNK_TEMPLATE_NAME "ON"
#define BLYNK_AUTH_TOKEN "BBURH46xkm2KPAhHALOEdLvYalXr2TMZ"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "R";  // Enter your Wifi Username
char pass[] = "12345678";  // Enter your Wifi password

int ledpin = D4;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  Blynk.run(); 
}

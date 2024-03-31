//To connect ESP8266 Witty Cloud Development Board to wifi and print IP address of the n/w

#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(9600);
  WiFi.begin("Galaxy M2155AF ","Pnu1234");
  while(WiFi.status() != WL_CONNECTED){
    Serial.print('.');
    delay(200);
  }
  Serial.println();
  Serial.println("Witty Board Connect");
  Serial.println(WiFi.localIP());
}

void loop() {

}

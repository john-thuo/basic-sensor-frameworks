#include <ThingSpeak.h>
#include <ESP8266WiFi.h>

//-------- Enter Your Wi-Fi Details -----//
char ssid[] = "njoro";  //SSID
char pass[] = "1215872g"; //Password
//--------------------------------------//

WiFiClient  client;

unsigned long myChannelField = 1467981; // Channel ID
const int ChannelField = 1; // Which To Field Write
const char * myWriteAPIKey = "LKAF33EQL0L2UQB"; // Write API Key

String value = "";
void setup()
{
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  ThingSpeak.begin(client);
}
void loop()
{
  if (Serial.available() > 0)
  {
    while (Serial.available() > 0)
    {
      int inChar = Serial.read();
      value += (char)inChar;
    }
  }
  if (WiFi.status() != WL_CONNECTED)
  {
    while (WiFi.status() != WL_CONNECTED)
    {
      WiFi.begin(ssid, pass);
      delay(5000);
    }
  }
  ThingSpeak.writeField(myChannelField, ChannelField, value, myWriteAPIKey);
  value = "";
}

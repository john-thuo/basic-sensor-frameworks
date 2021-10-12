int myValue = 0;

void setup()
{
  Serial.begin(9600);
  
}
void loop()
{
 myValue = random(100);
 Serial.print("This value is:");
 Serial.println(myValue);
 delay(1000);
 }

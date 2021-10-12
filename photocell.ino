//getting reading using a photocell or light dependant resistor.
//declaring the pins
int photocellPin = 2;
int photocellReading;

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  //getting readings from the sensors
  photocellReading = analogRead (photocellPin);

  //printing values from the sensor.
  Serial.print ("Analogue readings ");
  Serial.print (photocellReading);
  
  delay(1000);
  }

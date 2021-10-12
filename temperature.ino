//temperature sensor 
//pin declaration
const int temperaturePin =0;

//value declaration
float adcValue;
float voltage;
float degreesC;

void setup ()
{
  Serial.begin(9600);
  }
  void loop()
{

  adcValue = analogRead(temperaturePin);
//converting the analogue & voltage value to temperature degree values 

  voltage = (adcValue*5)/1023;

  degreesC = 100*voltage - 50;
//printing the temperature values
  Serial.print ("ADC Value: ");
  Serial.print(adcValue);

  Serial.print("voltage: ");
  Serial.print(voltage);

  Serial.print(" deg c: ");
  Serial.println(degreesC);

   delay(1000);

  

  
}

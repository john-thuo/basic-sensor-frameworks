//using a thermistor to get temperature 
/*in this code we shall utilize the steinhart equation for us to get temperature values we need to have the concepts
 * of NTC (negative temperature coeffient) and RTC (resistance temperature dector)
 * 
 */
//declaring the globalvariables
const int temperaturePin = 0;
 float a=0.001129148;
 float b=0.000234125;

 void setup()
 {
  
  Serial.begin(9600);
  
 }

 void loop()
 {
  int temperature = getTemp();
  Serial.print("Temperature Values: ");
  Serial.print(temperature);
  Serial.print("*c");
  delay(1000);
 }
   //sub-program that take the raw values gotten from the thermistor and passing them throught the steinhart equation so that we get the actual temp values
 double getTemp()
 {
  //input ADC values from Thermiostor and outputs temperature in celsius
  int  RawADC = analogRead(temperaturePin);
  long Resistance;
  double Temp;

  //assuming a 10k thermistor. calculation is actually:Resistance =(1024/ADC)
  Resistance=((1024/RawADC) -10000);

  //utilizes the steinhart-Hart thermistor equation:
  //tempurature in kelvin =1 / {A + B(LN(R)}+C[LN(R)]^3}

  Temp = log(Resistance);
  Temp = 1/(a+(b*Temp) + (0.0000000876741*Temp*Temp*Temp));
  Temp=Temp-273.15 ;//converting the temp in kelvin to celcius

  return Temp; //return the calculated temperature values.
 }

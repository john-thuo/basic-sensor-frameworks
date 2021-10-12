//using the photocell to control the amount of light produced by an LED

//declaration of pins and global variables
int photocellPin = 0;
int ledPin = 2;
int photocellReading;
const float limit = 100;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  
  }

 void loop()
 {

  //getting readings from the LDR sensor
  photocellReading = analogRead(photocellPin);

  //printing values from the photocell
  Serial.print("Analog reading = ");
  Serial.println(photocellReading);

  if (photocellReading<limit)
  {
      digitalWrite(ledPin, HIGH);
      
  }
  else
  {
      digitalWrite(ledPin, LOW);
      
    }

    delay(1000);
  
  }
 

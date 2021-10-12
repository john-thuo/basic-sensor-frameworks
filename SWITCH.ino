//declaring the pins
const int buttonPin = 7;
const int ledPin = 8;

//intializing the button state
int buttonState = 0;

//intializing the pins to be used
void setup ()
{
  pinMode (ledPin, OUTPUT);

  pinMode (buttonPin, INPUT_PULLUP);
  
}

//main program
void loop()
{
  //getting the button state.
  buttonState =digitalRead(buttonPin);

  //dertermining the decision from the butttone state
  if (buttonPin == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}

//BLINKING LED
//program declaration
void setup(){
 
  Serial.begin(9600);
  pinMode(11,output);
}

//main program

void loop(){

  //turning on the led
  digitalWrite(11, HIGH);
  Serial.print("led ON");
  delay(1000);

  //turning off the led
  digitalWrite(11,LOW);
  Serial.print("led OFF");
  
}

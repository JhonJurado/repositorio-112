void setup()
{
  pinMode(2, IMPUT);
  pinMode(LED_BUILTIN,OUTPUT);
}
void loop()
{
  if (digitalRead(2) = HIHG){
    digitalWrite(LET_BUILTIN, HIGH);
  } else { digitalWrite(LED_BUILTIN, LOW);
         }
}

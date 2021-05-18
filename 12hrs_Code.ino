int Relay = 7;

void setup()
{
  pinMode(Relay, OUTPUT);
}

void loop()
{
  digitalWrite(Relay, HIGH);
  delay(43200000);
  digitalWrite(Relay, LOW);
  delay(8000);
  
}

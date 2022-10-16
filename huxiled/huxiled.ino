#define pin 13
int i = 0;
int flag = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);

}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);
  delayMicroseconds(i);
  digitalWrite(pin, LOW);
  delayMicroseconds(1000 - i);
  if(flag == 0)
  {
    i++;
    if(i>1000)
    {
      flag = 1;
    }
  }
  if(flag == 1)
  {
    i--;
    if(i == 0)
    {
      flag = 0;
    }
  
  }
}

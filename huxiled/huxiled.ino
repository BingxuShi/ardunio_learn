#define pin 13
int i = 0;
int flag = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT); //设置13脚为输出模式

}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);     //把13脚设置高电瓶
  delayMicroseconds(i);        //delay i us
  digitalWrite(pin, LOW);      //把13脚设置低电平
  delayMicroseconds(1000 - i); //delay 1000 - i us
  /* 占时间逐渐增高随后逐渐降低 */
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
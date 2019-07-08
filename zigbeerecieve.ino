const int p1 = 22;
const int p2 = 24;
const int p3 = 26;
const int p4 = 28;
char incoming;

void setup()
{
  void forward();
  void backward();
  void left();
  void right();
  void steady();
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  pinMode(p4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  while(Serial.available()>0)
  {
    incoming= Serial.read();
  {if(incoming=='f')
   forward();
   //break;
   if(incoming=='b')
   backward();
   //break;
   if(incoming=='r')
   right();
   //break;
   if(incoming=='l')
   left();
   //break;
   if(incoming=='s')
   steady();
   //break;
  }
  }
}

void forward()
{
  digitalWrite(p1,HIGH);
  digitalWrite(p2,LOW);
  digitalWrite(p3,LOW);
  digitalWrite(p4,LOW);
}
void backward()
{
  digitalWrite(p1,LOW);
  digitalWrite(p2,HIGH);
  digitalWrite(p3,LOW);
  digitalWrite(p4,LOW);
}
void left()
{
  digitalWrite(p1,LOW);
  digitalWrite(p2,LOW);
  digitalWrite(p3,HIGH);
  digitalWrite(p4,LOW);
}
void right()
{
  digitalWrite(p1,LOW);
  digitalWrite(p2,LOW);
  digitalWrite(p3,LOW);
  digitalWrite(p4,HIGH);
}
void steady()
{
  digitalWrite(p1,LOW);
  digitalWrite(p2,LOW);
  digitalWrite(p3,LOW);
  digitalWrite(p4,LOW);
}



#define ENA 6  //enable A on pin 5 (needs to be a pwm pin)
#define ENB 5  //enable B on pin 3 (needs to be a pwm pin)
#define IN1 A0  //IN1 on pin 2 conrtols one side of bridge A
#define IN2 A1  //IN2 on pin 4 controls other side of A
#define IN3 A2  //IN3 on pin 6 conrtols one side of bridge B
#define IN4 A3  //IN4 on pin 7 controls other side of B

void setup()
{
  //set all of the outputs
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop()
{
  //MOTOR A CLOCKWIISE
   digitalWrite(IN1, LOW);   
   digitalWrite(IN2, HIGH);
   analogWrite(ENA, 255); 
   //MOTOR B CLOCKWISE
   digitalWrite(IN3, LOW);   
   digitalWrite(IN4, HIGH);  
   analogWrite(ENB, 255);  
  
  
    
  
}


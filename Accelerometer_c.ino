


const int groundpin = A4;             // analog input pin 4 -- ground
const int powerpin = A5;              // analog input pin 5 -- voltage
const int xpin = A0;                  // x-axis of the accelerometer
const int ypin = A1;                  // y-axis
//const int zpin = A5;                  // z-axis (only on 3-axis models)
int ledf = 2;
int ledb = 8;
int ledl = 12;
int ledr = 13;

void setup()
{
  // initialize the serial communications:
  Serial.begin(9600);

  pinMode(groundpin, OUTPUT);
  pinMode(powerpin, OUTPUT);
  digitalWrite(groundpin, LOW); 
  digitalWrite(powerpin, HIGH);
  pinMode(ledl,OUTPUT);
  pinMode(ledr,OUTPUT);
  pinMode(ledf,OUTPUT);
  pinMode(ledb,OUTPUT);
}

void loop()
{
  // print the sensor values:
  Serial.print(analogRead(xpin));
  // print a tab between values:
  Serial.print("\t");
  Serial.print(analogRead(ypin));
  // print a tab between values:
  Serial.print("\t");
  //Serial.print(analogRead(zpin));
  Serial.println();
  // delay before next reading:
  if((360<=analogRead(xpin)&& analogRead(xpin)<=400) && (350<=analogRead(ypin)&& analogRead(ypin)<=400) )
  {
    digitalWrite(ledf,LOW);
    digitalWrite(ledb,LOW);
    digitalWrite(ledl,LOW);
    digitalWrite(ledr,LOW);
  }
  
  
  if((360<=analogRead(xpin)&& analogRead(xpin)<=400) && (300<=analogRead(ypin)&& analogRead(ypin)<=340) )
  {
    digitalWrite(ledf,LOW);
    digitalWrite(ledb,LOW);
    digitalWrite(ledl,HIGH);
    digitalWrite(ledr,LOW);
    
  }
  if((360<=analogRead(xpin)&& analogRead(xpin)<=400) && (390<=analogRead(ypin)&& analogRead(ypin)<=420) )
  {
    digitalWrite(ledf,LOW);
    digitalWrite(ledb,LOW);
    digitalWrite(ledl,LOW);
    digitalWrite(ledr,HIGH);
    
  }
  if((320<=analogRead(xpin)&& analogRead(xpin)<=340) && (340<=analogRead(ypin)&& analogRead(ypin)<=400) )
  {
    digitalWrite(ledf,HIGH);
    digitalWrite(ledb,LOW);
    digitalWrite(ledl,LOW);
    digitalWrite(ledr,LOW);
    
  }
  if((380<=analogRead(xpin)&& analogRead(xpin)<=430) && (350<=analogRead(ypin)&& analogRead(ypin)<=400) )
  {
    digitalWrite(ledf,LOW);
    digitalWrite(ledb,HIGH);
    digitalWrite(ledl,LOW);
    digitalWrite(ledr,LOW);
    
  }

  delay(100);
}

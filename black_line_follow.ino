int l,r;
void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop()
{
 l=digitalRead(2);
 r=digitalRead(3);
 
if(l==HIGH && r==HIGH)
 
 {
  digitalWrite(8,HIGH); 
  digitalWrite(9,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);

 }
 
  else if (l==HIGH && r==LOW)
 
 {
  digitalWrite(8,HIGH); 
  digitalWrite(9,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);

 }
 
  else if(l==LOW && r==HIGH)
 
 {
  digitalWrite(8,HIGH); 
  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  
 }
 
  
else if  (l==LOW && r==LOW)
 
 {
  digitalWrite(8,HIGH); 
  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
 }
 
}
  

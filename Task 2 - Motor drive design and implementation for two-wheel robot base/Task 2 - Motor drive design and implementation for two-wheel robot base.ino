// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);

  

}

void setColor(int red, int green, int blue)
{
  analogWrite(3, red);
  analogWrite(2, green);
  analogWrite(1, blue);  
}

void forward()
{	
  setColor(255,0,0);
  
  digitalWrite(13, 0);
  digitalWrite(12, 1);
  digitalWrite(11, 1);
  digitalWrite(10, 0);
  
  
}

void backward()
{

  setColor(0,255,0);
  digitalWrite(13, 1);
  digitalWrite(12, 0);
  digitalWrite(11, 0);
  digitalWrite(10, 1);
}

void right()
{
  setColor(0,0,255);
  digitalWrite(2, 255);
  digitalWrite(13, 1);
  digitalWrite(12, 0);
  digitalWrite(11, 1);
  digitalWrite(10, 0);
}

void left()
{
  setColor(255,255,0);
  digitalWrite(13, 0);
  digitalWrite(12, 1);
  digitalWrite(11, 0);
  digitalWrite(10, 1);
  
  
}

void stop()
{
  digitalWrite(13, 0);
  digitalWrite(12, 0);
  digitalWrite(11, 0);
  digitalWrite(10, 0);
}

void loop()
{
  forward();
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  backward();
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  right();
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  left();
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  stop();
  
  delay(3000); // Wait for 3000 millisecond(s)
  



}
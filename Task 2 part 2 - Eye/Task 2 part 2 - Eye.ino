// C++ code
//
void setup()
{
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
  
}

void backward()
{

  setColor(0,255,0);

}

void right()
{
  setColor(0,0,255);

}

void left()
{
  setColor(255,255,0);
  
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

}
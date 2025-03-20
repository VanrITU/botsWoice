
//Library and instantiation of SimpleExpressions making our buzzer sound in different patterns

#include <SimpleExpressions.h>
#include <Sounds.h>
int nonuseLED = 0; //SimpleExpressions is made for a specific LED strip and needs a LEDpin for us to use its buzzer functions
int Buz = 7;

void setup()
{
  Serial.begin(9600);
  
  pinMode(Buz, OUTPUT);
  SimpleExpressions.init(Buz);
  SimpleExpressions.playSound(S_CONNECTION);
}

 

void loop()
{
  SimpleExpressions.playSound(S_HAPPY);
  SimpleExpressions.playSound(S_SUPER_HAPPY);
  SimpleExpressions.playSound(S_OHOOH);
}
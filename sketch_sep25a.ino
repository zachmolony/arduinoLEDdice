
int pinLeds1 = 10;
int pinLeds2 = 9;
int pinLeds3 = 7;
int pinLeds4 = 8;
int buttonPin = 6;
int pinLed52 = 11;
int test = 2;
int test2 = 3;
int buttonState;
long ran;
int time = 2000;

void setup ()
{
  pinMode (pinLeds1, OUTPUT);
  pinMode (pinLeds2, OUTPUT);
  pinMode (pinLeds3, OUTPUT);
  pinMode (pinLeds4, OUTPUT);
  pinMode (buttonPin, INPUT);
  pinMode (test, OUTPUT);
  pinMode (test2, OUTPUT);
  randomSeed(analogRead(0));
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    ran = random(0, 7);
    if (ran == 1){
      digitalWrite (pinLeds3, HIGH);
      delay (time);
    }
    if (ran == 2){
      digitalWrite (pinLeds4, HIGH);
      delay (time);
    }
    if (ran == 3){
      digitalWrite (pinLeds4, HIGH);
      digitalWrite (pinLeds3, HIGH);
      delay (time);
    }
    if (ran == 4){
      digitalWrite (pinLeds1, HIGH);
      digitalWrite (pinLeds4, HIGH);
      delay (time);
    }
    if (ran == 5){
      digitalWrite (pinLeds1, HIGH);
      digitalWrite (pinLeds3, HIGH);
      digitalWrite (pinLeds4, HIGH);
      delay (time);
   }
   if (ran == 6){
      pinMode (pinLeds1, OUTPUT);
      pinMode (pinLeds2, OUTPUT);
      pinMode (pinLeds4, OUTPUT);
      pinMode (test, OUTPUT);
      pinMode (test2, OUTPUT);
      delay (time);
   }
  }
  digitalWrite (pinLeds1, LOW);
  digitalWrite (pinLeds2, LOW);
  digitalWrite (pinLeds3, LOW);
  digitalWrite (pinLeds4, LOW);
  digitalWrite (test, LOW);
  digitalWrite (test2, LOW);
}

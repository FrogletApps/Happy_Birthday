void setup() {
  // put your setup code here, to run once:

pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);

//for the buzzer
#define Buzzer 2

//for note indicators
#define RedLED 3
#define YellowLED 4
#define GreenLED 5
#define Red2LED 6
#define Green2LED 7


//test that everything is working - quickly turn all LEDs on and off and beep twice
blinky();

delay(1000);

g();
delay(50);
shortg();
a();
g();
c();
b();

delay(500);

g();
delay(50);
shortg();
a();
g();
d();
c();

delay(500);

g();
delay(50);
shortg();
highg();
e();
c();
b();
a();

delay(500);

f();
f();
e();
c();
d();
c();

}
void loop() {
  //This is the main code, and will be repeated forever

}


//below are subroutines


//this is the setup, to make sure everything is working
void blinky() {
set();
  delay (500);
reset();
  delay (1000);
}

//turns all the LEDs off
void reset(){
  digitalWrite(RedLED,LOW);
  digitalWrite(YellowLED,LOW);
  digitalWrite(GreenLED,LOW);
  digitalWrite(Green2LED,LOW);
  digitalWrite(Red2LED,LOW);
}

//turns all the LEDs on and beeps the buzzer twice
void set(){
  digitalWrite(RedLED,HIGH);
  digitalWrite(YellowLED, HIGH);
  digitalWrite(GreenLED,HIGH);
  digitalWrite(Red2LED,HIGH);
  digitalWrite(Green2LED,HIGH);
  
  beep250();
  beep250();
}


//this makes the buzzer beep - it takes 250ms to complete
void beep250(){
  tone(Buzzer,2500,100);
  delay (150);
}

void shortg(){
  tone(Buzzer,780,225);
  digitalWrite(RedLED,HIGH);
  delay(500);
  digitalWrite(RedLED,LOW);
}
void g(){
  tone(Buzzer,780,500);
  digitalWrite(RedLED,HIGH);
  delay(500);
  digitalWrite(RedLED,LOW);
}

void a(){
  tone(Buzzer,860,500);
  digitalWrite(YellowLED,HIGH);
  delay(500);
  digitalWrite(YellowLED,LOW);
}

void b(){
  tone(Buzzer,987,500);
  digitalWrite(GreenLED,HIGH);
  delay(500);
  digitalWrite(GreenLED,LOW);
}

void c(){
  tone(Buzzer,1047,500);
  digitalWrite(Red2LED,HIGH);
  delay(500);
  digitalWrite(Red2LED,LOW);
}

void d(){
  tone(Buzzer,1175,500);
  digitalWrite(Green2LED,HIGH);
  delay(500);
  digitalWrite(Green2LED,LOW);
}

void e(){  
  tone(Buzzer,1319,500);
  digitalWrite(YellowLED,HIGH);
  digitalWrite(Red2LED,HIGH);
  delay(500);
  digitalWrite(YellowLED,LOW);
  digitalWrite(Red2LED,LOW);
}

void f(){  
  tone(Buzzer,1397,500);
  digitalWrite(Green2LED,HIGH);
  digitalWrite(GreenLED,HIGH);
  digitalWrite(RedLED,HIGH);
  delay(500);
    digitalWrite(Green2LED,LOW);
  digitalWrite(GreenLED,LOW);
  digitalWrite(RedLED,LOW);
}

void highg(){  
  tone(Buzzer,1568,500);
  digitalWrite(RedLED,HIGH);
  delay(500);
  digitalWrite(RedLED,LOW);
}


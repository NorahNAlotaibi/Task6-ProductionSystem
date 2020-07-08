#include <Stepper.h>

#define LDRpin1 7
#define LDRpin2 8
#define LDRpin3 9


int LDRValue1 = 0;
int LDRValue2 = 0;
int LDRValue3 = 0;

void setup(){
  pinMode(A5,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A2,OUTPUT);
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
LDRValue1 = digitalRead(LDRpin1);
LDRValue2 = digitalRead(LDRpin2);
LDRValue3 = digitalRead(LDRpin3);

if ( LDRValue1  == 1 && LDRValue2  == 1 && LDRValue3  == 1) {
     digitalWrite(A5,LOW);digitalWrite(A4,LOW);digitalWrite(A3,LOW);digitalWrite(A2,LOW);
     delay(1000);
  } 
if ( LDRValue1  == 0 && LDRValue2  == 1 && LDRValue3  == 1) {
     digitalWrite(A5,LOW);digitalWrite(A4,HIGH);digitalWrite(A3,LOW);digitalWrite(A2,LOW);
     delay(1000);
  } 
if ( LDRValue1  == 0 && LDRValue2  == 0 && LDRValue3  == 1) {
     digitalWrite(A5,LOW);digitalWrite(A4,LOW);digitalWrite(A3,LOW);digitalWrite(A2,HIGH);
     delay(1000);
  } 
 
    
}

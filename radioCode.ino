#include <Wire.h>
#include <TEA5767Radio.h>
#define outputA 3
#define outputB 2
#define encButton 9

TEA5767Radio radio = TEA5767Radio();

void updateEncoder();

void setup() {
  Wire.begin();
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(encButton, INPUT);
  pinMode (outputA,INPUT);
  pinMode (outputB,INPUT);
}
bool aLastState = digitalRead(outputA);  
int counter = 997; 
double frequency = 0;
bool aState;


void loop(){
  updateEncoder();
  frequency = counter*0.1;
  Serial.println(frequency);
  radio.setFrequency(frequency);
}

void updateEncoder(){
  aState = digitalRead(outputA);
  if  (aState != aLastState){
    if(digitalRead(outputB) != aState){
      counter++;
    } else{
      counter--;
    }
  aLastState = aState;
  }
}

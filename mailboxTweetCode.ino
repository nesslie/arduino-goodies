// This #include statement was automatically added by the Particle IDE.
#include "lib1.h"

// This #include statement was automatically added by the Particle IDE.
#include <HC_SR04.h>

double cm = 0.0; double mailboxHeight = 5.0;
bool currentState, previousState;

int trigPin = A1;
int echoPin = D2;

HC_SR04 rangefinder = HC_SR04(trigPin, echoPin, 0.0, 300.0);

void setup(){
    Spark.variable("cm", &cm, DOUBLE);
    Spark.variable("Current Mailbox Height", &mailboxHeight, DOUBLE);
    Particle.function("Mode", calibrate);
    Serial.begin(9600);
    previousState = isThereMail();
}

void loop(){
    currentState = isThereMail();
    if(currentState){
        if(currentState != previousState){
            Serial.println("New Piece of mail detected");
            Spark.publish("Mail_Detected","YES",60,PRIVATE);
            delay(500);
        }
    } else {
        Serial.println("Mail not found");
    }
    previousState = currentState;
    delay(1000);
}

bool isThereMail(){
    cm = rangefinder.getDistanceCM();
    if((cm - 1) < mailboxHeight){
        return true;
    }
    return false;
}

int calibrate(String mode){
    if(mode == "setup"){
        while(mode == "setup"){
            mailboxHeight = rangefinder.getDistanceCM();
            Serial.println(mailboxHeight);
        }
        return 1;
    } else {
        return -1;
    }
}

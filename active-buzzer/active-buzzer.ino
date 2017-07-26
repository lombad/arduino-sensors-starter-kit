#include "active-buzzer.h"
 
int buzzerPin = 8;

Active_Buzzer buzzer(buzzerPin);

void setup() {
}
 
void loop() {
 buzzer.write(255);
 delay(50);
 buzzer.write(0); 
 delay(50);
}
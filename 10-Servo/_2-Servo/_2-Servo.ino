
#include "SimpleLibrary.h"
#include <Servo.h>

Servo servo;
Sweeper sweeper;
Metronome metronome; 

void setup() {
  servo.attach(9);
  sweeper.New(0, 180, 1, BACKANDFORTH);
  metronome.New(5);
}

void loop() {
  servo.write(sweeper.Next(metronome.Tick()));
}



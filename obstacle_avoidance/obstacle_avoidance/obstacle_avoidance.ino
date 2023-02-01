#include <FNQR.h>
#include <FNQRBasic.h>
#include <FNQRComm.h>
#include <FNQROrders.h>
#include <FNQRRemote.h>
#include <SR04.h>

#define TRIG_PIN 2
#define ECHO_PIN 3
SR04 sensor = SR04(ECHO_PIN,TRIG_PIN);
long obstacle_distance;

FNQR Buddy;

void be_personable(){
  randomSeed(analogRead(21));
  int action_select = random(4);
  switch(action_select){
    case 0 : // Slow, dramatic look up
      Buddy.TwistBody(0, 0, 0, -1, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -2, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -3, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -4, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -5, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -6, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -7, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -8, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -9, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -10, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -11, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -12, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -13, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -14, 0, 0);
      delay(100);
      Buddy.TwistBody(0, 0, 0, -15, 0, 0);
      delay(2000);
      Buddy.TwistBody(0, 0, 0, 0, 0, 0);
      delay(500);
      break;
    case 1 : // Head shake of frustration
      Buddy.TwistBody(0, 0, 0, 0, 0, 10);
      Buddy.TwistBody(0, 0, 0, 0, 0, -10);
      Buddy.TwistBody(0, 0, 0, 0, 0, 10);
      Buddy.TwistBody(0, 0, 0, 0, 0, -10);
      Buddy.TwistBody(0, 0, 0, 0, 0, 10);
      Buddy.TwistBody(0, 0, 0, 0, 0, -10);
      Buddy.TwistBody(0, 0, 0, 0, 0, 0);
      delay(500);
      break;
    case 2 : // Tilt head in confusion
      Buddy.TwistBody(0, 0, 0, -10, 10, 0);
      delay(2000);
      Buddy.TwistBody(0, 30, 0, 0, 0, 0);
      delay(2000);
      Buddy.TwistBody(0, 0, 0, 0, 0, 0);
      delay(500);
      break;
    case 3 : // Drop head in sadness
      delay(4000);
      Buddy.TwistBody(0, 0, 0, 20, 0, 0);
      delay(2000);
      Buddy.TwistBody(0, 0, 0, 0, 0, 0);
      delay(500);
    default : delay(2000);
  }
}

void setup() {
  Buddy.Start();
  delay(1000);
}

void loop() {
  obstacle_distance=sensor.Distance();

  if (obstacle_distance<=20){
    be_personable();
    Buddy.TurnRight();
    Buddy.TurnRight();
    Buddy.TurnRight();
    delay(1000);
  } else {
    Buddy.CrawlForward();
  }
}

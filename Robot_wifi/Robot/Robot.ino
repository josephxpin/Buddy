/*
 * Sketch     Default function sketch for robot
 * Platform   Freenove Quadruped Robot (Compatible with Arduino/Genuino Mega 2560)
 * Brief      This sketch is used to show default function of Freenove Quadruped Robot.
 *            You can control the robot by remote control, Android device or computer.
 *            Changing the code will make the default function not working properly.
 * Author     Ethan Pan @ Freenove (support@freenove.com)
 * Date       2020/04/24
 * Copyright  Copyright © Freenove (http://www.freenove.com)
 * License    Creative Commons Attribution ShareAlike 3.0
 *            (http://creativecommons.org/licenses/by-sa/3.0/legalcode)
 * -----------------------------------------------------------------------------------------------*/

#ifndef ARDUINO_AVR_MEGA2560
#error Wrong board. Please choose "Arduino/Genuino Mega or Mega 2560"
#endif

// Include FNQR (Freenove Quadruped Robot) library
#include <FNQR.h>
FNQR Buddy;

void setup() {
  // Start Freenove Quadruped Robot with default function
  Buddy.SetWiFiChannel(2);
  Buddy.Start();
  delay(2000);
}

void loop() {
  // Update Freenove Quadruped Robot
  Buddy.CrawlForward();
}

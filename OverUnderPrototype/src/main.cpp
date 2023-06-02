/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Redwood Robotics                                 */
/*    Created:      Mon May 08 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Intake               motor         2               
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  bool noTrolling = false;
  Intake.setVelocity(100,percent);
  if (Controller1.ButtonR1.pressing()){
      noTrolling = true;
    Intake.spin(forward);
  }
  if (Controller1.ButtonR2.pressing() && noTrolling == false){
    Intake.spin(reverse);
  }
  

}
  

#pragma once
#include "EZ-Template/api.hpp"
#include "api.h"
extern Drive chassis;
using namespace pros;
// Your motors, sensors, etc. should go here.  Below are examples

inline Motor Intake_1(4);
inline Motor Intake_2(-5);
inline adi::DigitalOut Doinker('A');
inline adi::DigitalOut Recarga('B');
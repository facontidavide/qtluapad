#include "motorcontrol.h"
#include <stdio.h>

MotorControl::MotorControl()
{
  //  printf("ctor %d %f\n",node_number, pulses_per_revolution);
     printf("ctor\n");
}

void MotorControl::setPositionTarget(float absolute_position)
{
    act_pos = absolute_position;
    printf("setPositionTarget %f\n", absolute_position);
}

void MotorControl::setVelocityTarget(float velocity)
{
    printf("setVelocityTarget %f\n", velocity);
}

void MotorControl::setCurrentTarget(int mAmp)
{
    printf("setCurrentTarget %d\n",mAmp);

}

float MotorControl::getActualPosition()
{
    printf("getActualPosition\n");
    return act_pos;
}

float MotorControl::getActualVelocity()
{
    printf("getActualVelocity\n");
    return 0;
}

int MotorControl::getActualCurrent()
{
    printf("getActualCurrent\n");
    return 0;
}

void MotorControl::waitPositionReached(float target_position)
{
    printf("waitPositionReached %f\n", target_position);

}

void MotorControl::setMaximumCurrent()
{
    printf("setMaximumCurrent\n");

}

void MotorControl::setMaximumVelocity()
{
    printf("setMaximumVelocity\n");

}

void MotorControl::setMaximumAcceleration()
{
    printf("setMaximumAcceleration\n");

}

void MotorControl::startLogging()
{
    printf("startLogging\n");

}

void MotorControl::stopLogging()
{
    printf("stopLogging\n");

}

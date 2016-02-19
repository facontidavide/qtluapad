#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H


class MotorControl
{
public:
    MotorControl();

    void setPositionTarget( float absolute_position);
    void setVelocityTarget( float velocity);
    void setCurrentTarget( int mAmp);

    float getActualPosition();
    float getActualVelocity();
    int   getActualCurrent();

    void waitPositionReached(float target_position);

    void setMaximumCurrent();
    void setMaximumVelocity();
    void setMaximumAcceleration();

    void startLogging();
    void stopLogging();
private:
    float act_pos;

};

#endif // MOTORCONTROL_H

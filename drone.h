#ifndef DRONE_H
#define DRONE_H

class Drone
{
public:
    Drone();
    Drone(double xPosition, double yPosition);

    void setPosition(double xPosition, double yPosition);
    void setXPosition(double xPosition);
    void setYPosition(double yPosition);
    void setVelocity(double xVelocity, double yVelocity);
    void setXVelocity(double xVelocity);
    void setYVelocity(double yVelocity);

    double getPosition();
    double getXPosition();
    double getYposition();
    double getVelocity();
    double getXVelocity();
    double getYVelocity();

private:
    double position[2]{0.0,0.0};
    double velocity[2]{0.0,0.0};


};
#endif // DRONE_H

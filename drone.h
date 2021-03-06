#ifndef DRONE_H
#define DRONE_H

class Drone
{
public:
    // Constructors
    Drone();
    Drone(double xPosition, double yPosition);
    Drone(double xPosition, double yPosition, double xVelocity, double yVelocity);

    // Velocity and Position Setters
    void setPosition(double xPosition, double yPosition);
    void setXPosition(double xPosition);
    void setYPosition(double yPosition);
    void setVelocity(double xVelocity, double yVelocity);
    void setXVelocity(double xVelocity);
    void setYVelocity(double yVelocity);
    void setRotation(double rotation);

    //Velocity and Position Getters
    double* getPosition();
    double getXPosition();
    double getYposition();
    double* getVelocity();
    double getXVelocity();
    double getYVelocity();
    double getRotation();

private:
    double position[2]{0.0,0.0};
    double velocity[2]{0.0,0.0};
    double rotation;


};
#endif // DRONE_H

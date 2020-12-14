#include "drone.h"

Drone::Drone()
{

}

Drone::Drone(double xPosition, double yPosition) {
    this->position[0] = xPosition;
    this->position[1] = yPosition;
}

void Drone::setPosition(double xPosition, double yPosition) {
    this->position[0] = xPosition;
    this->position[1] = yPosition;
}

void Drone::setXPosition(double xPosition) {
    this->position[0] = xPosition;
}

void Drone::setYPosition(double yPosition) {
    this->position[1] = yPosition;
}

void Drone::setVelocity(double xVelocity, double yVelocity) {
    this->velocity[0] = xVelocity;
    this->velocity[1] = yVelocity;
}

void Drone::setXVelocity(double xVelocity) {
    this->velocity[0] = xVelocity;
}

void Drone::setYVelocity(double yVelocity) {
    this->velocity[1] = yVelocity;
}

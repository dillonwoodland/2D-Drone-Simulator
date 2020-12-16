#include "drone.h"

Drone::Drone()
{

}

Drone::Drone(double xPosition, double yPosition) {
    this->position[0] = xPosition;
    this->position[1] = yPosition;
}
Drone::Drone(double xPosition, double yPosition, double xVelocity, double yVelocity) {
    this->position[0] = xPosition;
    this->position[1] = yPosition;
    this->velocity[0] = xVelocity;
    this->velocity[1] = yVelocity;
}

// Velocity and Position Setters
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

// Velocity and Position Getters
double* Drone::getPosition() {
    return this->position;
}
double Drone::getXPosition() {
    return this->position[0];
}
double Drone::getYposition() {
    return this->position[1];
}
double* Drone::getVelocity() {
    return this->velocity;
}
double Drone::getXVelocity() {
    return this->velocity[0];
}
double Drone::getYVelocity() {
    return this->velocity[1];
}

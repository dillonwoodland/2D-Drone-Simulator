#include "gtest/gtest.h"
#include "drone.h"

TEST(KinematicsOfTheDrone,GivenXYCoordinatesInArray_ReturnsCorrectCoordinatesFromObject) {
    double xPos{7};
    double yPos{8};
    Drone drone(xPos,yPos);

    double xActual{drone.getXPosition()};
    double yActual{drone.getYposition()};
    double xExpected = xPos;
    double yExpected = yPos;

    EXPECT_EQ(xExpected,xActual);
    EXPECT_EQ(yExpected,yActual);
}

TEST(KinematicsOfTheDrone,GivenXYVelocitiesInArray_ReturnsCorrectVelocitiesFromObject) {
    double xVel{37.2};
    double yVel{-90.1};
    Drone drone;
    drone.setVelocity(xVel, yVel);

    double xActual{drone.getXVelocity()};
    double yActual{drone.getYVelocity()};
    double xExpected = xVel;
    double yExpected = yVel;

    EXPECT_EQ(xExpected,xActual);
    EXPECT_EQ(yExpected,yActual);
}

TEST(KinematicsOfTheDrone, GivenTheXYPositionsInAnArray_ReturnsPositionsViaThePointerFunction) {
    double xPos{-57.543};
    double yPos{8.10};
    Drone drone(xPos,yPos);

    double* position = drone.getPosition();
    double xActual{position[0]};
    double yActual{position[1]};
    double xExpected = xPos;
    double yExpected = yPos;

    EXPECT_EQ(xExpected,xActual);
    EXPECT_EQ(yExpected,yActual);
}

TEST(KinematicsOfTheDrone, GivenTheXYVelocitiesInAnArray_ReturnsVelocitiesViaThePointerFunction) {
    double xVel{-0.543};
    double yVel{143.10};
    Drone drone;
    drone.setVelocity(xVel,yVel);

    double* velocity = drone.getVelocity();
    double xActual{velocity[0]};
    double yActual{velocity[1]};
    double xExpected = xVel;
    double yExpected = yVel;

    EXPECT_EQ(xExpected,xActual);
    EXPECT_EQ(yExpected,yActual);
}

TEST(KinematicsOfTheDrone, GivenXYVelocitiesAndPositionsViaTheConstructor_ReturnsCorrectVelocitiesAndPositionsViaThePointers) {
    double xPos{-57.543};
    double yPos{8.10};
    double xVel{-0.543};
    double yVel{143.10};
    Drone drone(xPos,yPos,xVel,yVel);

    double* position = drone.getPosition();
    double xPosActual{position[0]};
    double yPosActual{position[1]};
    double* velocity = drone.getVelocity();
    double xVelActual{velocity[0]};
    double yVelActual{velocity[1]};
    double xPosExpected = xPos;
    double yPosExpected = yPos;
    double xVelExpected = xVel;
    double yVelExpected = yVel;

    EXPECT_EQ(xPosExpected,xPosActual);
    EXPECT_EQ(yPosExpected,yPosActual);
    EXPECT_EQ(xVelExpected,xVelActual);
    EXPECT_EQ(yVelExpected,yVelActual);
}


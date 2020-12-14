#include "gtest/gtest.h"
#include "drone.h"

TEST(KinematicsOfTheDrone, GivenAnXPositionOfSevenForTheDrone_ExpectsSevenFromGetter) {
    Drone drone;
    double input{7.0};
    drone.setXPosition(input);
    double actual{drone.getXPosition()};
    double expected = input;

    EXPECT_EQ(expected, actual);
}

TEST(KinematicsOfTheDrone, GivenAYPositionOfMinusEightForTheDrone_ExpectsEightFromGetter) {
    double input{8.0};
    Drone drone(0.0, input, 9.0, 10.0);
    double actual{drone.getYPosition()};
    double expected = input;

    EXPECT_EQ(expected, actual);
}

TEST(KinematicsOfTheDrone, GivenNegativeSevenPointFiveForXVelAndOneHundredThreePointFour_ExpectsSevenPointFiveAndOneHundredThreePointFourRespectively) {
    double xVel{7.5};
    double yVel{103.4};
    Drone drone(0,0,xVel,0);
    drone.setYVelocity(yVel);
    double expectedX = xVel;
    double actualX{drone.getXVeloicty()};
    double expectedY = yVel;
    double actualY{drone.getYVelocity()};

    EXPECT_EQ(expectedX, actualX);
    EXPECT_EQ(expectedY, actualY);
}

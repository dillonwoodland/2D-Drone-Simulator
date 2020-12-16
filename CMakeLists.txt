cmake_minimum_required(VERSION 3.10)

project(2D-Drone-Simulator)

find_package(Qt5Widgets)
find_package(Qt5Gui)

SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED 1)
SET(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTOUIC ON)
SET(CMAKE_AUTORCC ON)

IF (NOT TARGET gtest)
    # Prevent GoogleTest from overriding our compiler/linker options
    # when building with Visual Studio
    set(gtest_force_shared_crt ON CACHE BOOL " " FORCE)

    add_subdirectory(googletest)
ENDIF()

add_library(Drones STATIC
    drone.cpp
    drone.h)

add_executable(${PROJECT_NAME}_UnitTests
    droneUnitTest.cpp
    )

add_executable(Simulation
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    main.cpp)

target_link_libraries(Drones
    Qt5::Widgets
    Qt5::Gui
    )

target_link_libraries(${PROJECT_NAME}_UnitTests gtest gtest_main
    Drones
    )

target_link_libraries(Simulation
    Drones
    Qt5::Widgets
    Qt5::Gui
    )

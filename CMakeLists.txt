cmake_minimum_required(VERSION 3.5)

project(2D-Drone-Simulator)

#find_package(Qt5Widgets)
#find_package(Qt5Gui)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

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

#add_executable(mainWindow
#    mainwindow.cpp
#    mainwindow.h
#    mainwindow.ui)

#target_link_libraries(Drones
#    Qt5::Widgets
#    Qt5::Gui
#    )

target_link_libraries(${PROJECT_NAME}_UnitTests gtest gtest_main
    Drones
    )

#target_link_libraries(mainWindow
#    Drones
#    Qt5::Widgets
#    Qt5::Gui
#    )

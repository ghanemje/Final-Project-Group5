#include "src/LandBasedWheeled/landbasedwheeled.h"
#include "src/LandBasedTracked/landbasedtracked.h"
#include "src/LandBasedRobot/landbasedrobot.h"
#include "src/Algorithm/algorithm.h"
#include "src/Maze/maze.h"

#include <vector>
#include <iostream>

int main(){
    std::shared_ptr<fp::LandBasedRobot> robot = std::make_shared<fp::LandBasedWheeled>("Husky", 0, 0);
    fp::Algorithm algo;
    fp::Maze maze;

    while(!algo.CheckGoal(robot->get_x(), robot->get_y())) {
        algo.Planner(robot, maze);
    }
    return 0;
}

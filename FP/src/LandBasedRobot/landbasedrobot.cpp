#include "landbasedrobot.h"
#include <iostream>


fp::LandBasedRobot::LandBasedRobot(std::string name, int x, int y) : name_{ name }, x_{ x }, y_{ y }, speed_{ 1 }, width_{ 1 }, length_{ 1 }, height_{ 1 }, capacity_{ 1 }, direction_{ 'N' }{};
fp::LandBasedRobot::LandBasedRobot() : name_{ "none" }, x_{ 0 }, y_{ 0 }, speed_{ 1 }, width_{ 1 }, length_{ 1 }, height_{ 1 }, capacity_{ 1 }, direction_{ 'N' }{};
fp::LandBasedRobot::~LandBasedRobot(){}

void fp::LandBasedRobot::MoveForward()
{
}


void fp::LandBasedRobot::TurnLeft(int x, int y){
	std::cout << "LandBasedRobot::TurnLeft is called\n";

}

void fp::LandBasedRobot::TurnRight(int x, int y){
	std::cout << "LandBasedRobot::TurnRight is called\n";

}

int fp::LandBasedRobot::get_x() {
	std::cout << "LandBasedRobot::get_x is called\n";
	return 0;
}

int fp::LandBasedRobot::get_y() {
	std::cout << "LandBasedRobot::get_y is called\n";
	return 0;
}

char fp::LandBasedRobot::GetDirection()
{
	return 0;
}

double fp::LandBasedRobot::get_speed()
{
	return 0;
}

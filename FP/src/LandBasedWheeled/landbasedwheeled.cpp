#include "landbasedwheeled.h"
#include "../API/api.h"
#include <iostream>
#include <string>


fp::LandBasedWheeled::LandBasedWheeled(std::string name, int x, int y) : LandBasedRobot(name, x, y), wheel_number{ 2 } {}
fp::LandBasedWheeled::LandBasedWheeled() : LandBasedRobot(), wheel_number{ 2 } {}
fp::LandBasedWheeled::~LandBasedWheeled(){}

void fp::LandBasedWheeled::SpeedUp(int x){
	speed_= speed_ + x;
}

void fp::LandBasedWheeled::MoveForward(){
	fp::API::moveForward();
    
	switch (direction_) {
	case 'N':
		y_ = y_ + speed_;
		break;
	case 'E':
		x_ = x_ + speed_;
		break;
	case 'S':
		y_ = y_ - speed_;
		break;
	case 'W':
		x_ = x_ - speed_;
		break;
	}
}



void fp::LandBasedWheeled::TurnLeft(int x, int y){
    fp::API::turnLeft();
	switch (direction_) {
	case 'N':
		direction_ = 'W';
		break;
	case 'E':
		direction_ = 'N';
		break;
	case 'S':
		direction_ = 'E';
		break;
	case 'W':
		direction_ = 'S';
		break;
	}
}

void fp::LandBasedWheeled::TurnRight(int x, int y){
    fp::API::turnRight();
	switch (direction_) {
	case 'N':
		direction_ = 'E';
		break;
	case 'E':
		direction_ = 'S';
		break;
	case 'S':
		direction_ = 'W';
		break;
	case 'W':
		direction_ = 'N';
		break;
	}
}


#include "landbasedtracked.h"
#include "../API/api.h"
#include <iostream>
#include <string>


fp::LandBasedTracked::LandBasedTracked(std::string name, int x, int y) : LandBasedRobot(name, x, y), track_type{ "tank" } {}
fp::LandBasedTracked::LandBasedTracked() : LandBasedRobot(), track_type{ "tank" } {}
fp::LandBasedTracked::~LandBasedTracked(){}

void fp::LandBasedTracked::MoveForward() {
    switch (direction_) {
	case 'N':
		y_++;
		break;
	case 'E':
		x_++;
		break;
	case 'S':
		y_--;
		break;
	case 'W':
		x_--;
		break;
    }
}

void fp::LandBasedTracked::TurnLeft(int x, int y){
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

void fp::LandBasedTracked::TurnRight(int x, int y){
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

#pragma once
#include <string>


namespace fp{
    class LandBasedRobot
    {
    public:
	LandBasedRobot(std::string name, int x, int y);
	LandBasedRobot();
	~LandBasedRobot();
	virtual void MoveForward() = 0;
	virtual void TurnLeft(int x, int y) = 0;
	virtual void TurnRight(int x, int y) = 0;
	virtual int get_x() = 0;
	virtual int get_y() = 0;
	virtual char GetDirection() = 0;
	virtual double get_speed() = 0;
    protected:
        std::string name_; 
	int x_;  
	int y_; 
	double speed_; 
	double width_; 
	double length_; 
	double height_; 
	double capacity_; 
	char direction_; 
    };
}

#pragma once
#include "../LandBasedRobot/landbasedrobot.h"
#include <string>

namespace fp{
    class LandBasedTracked : public LandBasedRobot{
    public:
	LandBasedTracked(std::string name, int x, int y);
	
	LandBasedTracked();
	
	virtual ~LandBasedTracked();
	virtual void MoveForward() override;
	virtual void TurnLeft(int, int) override;
	virtual void TurnRight(int, int) override;
	virtual int get_x() override {
		return x_;
	}
	virtual int get_y() override {
		return y_;
	}
	virtual char GetDirection() override {
		return direction_;
	}
	virtual double get_speed() override {
		return speed_;
	}
    protected:
        std::string track_type;
    };
}

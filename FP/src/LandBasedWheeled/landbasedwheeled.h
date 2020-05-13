#pragma once
#include "../LandBasedRobot/landbasedrobot.h"

#include <string>

namespace fp{
    class LandBasedWheeled : public LandBasedRobot{
    public:
	
	LandBasedWheeled(std::string name, int x, int y);
	LandBasedWheeled();

	virtual ~LandBasedWheeled();
        void SpeedUp(int);
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
	double get_speed() {
	    return speed_;
	}
    protected:
	int wheel_number;
    };
}

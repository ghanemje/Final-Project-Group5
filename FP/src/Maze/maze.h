#pragma once

#include <iostream>
#include <array>

#include "../API/api.h"

namespace fp{
    class Maze{
    public:
        void CoordMaze(int x, int y, char dir);
        bool IsWallSouth(int x, int y) const;
	bool IsWallEast(int x, int y) const;
        bool IsWallNorth(int x, int y) const;
        bool IsWallWest(int x, int y) const;
        
        Maze(); 
        ~Maze() {} 
    protected:
        int SouthWall[16][16]; 
        int EastWall[16][16]; 
        int NorthWall[16][16]; 
        int WestWall[16][16]; 
    };
}

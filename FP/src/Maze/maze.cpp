#include <iostream>
#include "maze.h"
   
fp::Maze::Maze(){

    fp::API::setColor(0,0,'Y');
    fp::API::setColor(7,7,'Y');
    fp::API::setColor(7,8,'Y');
    fp::API::setColor(8,7,'Y');
    fp::API::setColor(8,8,'Y');
    
    fp::API::setText(0,0,"S");
    fp::API::setText(7,7,"G");
    fp::API::setText(7,8,"G");
    fp::API::setText(8,7,"G");
    fp::API::setText(8,8,"G");

    for(int x = 0; x < 16; x++){
        for(int y = 0; y < 16; y++){        
            SouthWall[x][y] = false;
            NorthWall[x][y] = false;
            WestWall[x][y] = false;
            EastWall[x][y] = false;     
        }
    }
}

void fp::Maze::CoordMaze(int x, int y, char dir){
    if(dir == 'S'){
        if(fp::API::wallFront()){
            fp::API::setWall(x, y, 's');
            SouthWall[x][y] = true;
        }
        if(fp::API::wallRight()){
             fp::API::setWall(x, y, 'w');
             WestWall[x][y] = true;
        }
        if(fp::API::wallLeft()){
             fp::API::setWall(x, y, 'e');
             EastWall[x][y] = true;
        }
    }
    if(dir == 'E'){
        if(fp::API::wallFront()){
            fp::API::setWall(x, y, 'e');
            EastWall[x][y] = true; 
        }
        if(fp::API::wallRight()){
             fp::API::setWall(x, y, 's');
             SouthWall[x][y] = true;
        }
        if(fp::API::wallLeft()){
             fp::API::setWall(x, y, 'n');
             NorthWall[x][y] = true;
        }
    }
    if(dir == 'N'){
        if(fp::API::wallFront()){
            fp::API::setWall(x, y, 'n');
            NorthWall[x][y] = true;
        }
        if(fp::API::wallRight()){
             fp::API::setWall(x, y, 'e');
             EastWall[x][y] = true;
        }
        if(fp::API::wallLeft()){
             fp::API::setWall(x, y, 'w');
             WestWall[x][y] = true;
        }
    }
    if(dir == 'W'){
        if(fp::API::wallFront()){
            fp::API::setWall(x, y, 'w');
            WestWall[x][y] = true;
        }
        if(fp::API::wallRight()){
             fp::API::setWall(x , y, 'n');
             NorthWall[x][y] = true;
        }
        if(fp::API::wallLeft()){
             fp::API::setWall(x, y,'s');
             SouthWall[x][y] = true;
        }
    }
}

bool fp::Maze::IsWallSouth(int x, int y) const{
    return SouthWall[x][y];
}
bool fp::Maze::IsWallEast(int x, int y) const{
    return EastWall[x][y];
}
bool fp::Maze::IsWallNorth(int x, int y) const{
    return NorthWall[x][y];
}
bool fp::Maze::IsWallWest(int x, int y) const{
    return WestWall[x][y];
}

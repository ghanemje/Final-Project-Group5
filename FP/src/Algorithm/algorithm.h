#pragma once

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <queue>
#include <algorithm>
#include <utility>
#include <bits/stdc++.h> 

#include "../API/api.h"
#include "../LandBasedWheeled/landbasedwheeled.h"
#include "../LandBasedTracked/landbasedtracked.h"
#include "../Maze/maze.h"

namespace fp{
	class Algorithm{
	public:
	    
	    bool CheckNode(std::pair<std::pair<int, int>, char> new_node,std::vector<std::pair<std::pair<int, int>, char>> check_till); 
	    bool Planner(std::shared_ptr<fp::LandBasedRobot>, fp::Maze&); 
	    bool CheckGoal(int x, int y); 
	private:
	    //--Coordinates structure
	    struct coord 
	    {
		int x;
		int y;
	    };
		
	    coord node_c; 
	    std::pair<std::pair<int, int>, char> pose_c;  
	    std::pair<std::pair<int, int>, char> pose_n; 
	    std::vector<std::pair<std::pair<int, int>, char>> found_d; 
	    std::vector<std::pair<std::pair<int, int>, char>> found_y; 
	    std::vector<std::pair<std::pair<int, int>, char>> check_till; 
	    std::vector<std::pair<std::pair<int, int>, char>> route; 
	    std::map<std::pair<std::pair<int, int>, char>, std::pair<std::pair<int, int>, char>> node_p;   
	};
}

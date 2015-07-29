//
//  ShowPlayerLoc.cpp
//  Game
//
//  Created by Cody Mulkern on 7/29/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include "ShowPlayerLoc.h"

void showPlayerLoc( std::map<int, int> playerLocation ){
    
    std::cout << "Players location is: ";
    for (auto& x: playerLocation) {
        std::cout << "( " << x.first << ", " << x.second << " )" << std::endl;
    }
    
}
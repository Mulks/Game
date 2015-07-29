//
//  GetPlayerLoc.cpp
//  Game
//
//  Created by Cody Mulkern on 7/29/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include "GetPlayerLoc.h"


std::pair<int,int> getPlayerLoc( std::vector<std::vector<char>> map){
    
    int xPos = 0;
    int yPos = 0;
    
    for( int i = 0; i < 24; i++ ){
        for( int j = 0; j < 100; j++ ){
            if( map[j][i] == '@' ){
                xPos = j;
                yPos = i;
            }
        }
    }
    
    return std::pair<int, int>(xPos, yPos);
}
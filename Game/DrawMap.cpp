//
//  DrawMap.cpp
//  Game
//
//  Created by Cody Mulkern on 7/29/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include "DrawMap.h"



void drawMap( std::vector<std::vector<char>> map){
    
    for( int i = 0; i < 24; i++ ){
        for( int j = 0; j < 100; j++ ){
            std::cout << map[j][i];
        }
        std::cout << "\n";
    }
    
}
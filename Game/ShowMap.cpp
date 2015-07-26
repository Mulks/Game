//
//  ShowMap.cpp
//  Game
//
//  Created by Cody Mulkern on 7/25/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include "ShowMap.h"

using namespace std;

void showMap( std::vector<std::vector<char>> map ){
    
    for( int i = 0; i < 24; i++ ){
        for( int j = 0; j < 100; j++ ){
            cout << map[j][i];
        }
        cout << "\n";
        
    }
    
}
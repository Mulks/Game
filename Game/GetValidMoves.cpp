//
//  GetValidMoves.cpp
//  Game
//
//  Created by Cody Mulkern on 7/29/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include "GetValidMoves.h"

std::pair<char, char> getValidMoves( std::vector<std::vector<char>> &map,  std::map<int, int> playerLocation ){
    
    char valid1 = ' ';
    char valid2 = ' ';
    
    int charXPos = 0;
    int charYPos = 0;
    
    for (auto& x: playerLocation) {
        charXPos = x.first;
        charYPos = x.second;
    }
    
    if( map[charXPos + 1][charYPos] != '#' ){
        if( valid1 == ' ' ){
            valid1 = 'd';
        }
        else if( valid1 != ' '){
            valid2 = 'd';
        }
        
    }
    if ( map[charXPos - 1][charYPos] != '#' ){
        if( valid1 == ' ' ){
            valid1 = 'a';
        }
        else if( valid1 != ' '){
            valid2 = 'a';
        }
    }
    if ( map[charXPos][charYPos + 1] != '#' ){
        if( valid1 == ' ' ){
            valid1 = 's';
        }
        else if( valid1 != ' '){
            valid2 = 's';
        }
    }
    if ( map[charXPos][charYPos - 1] != '#' ){
        if( valid1 == ' ' ){
            valid1 = 'w';
        }
        else if( valid1 != ' '){
            valid2 = 'w';
        }
    }
    
    //Used for debugging.
    /*std::cout << "Inside GetValidMoves: valid moves are '" << valid1 << "', '" << valid2 << "'" << std::endl;
    std::cout << "Player pos: " << charXPos << ", " << charYPos << std::endl;
    std::cout << "x + 1 = " << map[charXPos + 1][charYPos] << "  x - 1 = " << map[charXPos - 1][charYPos]
              << "  y + 1 = " << map[charXPos][charYPos + 1] << "  y - 1 = " << map[charXPos][charYPos - 1] << std::endl;
    */
    
    return std::pair<char,char>( valid1, valid2 );
}
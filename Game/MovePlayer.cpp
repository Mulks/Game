//
//  MovePlayer.cpp
//  Game
//
//  Created by Cody Mulkern on 7/29/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include "MovePlayer.h"
#include "GetValidMoves.h"
#include "ShowPlayerLoc.h"
#include "DrawMap.h"

void movePlayer( std::vector<std::vector<char>> &map, std::map<int,int> &playerLocation ){
    
    
    int xPos = 0;
    int yPos = 0;
    
    char validMoveOne = ' ';
    char validMoveTwo = ' ';
    char moveDirection = ' ';
    
    std::map<char, char> validMoves;
    /*validMoves.insert( std::pair<char,char>(getValidMoves( map, playerLocation) ));
    for (auto& x: validMoves) {
        validMoveOne = x.first;
        validMoveTwo = x.second;
    }*/
    
    for (auto& x: playerLocation) {
        xPos = x.first;
        yPos = x.second;
    }
    
    while( moveDirection != 'q' ){
        
        validMoves.clear();
        validMoves.insert( std::pair<char,char>(getValidMoves( map, playerLocation) ));
        for (auto& x: validMoves) {
            validMoveOne = x.first;
            validMoveTwo = x.second;
        }
        
        std::cout << "Which direction would you like to go: ('W' = up, 'A' = left, 'S' = down, 'D' = right ) ( 'Q' to stop )" << std::endl;
        std::cout << "Valid moves to make are: ";
        if( validMoveOne == 'w' ){
            std::cout << "up, ";
        }
        if ( validMoveOne == 's' ){
            std::cout << "down, ";
        }
        if ( validMoveOne == 'd' ){
            std::cout << "right, ";
        }
        if ( validMoveOne == 'a' ){
            std::cout << "left, ";
        }
        if ( validMoveTwo == 'w' ){
            std::cout << "up";
        }
        if ( validMoveTwo == 's' ){
            std::cout << "down";
        }
        if ( validMoveTwo == 'd' ){
            std::cout << "right";
        }
        if ( validMoveTwo == 'a' ){
            std::cout << "left";
        }
        
        
        std::cout << ":  ";
        std::cin >> moveDirection;
        
        
        
        while( moveDirection != validMoveOne && moveDirection != validMoveTwo ){
            
            if( moveDirection == 'q' ){
                return;
            }
            
            std::cout << "Not a valid move try again: ";
            std::cin  >> moveDirection;
        }
        
        map[xPos][yPos] = ' ';
        
        if( moveDirection == 'w' ){
            yPos -= 1;
        }
        else if ( moveDirection == 's' ){
            yPos += 1;
        }
        else if ( moveDirection == 'd' ){
            xPos += 1;
        }
        else if ( moveDirection == 'a' ){
            xPos -= 1;
        }
        
        
        map[xPos][yPos] = '@';
        
        playerLocation.clear();
        
        playerLocation.insert( std::pair<int,int>( xPos, yPos ));
        
        showPlayerLoc( playerLocation );
        drawMap( map );
        
    }
    
    
    
    
    
    
}
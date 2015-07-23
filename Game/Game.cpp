//
//  Game.cpp
//  Game
//
//  Created by Cody Mulkern on 7/17/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include "Game.h"
#include "Creature.h"
#include "Player.h"
#include "ReadMap.h"



using namespace std;

void clearScreen(){
    for( int i = 0; i < 25; i++ ){
        cout << "\n";
    }
}

void fillScreen(){
    for( int i = 0; i < 25; i++ ){
        cout << "*********************************************************************************************\n";
    }
}

int Game(){
    
    /*cout << "Starting game..." << endl;
    
    Creature demon( "Nagger", 100 , 1 );
    Player Mulky( "Mulky", 150 , 1 );
    
    cout << demon.getName() << "'s health: " << demon.getHealth() << endl;
    cout << "\nMulky attacks " << demon.getName() << endl;
    
    demon.setHealth( demon.getHealth() - Mulky.attack() );
    
    
    cout << demon.getName() << "'s health: " << demon.getHealth() << endl;
    fillScreen();
    clearScreen();
    */
    string choice;
    
    
    while( choice != "n" ){
        
        cin >> choice;
        
        if( choice == "clr" ){
            clearScreen();
        }
        else if( choice == "fill" ){
            fillScreen();
        }
    }
    
    
    string filename;
    //char map[100][24];
    
    map<int,int> playerLocation;
    
    
    vector<vector<char>> map;
    map.resize( 100 );
    for( int  i = 0; i < 100; i++ ){
        map[i].resize( 24 );
    }
    
    cout << "Enter file name" << endl;
    cout << "map.txt:    ";
    
    cin >> filename;
    
    
    readMap( filename, map );
    
    cout << "This is first char: " << map[0][0] << endl;
    
    for( int i = 0; i < 24; i++ ){
        for( int j = 0; j < 100; j++ ){
            cout << map[j][i];
            if( map[j][i] == '@' ){
                playerLocation.insert( pair<int,int>( j, i ));
            }
        }
        cout << "\n";
        
    }
    
    cout << "Players location is: ";
    for (auto& x: playerLocation) {
        std::cout << "( " << x.first << ", " << x.second << " )" << endl;
    }
    
    /*for( int i = 0; i < 24; i++ ){
        for(int j = 0; j < 100; j++ ){
            cout << "#";
        }
        cout << "\n";
    }*/
    
    
    return 0;
}
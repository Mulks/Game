//
//  Game.cpp
//  Game
//
//  Created by Cody Mulkern on 7/17/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include <iostream>
#include "Game.h"
#include "Creature.h"
#include "Player.h"


using namespace std;

int Game(){
    
    cout << "Starting game..." << endl;
    
    Creature demon( "Nagger", 100 , 1 );
    Player Mulky( "Mulky", 150 , 1 );
    
    cout << demon.getName() << "'s health: " << demon.getHealth() << endl;
    cout << "\nMulky attacks " << demon.getName() << endl;
    
    demon.setHealth( demon.getHealth() - Mulky.attack() );
    
    
    cout << demon.getName() << "'s health: " << demon.getHealth() << endl;
    
    
    return 0;
}
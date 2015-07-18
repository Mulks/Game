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
    
    Creature demon( 100 , 1 );
    Player Mulky( 200 , 1 );
    
    cout << "Demon health: " << demon.getHealth() << endl;
    cout << "\nMulky attacks demon." << endl;
    
    demon.setHealth( demon.getHealth() - Mulky.attack() );
    
    
    cout << "Demon health: " << demon.getHealth() << endl;
    
    
    return 0;
}
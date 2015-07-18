//
//  Creature.cpp
//  Game
//
//  Created by Cody Mulkern on 7/17/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include "Creature.h"

int Creature::getHealth(){
    return health;
}

void Creature::setHealth( int cHealth ){
    health = cHealth;
}

int Creature::getLevel(){
    return level;
}

void Creature::setLevel( int cLevel ){
    level = cLevel;
}
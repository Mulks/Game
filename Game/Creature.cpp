//
//  Creature.cpp
//  Game
//
//  Created by Cody Mulkern on 7/17/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include "Creature.h"

Creature::Creature(){
    setHealth( 100 );
    setLevel( 1 );
}

Creature::Creature( int cHealth, int cLevel ){
    setHealth( cHealth );
    setLevel( cLevel );
}

Creature::Creature( std::string name, int cHealth, int cLevel ){
    setHealth( cHealth );
    setLevel( cLevel );
}

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

int Creature::attack(){
    return (health * level) / 2;
}

std::string Creature::getName(){
    return name;
}

void Creature::setName( std::string cName ){
    name = cName;
}
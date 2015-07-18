//
//  Player.cpp
//  Game
//
//  Created by Cody Mulkern on 7/18/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include "Player.h"

Player::Player(){
    setHealth( 200 );
    setLevel( 1 );
}

Player::Player( int pHealth, int pLevel ){
    setHealth( pHealth );
    setLevel( pLevel );
}

double Player::getXp(){
    return xp;
}

void Player::setXp( double pXp ){
    xp = pXp;
}

void Player::levelUp(){
    setLevel( getLevel() + 1 );
}
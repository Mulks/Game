//
//  Player.h
//  Game
//
//  Created by Cody Mulkern on 7/18/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#ifndef __Game__Player__
#define __Game__Player__

#include <iostream>
#include "Creature.h"

class Player: public Creature{
    
private:
    
    double xp;
    
    
public:
    
    Player();
    Player( int pHealth, int pLevel );
    Player( std::string pName, int pHealth, int pLevel );
    
    double getXp();
    void setXp( double pXp );
    
    void levelUp();
    
    
};

#endif /* defined(__Game__Player__) */

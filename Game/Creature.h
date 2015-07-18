//
//  Creature.h
//  Game
//
//  Created by Cody Mulkern on 7/17/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#ifndef __Game__Creature__
#define __Game__Creature__

#include <stdio.h>

class Creature{
    
private:
    int health;
    int level;
    
    
public:
    
    int getHealth();
    void setHealth( int cHealth );
    
    int getLevel();
    void setLevel( int cLevel );
    
    int attack();
    
    
};

#endif /* defined(__Game__Creature__) */

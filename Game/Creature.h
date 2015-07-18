//
//  Creature.h
//  Game
//
//  Created by Cody Mulkern on 7/17/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#ifndef __Game__Creature__
#define __Game__Creature__

#include <iostream>
#include <string>

class Creature{
    
private:
    int health;
    int level;
    std::string name;
    
    
public:
    
    Creature();
    Creature( int cHealth, int cLevel );
    Creature( std::string name, int cHealth, int cLevel );
    
    int getHealth();
    void setHealth( int cHealth );
    
    int getLevel();
    void setLevel( int cLevel );
    
    int attack();
    
    std::string getName();
    void setName( std::string cName );
    
    
};

#endif /* defined(__Game__Creature__) */

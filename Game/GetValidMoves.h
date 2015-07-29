//
//  GetValidMoves.h
//  Game
//
//  Created by Cody Mulkern on 7/29/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#ifndef __Game__GetValidMoves__
#define __Game__GetValidMoves__

#include <iostream>
#include <vector>
#include <map>

std::pair<char, char> getValidMoves( std::vector<std::vector<char>> &map, std::map<int, int> playerLocation );

#endif /* defined(__Game__GetValidMoves__) */

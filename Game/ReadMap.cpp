//
//  ReadMap.cpp
//  Game
//
//  Created by Cody Mulkern on 7/19/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include "ReadMap.h"
#include <fstream>

void readMap( std::string filename , std::vector<std::vector<char>> &map){
    
    std::ifstream file(filename);
    char c;
    std::string line;
    
    //char mapArray[100][24];
    
    
        
    while(  getline( file, line ) ){
        for( int i = 0; i < 24; i++ ){
            
            for( int j = 0; j < 100; j++ ){
                
                c = line[j];
                //std::cout << "line[" << j << "][" << i << "] = " << line[j] << std::endl;
                //std::cout << "c[" << j << "][" << i << "] = " << c << std::endl;
                
                map[j][i] = c;
                //std::cout << "mapArray[" << j << "][" << i << "] = " << mapArray[j][i] << std::endl;
                
                //std::cout << "mapArray[1][1] = " << mapArray[1][1] << "  [" << j << "][" << i << "]" << std::endl;
            }
            getline( file, line );

        }
        
    }
    
    //mapArray[0][0] = '#';
    
    
    //file >> line;
    //std::cout << "First part of map: " << map[1][1] << std::endl;
    //std::cout << "Line: " << line << std::endl;
    
    /*for( int i = 0; i < 100; i++ ){
        mapArray[i][0] = line[i];
        std::cout << mapArray[i][0];
    }*/
    /*for( int i = 0; i < 24; i++ ){
        for( int j = 0; j < 100; j++ ){
            
            std::cout << map[j][i];
            //std::cout << "mapArray[" << j << "][" << i << "] = " << mapArray[j][i] << std::endl;

        }
        std::cout << "\n";
        
    }*/
    
    
}


//
//  ReadMap.cpp
//  Game
//
//  Created by Cody Mulkern on 7/19/15.
//  Copyright (c) 2015 Cody Mulkern. All rights reserved.
//

#include "ReadMap.h"
#include <fstream>
#include <unistd.h>

void readMap( std::string filename , std::vector<std::vector<char>> &map){
    
    //Test file openers
    //std::ifstream file(filename.c_str());
    //std::ifstream file("/Users/Mulky/Library/Developer/Xcode/DerivedData/Game-dzfptcscvflqjvexkcxivpmbqfjm/Build/Products/Debug/map.txt");
    //std::ifstream file("map.txt", std::ios::in| std::ios::out);
    
    //Used to store char from text file.
    char c;
    
    //Char buffer used for getting current working directory.
    char buffer[1000];
    
    //Get current working directory and put into string.
    char *answer = getcwd(buffer, sizeof(buffer));
    
    //String to hold the line read in from file.
    std::string line;
    
    //String to hold the current working directory.
    std::string s_cwd;
    
    
    if (answer)
    {
        s_cwd = answer;
        std::cout << "reached inside answer" << std::endl;
    }
    
    s_cwd += "/" + filename;
    
    //std::cout << "Current working directory is: " << s_cwd << std::endl;
    
    //Open file in current working directory
    std::ifstream file(s_cwd);
    
    if( file.good()){
        std::cout << "File found" << std::endl;
    }
    else{
        std::cout << "File not found" << std::endl;
    }
    
    //While there is a new line extract line to "line".
    while(  getline( file, line ) ){
        
        //Nested for loops to extract chars from "line".
        for( int i = 0; i < 24; i++ ){
            
            for( int j = 0; j < 100; j++ ){
                
                c = line[j];
                
                map[j][i] = c;
            }
            getline( file, line );

        }
        
    }
    
    //Close file stream.
    file.close();
    
    
}


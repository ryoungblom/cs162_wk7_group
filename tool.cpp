/******************************************************
 ** Program: tool.cpp
 ** Author: reuben youngblom
 ** Date: 02/26/2017
 ** Description:  This is the implementation file for Rock Paper Scissors for CS 162 (tool)
 ** Input:  Will take user input and create AI input
 ** Output: Will display the winner and a win tracker
 ******************************************************/

#include "tool.hpp"


Tool::Tool ()  //not needed, as all child classes have prototypes
{
    
}



int Tool::getStrength(Tool)  //constructor
{
    return strength;  //returns strength
}

char Tool::getType () //constructor
{
    return toolType;  //returns type
}

int Tool::fight (Tool)  //fights tools, but virtual so not really needed here
{
    return 0;
}



/******************************************************
 ** Program: rock.hpp
 ** Author: reuben youngblom
 ** Date: 02/26/2017
 ** Description:  This is the header file for Rock Paper Scissors for CS 162 (rock)
 ** Input:  Will take user input and create AI input
 ** Output: Will display the winner and a win tracker
 ******************************************************/

#include "tool.hpp"

class Rock : public Tool
{
public:
    Rock (int rockStrength, char rockType);  //prototype
    int getStrength (Tool);  //returns stregnth
    char getType (Tool);  //returns type
    int fight(Tool);  //fight function
};

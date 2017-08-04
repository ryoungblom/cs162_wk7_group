/******************************************************
 ** Program: paper.hpp
 ** Author: reuben youngblom
 ** Date: 02/26/2017
 ** Description:  This is the implementation file for Rock Paper Scissors for CS 162 (paper)
 ** Input:  Will take user input and create AI input
 ** Output: Will display the winner and a win tracker
 ******************************************************/

#include "rock.hpp"

class Paper : public Tool
{
public:
    Paper (int paperStrength, char paperType);  //prototype
    int getStrength(Tool);  //returns the strength
    char getType (Tool);  //returns the type
    int fight(Tool);  //fight function
};

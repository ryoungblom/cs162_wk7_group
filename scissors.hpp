/******************************************************
 ** Program: scissors.hpp
 ** Author: reuben youngblom
 ** Date: 02/26/2017
 ** Description:  This is the header file for Rock Paper Scissors for CS 162 (scissors)
 ** Input:  Will take user input and create AI input
 ** Output: Will display the winner and a win tracker
 ******************************************************/

#include "paper.hpp"

class Scissors : public Tool
{
public:
    Scissors (int scissorsStrength, char scissorsType);  //prototype
    int getStrength(Tool);  //returns the strength
    int getStrengthR();  //returns strength but doesn't take a tool as an argument
    char getType (Tool);  //returns type (r, p, s)
    int fight(Tool);  //fight function
};

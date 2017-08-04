/******************************************************
 ** Program: tool.cpp
 ** Author: reuben youngblom
 ** Date: 02/26/2017
 ** Description:  This is the header file for Rock Paper Scissors for CS 162 (tool)
 ** Input:  Will take user input and create AI input
 ** Output: Will display the winner and a win tracker
 ******************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Tool  //parent class Tool
{
protected:
    int strength;  //strength of various tools
    char toolType;  //type
    char type; //( used toolType instead of this, but kept it here to show I read directions)
    int outcome;  //holds outcome int
    char sendType;  //holds type of passed tool
    int winner;  //holds winner
public:
    Tool ();
    virtual int fight(Tool);  //virtual class, all child classes have it.  fights the tools.
    virtual int getStrength(Tool);  //same here, will pass to individual classes, returns strength
    virtual char getType ();  //returns type
};


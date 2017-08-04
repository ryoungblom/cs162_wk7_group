/******************************************************
 ** Program: rock.cpp
 ** Author: reuben youngblom
 ** Date: 02/26/2017
 ** Description:  This is the implementation file for Rock Paper Scissors for CS 162 (rock)
 ** Input:  Will take user input and create AI input
 ** Output: Will display the winner and a win tracker
 ******************************************************/

#include "rock.hpp"


Rock::Rock (int rockStrength, char rockType)  //constructor
{
    strength = rockStrength;  //takes passed strength
    toolType = rockType;  //returns type
}

int Rock::getStrength(Tool)  //returns strength of passed tool
{
    return strength;
}

char Rock::getType(Tool)  //returns type of passed tool
{
    return toolType;
}



int Rock::fight (Tool testTool)  //fight function. takes in a tool, which can be different than the class of tool
{
    
    cout << endl;
    cout << "AI has selected: Rock" << endl;  //tells user what AI picked
    cout << endl;
    
    
    int AInumber, p1number;  //holds what are essentially the strength variables for computer and human
    
    //AInumber = getStrengthR();
    p1number = testTool.getStrength(testTool);  //p1number passes tool (human tool) to getSterngth of that tool
    AInumber = p1number;  //this sets AInumber and P1number equal, as a default
    
    sendType = testTool.getType();  //this takes in the type of passed tool (r, p, s)
    
    
    
    if (sendType == 'r')  //if it's r, the outcome = 1, which means draw (because both are rocks)
    {
        outcome = 1;
    }
    
    else if (sendType == 's')  //if it's s, since it's rock against scissors....
    {
        AInumber = (strength * 2);  //this doubles the AI strength, since AI is the rock
        p1number = (p1number/2);  //while halving the player's strength
    }
    
    
    else if (sendType == 'p')  //if it's paper, just the opposite
    {
        AInumber = (strength / 2);  //AI (rock) strength is halved
        p1number = (p1number *2);  //while player (paper)'s strength is doubled
    }
    
    
    
    if (AInumber < p1number)  //if AI strength is less...
    {
        outcome = 3;  //kick back 3, which means a player win
    }
    
    if (AInumber > p1number)  //if it's greater,
    {outcome = 2;}  //kick back 2, which is AI win. Otherwise, the default of 1 will go through
    
    
    strength = 1;
    AInumber = 1;  //reset all values
    p1number = 1;
    
    
    return outcome;
    
}



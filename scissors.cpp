/******************************************************
 ** Program: scissors.cpp
 ** Author: reuben youngblom
 ** Date: 02/26/2017
 ** Description:  This is the implementation file for Rock Paper Scissors for CS 162 (scissors)
 ** Input:  Will take user input and create AI input
 ** Output: Will display the winner and a win tracker
 ******************************************************/

#include "scissors.hpp"


Scissors::Scissors (int scissorStrength, char scissorType)  //constructor
{
    
    strength = scissorStrength;  //strength and type (strength is passed through, type is s)
    toolType = scissorType;
}


int Scissors::getStrengthR()  //returns strength without needing a tool as an argument  (did not need this function in the end)
{
    return strength;
}

int Scissors::getStrength(Tool)  //takes in a tool (so it can be passed from other classes)
{
    
    return strength;  //and returns strength
}

char Scissors::getType(Tool)  //takes in a tool and returns the type character
{
    return toolType;
}

int Scissors::fight (Tool testTool)  //fight function
{
    
    cout << endl;
    cout << "AI has selected: Scissors" << endl;  //tells user what AI has selected
    cout << endl;
    
    
    
    int AInumber, p1number;  //these are essentially the computer's strength and the user's strength
    
    //AInumber = getStrengthR();
    p1number = testTool.getStrength(testTool);  //  takes in tool that was passed (human's tool) and pulls the strength to set to p1number
    AInumber = p1number;  //sets AI number to this value so they're equal unless something changes
    
    sendType = testTool.getType();  //retrieves the type of tool that was passed
    
    
    if (sendType == 's')  // if scissors was passed...
    {
        outcome = 1;  //outcome is 1, which means draw
    }
    
    else if (sendType == 'p')  //if it's paper, it means that the strength ought to be doubled
    {
        AInumber = (strength * 2);  //so I double it here via AI number
        p1number = (p1number/2);  //and it also means that the human's strength is halved
    }
    
    
    else if (sendType == 'r')  //if it's rock, though, rock beats scisssors so it's the opposite
    {
        AInumber = (strength / 2);  //sterngth is halved
        p1number = (p1number *2);  //and human's strength is doubled
    }
    
    
    
    if (AInumber < p1number)  //if AI number is smaller, human wins
    {
        outcome = 3;  //3 means human win
    }
    
    else if (AInumber > p1number)  //but if its larger, computer wins
    {
        outcome = 2;  //2 means computer wins
    }  //AI win
    
    
    strength = 1;
    AInumber = 1;  //resets all values for the next round
    p1number = 1;
    
    return outcome;  //and returns outcome variable, which tells the program what the outcome was (who won)
}



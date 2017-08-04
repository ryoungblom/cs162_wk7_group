/******************************************************
 ** Program: paper.cpp
 ** Author: reuben youngblom
 ** Date: 02/26/2017
 ** Description:  This is the implementation file for Rock Paper Scissors for CS 162 (paper)
 ** Input:  Will take user input and create AI input
 ** Output: Will display the winner and a win tracker
 ******************************************************/
#include "paper.hpp"


Paper::Paper (int paperStrength, char paperType)  //constructor.
{
    strength = paperStrength;  //sets strength according to whatever was passed
    toolType = paperType;  //and type is 'p'
}

int Paper::getStrength(Tool)  //returns strength
{
    
    return strength;
}

char Paper::getType(Tool)  //returns tool name
{
    return toolType;
}


int Paper::fight (Tool testTool)  //fight function
{
    cout << endl;
    cout << "AI has selected: Paper" << endl;  //tells user what computer picked
    cout << endl;
    
    int AInumber, p1number;  //holds computer and player's strengths
    
    //AInumber = getStrengthR();
    p1number = testTool.getStrength(testTool);  // sets p1number to strength of passed tool
    AInumber = p1number;  //sets them equal as a default
    
    sendType = testTool.getType();  //sets sendType to type of passed tool
    
    
    if (sendType == 'p')  //if sendType (passed tool type) is p, outcome =1, which is a draw
    {
        outcome = 1;
    }
    
    if (sendType == 'r')  //if it's r, rock is worse than paper so...
    {
        AInumber = (strength * 2);   //computer strength is doubled (paper)
        p1number = (p1number/2);  //and human (rock) strenth is halved
    }
    
    
    if (sendType == 's')  //opposite for scissors
    {
        AInumber = (strength / 2);  //ai strength is halved
        p1number = (p1number *2);  //and player strength is doubled
    }
    
    
    if (AInumber < p1number)  //if AI number is smaller
    {
        outcome = 3;  //3 means human wins
    }
    
    if (AInumber > p1number)  //but if AI number is larger
    {outcome = 2;}  //2 means AI wins
    
    
    
    strength = 1;
    AInumber = 1;  //this resets all values for the next round
    p1number = 1;
    return outcome;
}



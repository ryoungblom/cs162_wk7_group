/******************************************************
 ** Program: RPS.cpp
 ** Author: reuben youngblom
 ** Date: 02/26/2017
 ** Description:  This is the implementation file for Rock Paper Scissors for CS 162 (RPSGame)
 ** Input:  Will take user input and create AI input
 ** Output: Will display the winner and a win tracker
 ******************************************************/

#include "RPSGame.hpp"


RPSGame::RPSGame (Tool p1, int rStr, int pStr, int sStr)  //prorotype
{
    
    int AIrockDefault = rStr;  //takes in either defaults or user-modified strengths
    int AIpaperDefault = pStr;  //whichever was passed by user
    int AIscissorsDefault = sStr;  //but they will be the same
    int AIselection;  //holds their tool selection
    
    
    Rock AIdefaultRock (AIrockDefault, 'r');
    Paper AIdefaultPaper (AIpaperDefault, 'p');  //second set of tools for the AI
    Scissors AIdefaultScissors (AIscissorsDefault, 's');
    
    
    Tool * p2;  //created pointer to object
    
    AIselection = (1 + rand() % 3);  //sets AIselection to random number 1-3
    
    if (AIselection == 1)  //if 1, they get rock
    {
        p2 = &AIdefaultRock;
    }
    
    else if (AIselection == 2)  //if 2, they get paper
    {
        p2 = &AIdefaultPaper;
    }
    
    else
    {
        p2 = &AIdefaultScissors;  //3 gets them scissors
    }
    
    
    //p2 = &AIdefaultPaper;
    
    /*
    The below function essentally calls the Computer's tool's fight function but sends the human's tool as an argument.  In this way, I get access to both sets of data.  i.e. if computer is paper and human is rock, it sends a 'rock' object to the paper's 'fight' function.
     */
    
    
    int winner = p2->fight(p1);  //creates winner int variable (instead of bool)
    
    if (winner == 3)  //if fight function comes back 3, it means human won
    {
        cout << "You win!" << endl;
        human_Wins++;  //adds one to human win score
    }
    
    else if (winner == 2)  //two means a loss, so it adds one to computer win score
    {
        cout << "You lose :(" << endl;
        AI_wins ++;
    }
    
    else
    {
        cout << "draw!" << endl;  //default (one) is a draw
        ties++;  //adds one to ties
    }
    
    
    cout << endl;
    cout << "Human: " << human_Wins << endl;  //prints out the current scores
    cout << "AI: " << AI_wins << endl;
    cout << "Draws: " << ties << endl;
    cout << endl;
    
    cout << "Would you like to play again?" << endl;  //and asks user if they want to play again
    
}


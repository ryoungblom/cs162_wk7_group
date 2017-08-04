/******************************************************
 ** Program: RPSGame.cpp
 ** Author: reuben youngblom
 ** Date: 02/26/2017
 ** Description:  This is the header file for Rock Paper Scissors for CS 162 (RPSGame)
 ** Input:  Will take user input and create AI input
 ** Output: Will display the winner and a win tracker
 ******************************************************/

#include "scissors.hpp"

class RPSGame
{
public:
    RPSGame (Tool p1, int rStr, int pStr, int sStr);  //prototype for RPSGame
    int scoreTracker;   //general score tracker, didn't use at all
    int human_Wins;  //tracks human wins
    int AI_wins;  //tracks computer wins  (used instead of "computer_wins" variable)
    int ties;  //tracks ties
};


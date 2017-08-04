/******************************************************
 ** Program: play_game.cpp
 ** Author: reuben youngblom
 ** Date: 02/26/2017
 ** Description:  This is the implementation file for Rock Paper Scissors for CS 162
 ** Input:  Will take user input and create AI input
 ** Output: Will display the winner and a win tracker
 ******************************************************/


/******************************************************
 
 
 ** NOTE: I ended up not having a group, but I spoke to Prof. Zhang and she said that if I can do this assignment on my own,
 I could get credit for it.  Thanks!!
 
 
 ******************************************************/



#include "RPSGame.hpp"

char startGame();  //function constructor for start game function, which is found below Main


int main()
{

    srand (time (NULL));  //seeds random generator
    //int player1;  //int variable for p1, didn't use
    char player1Select;  //holds the selected value to use for Switch statements
    char modify;  //hold value determining whether or not to modify
    
    bool retryBool = true;  //tracks whether game plays again

    int rockDefault = 1;  //initial defaults, to be passed to constructor
    int paperDefault = 1;  //they are variables so they can be user set if wanted
    int scissorsDefault = 1;
    
    modify = startGame();  //starts startGame function, which basically asks if user wants to modify power
    
        if (modify == 'y')  //if they do....
        {
            cout << "what would you like the rock strength to be?" << endl;
            cin >> rockDefault;  //this allows the strengths to be modified.  So one will always bsically win.
            
            cout << "what would you like the paper strength to be?" << endl;
            cin >> paperDefault;
            
            cout << "what would you like the scissors strength to be?" << endl;
            cin >> scissorsDefault;  //all can be modified individually

        }
    
    Rock defaultRock (rockDefault, 'r');  //initial objects for human player
    Paper defaultPaper (paperDefault, 'p');  //sends strength and type to RPSGame function
    Scissors defaultScissors (scissorsDefault, 's');
    
    Tool * tool1;  //creates object for human


    while (retryBool == true)  //determines whether user wants to exit the game
    {
    
    cout << endl;  //for aesthetics
        
    cout << "Choose your tool!" << endl;  //user prompt
        
        cout << "Please select 'r' for Rock, 's' for Scissors, or 'p' for Paper." << endl;
        cout << "You can also select 'e' to exit." << endl;  //user directions
    
    cin >> player1Select;  //takes in user input and uses it to determine what tool was selected
    
    
    switch (player1Select)  //takes in player one's choice and assigns it to the proper tool.
    {
        case 'r':  //if they choose r...
        {
            tool1 = &defaultRock;  //i.e. if they choose r, they get a rock.
            cout << endl;
            cout << "You chose rock!" << endl;
            cout << endl;
            break;
        }
            
        case 'p':
        {
            tool1 = &defaultPaper;  //p = paper
            cout << endl;
            cout << "You chose paper!" << endl;
            cout << endl;
            break;
        }
            
        case 's':
        {
            tool1 = &defaultScissors;  //s = scissors
            cout << endl;
            cout << "You chose scissors!" << endl;
            cout << endl;
            break;
        }
            
        case 'e':  //and e exits
        {
            retryBool = false;  //and tells game to exit by switching the bool to false
            break;
        }
            }
    
    if (retryBool == true)  //if the user selected something other than exiting...
    {
        RPSGame (*tool1, rockDefault, paperDefault, scissorsDefault);  //sends player's tool to RPSGame
    }
    
    }
    
    cout << "thanks for playing!" << endl;  //and thanks user for playing
    
    return 0;
}


char startGame()  //startGame function.  Mostly a set up function
{
    char menuSelection;  //holds selection for whether or not to modify
    bool strengthValidation = true;  //and does input validation
    
    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Do you want to choose different strengths for the tools?" << endl;  //user instructions
    cout << "(y-yes, n-no)" << endl;
    
    
    
    cin >> menuSelection;  //takes in selection
    
    while (strengthValidation == true)  //cycles until a valid input is put in
    {
        if (menuSelection == 'n')  //if they don't want to modify
        {
            cout << "Great!  We will use the defaults." << endl;  //just stays the same
            strengthValidation = false;  //and swiches bool to get out of the loop
        }
        
        else if (menuSelection == 'y')  //but if they select yes
        {
            strengthValidation = false;  //menuSelection is y, which will get send back.  And the loop exits
        }
        
        else
        {
            cout << "Sorry!  I didn't understand that command." << endl;  //input validation
            cout << endl;
            cout << "Do you want to choose different strengths for the tools?" << endl;
            cout << "(y-yes, n-no)" << endl;
            cout << endl;
            
        }
    }
    return menuSelection;
}



#include <iostream>
#include <cstdlib>
#include <ctime>

//you pick random number between 0-100. asks user is the number smaller or bigger than given answer. loop until found.

//user is asked for input
//user enters input
//check to see if input is correct - if not restart the cycle
//if user gets correct answer the cycle ends... duh.

int winningAnswer;

//i think its also bad practice to put new functions before main? i mean main should be just a main most of the time so idk, please talk this through with me.
int generateAnswer() //no idea how this works, just copy pasted it. also i think you can tell me a good way to deal with random numbers as it seems like quite the problem for everyone on the internet who are new or is it just me?
{
    int firstNumber = 0;
    int numberRange = 100;

    std::srand(std::time(0));

    int winningAnswer = std::rand() % numberRange +firstNumber;

    for (int i = 0; i < 1; i++)
    {
        winningAnswer = std::rand() % numberRange +firstNumber;
    }
    

    return winningAnswer;
}


int main()
{

int numberInput;
bool gameIsRunning = true;

    do
    {
        if (numberInput >= 0 && numberInput <= 100 ) //i know i made a mistake here, i also know you explained why its bad, but i forgot since then.
        {
        
        std::cout << "The winner number is: " + winningAnswer << std::endl;
        std::cout << "Please pick a number between 0-100:" << std::endl;
        std::cin >> numberInput;
        std::cout << "Your answer was: " + numberInput << std::endl;

            if (numberInput == winningAnswer)
            {
                std::cout << "Congratulations! You won! The correct answer was:" + winningAnswer << std::endl;
            }
        
            }
            else
            {
                std::cout << "Wrong answer! Try again!" << std::endl;
            }
            
        {
        std::cout << "Your entered answer isn't between 0-100 or you've entered something else other than a number. Please try again." <<std::endl;
        }

    } while (gameIsRunning == true);


    return 0;
}

//another problem with my personality is that i dont break down a big problem, i never do. i just go at it head first like some dum dum.
//and i also just jump between smaller problems while coding and not just focus on 1 specific part until its finished and ready to be deployed.
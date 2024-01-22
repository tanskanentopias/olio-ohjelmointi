#include "teht2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int)
{
    cout << "Give maximum value: ";
    cin >> maxNum;
    cout << "GAME CONSTRUCTOR: " << "object initialized with " << maxNum << " as maximum value. " << endl;
}

Game::~Game()
{
    cout << "GANE DESTRUCTOR: " << "object cleared from stack memory" << endl;
}


void Game::play()
{
    srand(time(NULL));
    int randomNumber = rand()%maxNum+1;



    while (playerGuess != randomNumber)
    {
        numOfGuesses++;
        cout << "Give your guess between 1-" << maxNum << ": ";
        cin >> playerGuess;
        cout << endl;

        if(playerGuess>maxNum){
            cout << "Number cant be bigger than " << maxNum << endl;
        }

        if(playerGuess<1){
            cout << "Number cant be smaller than 0. "<< endl;
        }

        if(playerGuess>randomNumber && playerGuess<=maxNum){
            cout << "Your guess is too big. " << endl;
        }

        if(playerGuess<randomNumber && playerGuess>0){
            cout << "Your guess is too small. " << endl;
        }

        else if(playerGuess==randomNumber && playerGuess>0 && playerGuess<=maxNum){
            cout << "Your guess is right = " << playerGuess << endl << endl;
            printGameResult();
        }

    }

}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << playerGuess << " with " << numOfGuesses << " guesses" << endl;
}

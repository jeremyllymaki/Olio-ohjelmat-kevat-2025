#include "game.h"

Game::Game(int maxNum) {
    cout<<"game constructor: koitappa arvata alle 5 yrityksella"<<endl;
    maxNumber = maxNum;


}

Game::~Game()
{
    cout<<"game destructor: loistavaa"<<endl;

}

void Game::play()
{
    srand(time(NULL));
    int randomNumber = rand() %10;
    int playerGuess;


    while (randomNumber != playerGuess){
        cout<<"arvaa luku 1-10"<<endl;
        cin>>playerGuess;
        numOfGuesses++;

        if(playerGuess<randomNumber){
            cout<<"luku on suurempi"<<endl;
        }
        else if(playerGuess>randomNumber){
            cout<<"luku on pienempi"<<endl;
        }
        else if(playerGuess == randomNumber){
            cout<<"oikein arvattu"<<endl;
        }

    }
printGameResult();
}

void Game::printGameResult(){

    cout<<"arvausten lukumaara:"<<numOfGuesses<<endl;
}







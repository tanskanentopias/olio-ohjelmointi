#ifndef TEHT2_H
#define TEHT2_H

using namespace std;

class Game
{
public:
    Game(int);
    ~Game();

    void play();



private:
    int maxNum;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult();
};

#endif // TEHT2_H

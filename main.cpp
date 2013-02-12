#include <iostream>
#include "Player.h"
#include "Board.h"
#include "Game.h"

using namespace std;

int main()
{
    /*cout << "Hello world!" << endl;

    Player P1, P2;

    P1.setName("Tikoy");
    P1.setIcon('O');

    P2.setName("Bert");
    P2.setIcon('X');

    P1.getMove();*/

    Game game;

    game.initialize();
    game.run();
    return 0;
}

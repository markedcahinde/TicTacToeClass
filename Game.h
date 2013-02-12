#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Player.h"


class Game
{
    public:
        Game();
        virtual ~Game();

        void initialize();
        void update();
        void render();

        bool checkWin();
        void switchPlayer();
        void run();
        bool checkTie();

    protected:
    private:
        Board m_board;
        Player m_p1;
        Player m_p2;
        Player *m_currentPlayer;

        bool m_isComplete;
        bool m_isTie;
        int counter_pogi_kenneth;
};

#endif // GAME_H

#include "Game.h"
#include "Board.h"
#include "Player.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}

void Game::initialize()
{
    counter_pogi_kenneth=0;
    cout << "initializing...\n";
    m_board.initialize();
    m_p1.setName("Tikoy");
    m_p1.setIcon('X');
    m_p2.setName("Bert");
    m_p2.setIcon('O');

    cout << "\n \t \t \t Tic-Tac-Toe Game\n\n \t  Player 1: X \t \t \t Player 2: O \n \n";

    m_currentPlayer = &m_p1;
    m_board.render();

}

void Game::update()
{
    counter_pogi_kenneth+=1;
    bool Al;
    m_isComplete = checkWin();

    if (!m_isComplete){

            if(counter_pogi_kenneth==10)
            {
                m_isComplete=checkWin();
                if(m_isComplete==false)
                {

                    cout<< "tie";
                    exit(0);

                }

            }
        else
        {

            Al =  m_board.update(m_currentPlayer->getMove(), m_currentPlayer->getIcon());
            if (Al){

                cout << "updating...\n";
                switchPlayer();
                cout << "Switching player...\n";
            }
        }

    }

    else
    {

        switchPlayer();
        cout << "game over.\n";

            if (m_currentPlayer == &m_p1)
            {
                cout << "Player 1 win.\n";
            }

            else
            {

                cout << "Player 2 win.\n";
            }

    }

}

void Game::render()
{
    m_board.initialize();
    m_board.render();
}

bool Game::checkWin()
{


    if ((m_board.box[0] == m_board.box[1]) && (m_board.box[1] == m_board.box[2]))
        return true;
    else if ((m_board.box[3] == m_board.box[4]) && (m_board.box[4] == m_board.box[5]))
        return true;
    else if ((m_board.box[6] == m_board.box[7]) && (m_board.box[7] == m_board.box[8]))
        return true;
    else if ((m_board.box[0] == m_board.box[3]) && (m_board.box[3] == m_board.box[6]))
        return true;
    else if ((m_board.box[1] == m_board.box[4]) && (m_board.box[4] == m_board.box[7]))
        return true;
    else if ((m_board.box[2] == m_board.box[5]) && (m_board.box[5] == m_board.box[8]))
        return true;
    else if ((m_board.box[0] == m_board.box[4]) && (m_board.box[4] == m_board.box[8]))
        return true;
    else if ((m_board.box[2] == m_board.box[4]) && (m_board.box[4] == m_board.box[6]))
        return true;
    else
        return false;
}

void Game::switchPlayer()
{
    if (m_currentPlayer == &m_p1)
    {
        m_currentPlayer = &m_p2;
    }
    else if (m_currentPlayer == &m_p2)
    {
        m_currentPlayer = &m_p1;
    }


}

void Game::run()
{
    m_isComplete = checkWin();
    while (!m_isComplete)
    {

        update();

    }
}


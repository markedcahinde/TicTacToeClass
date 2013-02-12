#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}

void Player::setName (string Name)
{
    name = Name;
}

void Player::setIcon(char Icon)
{
    icon = Icon;
}

string Player::getName()
{
    return name;
}

char Player::getIcon()
{
    return icon;
}
void Name()
{
	string player_1,player_2;

	 if (m_currentPlayer == &m_p1)
    {
        m_currentPlayer = &m_p2;
        cout<<player_1;
    }
    else if (m_currentPlayer == &m_p2)
    {
        m_currentPlayer = &m_p1;
        cout<<player_2;
    }
int Player::getMove()
{

    int move;
    cout << "Your move ;";
    cin >> move;

    return move;

}

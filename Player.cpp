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

int Player::getMove()
{
    int move;
    cout << "Your move: ";
    cin >> move;

    return move;

}

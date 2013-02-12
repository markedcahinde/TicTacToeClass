#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;


class Player
{
    public:
        Player();
        virtual ~Player();

        void setName(string);
        void setIcon (char);

        string getName();
        char getIcon();
        int getMove();
    protected:
    private:
        string name;
        char icon;
};

#endif // PLAYER_H

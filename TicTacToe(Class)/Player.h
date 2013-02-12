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
		void Name();
        string getName();
        char getIcon();
        int getMove();
    protected:
    private:


		//string Player m_p1;
        //string Player m_p2;
		char icon;

}

#endif // PLAYER_H

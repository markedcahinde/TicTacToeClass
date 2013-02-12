#include "Board.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Board::Board()
{
    //ctor
}

Board::~Board()
{
    //dtor
}

void Board::initialize ()
{
    int n;

    for (n=0; n<9; n++)
    {
        box[n] = n+'1';

    }
}

void Board::render()
{

	cout << "\t \t \t _____ _____ _____" << endl;
	cout << "\t \t \t|     |     |     |" << endl;
	cout << "\t \t \t|  " << box[0] << "  |  " << box[1] << "  |  " << box[2] << "  |" << endl;
	cout << "\t \t \t|_____|_____|_____|" << endl;
	cout << "\t \t \t|     |     |     |" << endl;
	cout << "\t \t \t|  " << box[3] << "  |  " << box[4] << "  |  " << box[5] << "  |" << endl;
	cout << "\t \t \t|_____|_____|_____|" << endl;
	cout << "\t \t \t|     |     |     |" << endl;
	cout << "\t \t \t|  " << box[6] << "  |  " << box[7] << "  |  " << box[8] << "  |" << endl;
	cout << "\t \t \t|_____|_____|_____|" << endl;


}

bool Board::update(int move, char icon)
{
    if (move == 1 && box[0] == '1')
    {
        box[0] = icon;
        system("cls");
        render();
        return true;
    }

    else if (move == 2 && box[1] == '2')
    {
        box[1] = icon;
        system("cls");
        render ();
        return true;
    }
    else if (move == 3 && box[2] == '3')
    {
        box[2] = icon;
        system("cls");
        render ();
        return true;
    }
    else if (move == 4 && box[3] == '4')
    {
        box[3] = icon;
        system("cls");
        render();
        return true;
    }
    else if (move == 5 && box[4] == '5')
    {
        box[4] = icon;
        system("cls");
        render ();
        return true;
    }
    else if (move == 6 && box[5] == '6')
    {
        box[5] = icon;
        system("cls");
        render();
        return true;
    }
    else if (move == 7 && box[6] == '7')
    {
        box[6] = icon;
        system("cls");
        render();
        return true;
    }
    else if (move ==8 && box[7] == '8')
    {
        box[7] = icon;
        system("cls");
        render();
        return true;
    }
    else if (move == 9 && box[8] == '9')
    {
        box[8] = icon;
        system("cls");
        render();
        return true;
    }
    else
    {
        cout<<"invalid move!"<<endl;
        return false;
    }

}

/*void Board::index()
{
    char index[9];
    int n;
    for (n=0; n<9; n++)
    {
        index[n] = box[n];
    }
}
*/

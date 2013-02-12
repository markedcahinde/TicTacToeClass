#ifndef BOARD_H
#define BOARD_H
#include "Player.h"


class Board
{
    public:
        Board();
        virtual ~Board();

        void initialize();
        void render();
        bool update(int, char);
        void index ();
        char box[9];

    protected:
    private:


};

#endif // BOARD_H

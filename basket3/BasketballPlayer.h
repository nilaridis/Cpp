#ifndef BASKETBALLPLAYER_H
#define BASKETBALLPLAYER_H

#include "Player.h"

class BasketballPlayer : public Player
{
    protected :
        string position ;
    public : 
        BasketballPlayer(string, string , string);

        string getPosition();
        string getPlayerDescription();

        friend ostream& operator<<(ostream& os, BasketballPlayer& bp);
        bool operator==(BasketballPlayer bp);
};


#endif
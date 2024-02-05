#ifndef BASKETBALLPLAYER_H
#define BASKETBALLPLAYER_H

#include "Player.h"

class BasketballPlayer : public Player
{
    private :
        string position ;
    public : 
        BasketballPlayer(string, string , string);

        string getPosition();
};


#endif
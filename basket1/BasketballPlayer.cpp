#include "BasketballPlayer.h"
#include "Player.h"
#include <string>
#include <iostream>


using namespace std ;

BasketballPlayer::BasketballPlayer(string name, string surname , string position) : Player (name,surname)
{
    this -> position = position ;
}

string BasketballPlayer::getPosition(){return position;}


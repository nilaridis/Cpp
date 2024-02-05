#include "BasketballPlayer.h"
#include <string>
#include <iostream>


using namespace std ;

BasketballPlayer::BasketballPlayer(string name, string surname , string position) : Player (name,surname)
{
    this -> position = position ;
}

string BasketballPlayer::getPosition(){return position;}


string BasketballPlayer::getPlayerDescription(){
    if (position.length() >= 3){
        return name + "-" + surname + "-" + position ;
    }else{
        return name + "-" + surname + "-" + "unknown";
    }
}

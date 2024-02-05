#include <iostream>
#include <string>
#include "Player.h"


using namespace std ;

Player::Player(string name, string surname){
    this -> name = name ;
    this -> surname = surname ;
}

string Player::getName(){return name;}
string Player::getSurname(){return surname;}

string Player::getPlayerDescription(){
    return name + "-" + surname ; 
}
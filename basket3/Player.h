#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std ;



class Player
{
protected:
    string name ; 
    string surname ; 

public:
    Player(string ,string);

    string getName();
    string getSurname();

    virtual string getPlayerDescription();
};




#endif
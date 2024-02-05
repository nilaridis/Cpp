#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std ;



class Player
{
private:
    string name ; 
    string surname ; 

public:
    Player(string ,string);

    string getName();
    string getSurname();
};







#endif
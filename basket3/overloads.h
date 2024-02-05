#include <iostream>
#include "BasketballPlayer.h"

using namespace std ;

ostream& operator<< (ostream& os, BasketballPlayer& bp) {
    if(bp.position.length() >= 3){
        os << bp.name + "-" + bp.surname + "-" + bp.position ;
    }else {
        os << bp.name + "-" + bp.surname + "-" + "unknown" ;
    }
    return os ;
    
}

bool BasketballPlayer::operator==(BasketballPlayer bp){
    if(this -> getPosition() == bp.getPosition())
        return true ;
    return false ;
}

template <class X> 
void print(X n){
    cout << n << endl ;
}
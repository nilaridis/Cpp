#include "Savings.h"


bool Savings::withdraw(float amount) {
    if (count && amount<= balance ){
        count -- ;
        balance -= amount ;
        return true ;
    }
        return false ;

    
}

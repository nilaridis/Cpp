#ifndef SAVINGS_H
#define SAVINGS_H
#include "Account.h"

class Savings : public Account {
    protected:
        int count ;
    public : 
        Savings(char *description, float balance) :
            Account(description,balance) {
                count = 3 ;
            }
        bool withdraw(float amount);
};



#endif 
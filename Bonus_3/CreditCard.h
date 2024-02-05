#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "Account.h"

class CreditCard : public Account
{
    protected :
        float LIMIT; 
    public :
        CreditCard(char *description, float balance, float LIMIT)
            :Account(description, balance){
                this -> LIMIT = LIMIT ;
            };
        bool withdraw (float);

};




#endif // CREDITCARD_H
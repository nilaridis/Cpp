#include <iostream>
#include <string.h>
#include "Account.h" 

Account::Account(char *description){
    balance = 0 ;
    this -> description = description ;
}

Account::Account(char *description, float balance){
    this -> description = description ;
    this -> balance = balance ; 
}

bool Account::withdraw(float amount){
    if (amount>balance)
    {
        return false ;
    }
    else
    {
        balance -= amount ; 
        return true ;
    }
}

bool Account::deposit(float amount){
    if (amount > 0){
        balance += amount ; 
        return true ;
    }
    return false ;
}


float Account::getBalance(){
    return balance ;
}

char* Account:: getDescription(){
    return description ;
}
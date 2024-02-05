#include "Customer.h"
#include <iostream>
#include "string.h"

#define MAX_ITEMS 3

Customer::Customer(char *username){
    strcpy(this->username=new char[strlen(username)+1] , username) ;
}

Customer::~Customer(){
    delete[] username ; 
}

char * Customer::getUsername(){
    return username ;
}

int Customer::getNumberOfProducts(){
    int products = 0 , i;

    for (i=0;i<MAX_ITEMS;i++ ){
        if(shoppingCart[i] != NULL){
            products ++ ;
        }
    }
    return products ;
}


bool Customer::addProduct(Product *product){
    int i ; 

    for (i=0;i<MAX_ITEMS;i++){
        if(shoppingCart[i] == NULL){
            shoppingCart[i]=product;
            return true;
        }
    }
    return false ;
}

float Customer::getTotalCost(){
    float tc = 0 ; // Total Cost
    int i ;

    for(i=0;i<MAX_ITEMS;i++){
        if(shoppingCart[i] != NULL){
            tc += shoppingCart[i]-> getPrice();
        }
    }
    return tc ;
}

Product *Customer::findProductById(unsigned int id, int &pos){
    int i ;
    for(i=0;i<MAX_ITEMS;i++){
        if (shoppingCart[i] != NULL && shoppingCart[i]-> getId()==id){
            pos= i;
            return shoppingCart[i];
        }
    }
    pos = -1 ;
    return NULL;
}

bool Customer::removeProduct(unsigned int id){
    int i ;
    for (i=0;i<MAX_ITEMS;i++){
        if(shoppingCart[i]!= NULL && shoppingCart[i]->getId()==id){
            shoppingCart[i]= NULL ; 
            return true;
        }
    }
    return false ;
}
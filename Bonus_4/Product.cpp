#include "Product.h"
#include "string.h"

Product::Product(unsigned int id , char *name , float price){
    this-> id =id ;
    this-> price = price ;
    strcpy(this->name =new char [strlen(name)+1], name);
}

Product::~Product(){
    delete[] name ;
}

char * Product::getName(){
    return name ; 
}

unsigned int Product::getId(){
    return id ;
} 

float Product::getPrice(){
    return price ;
}


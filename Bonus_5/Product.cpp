#include "Product.h"
#include <iostream>
#include <string.h>

// Default Constructor
Product::Product(){

}


Product::Product(const char *name, float price){
    strcpy(this->name = new char[strlen(name) +1], name);
    this-> price = price ; 
}

// Getter for name 
char *Product::getName(){
    return name ; 
}


// Setter  for name 
void Product::setName(const char *name){
    strcpy(this->name = new char[strlen(name) +1], name);
}

// Getter for price 
float Product::getPrice(){
    return price ;
}

// Setter for price
void Product::setPrice(float price){
    this ->price = price ;
}

// Destructor 
Product::~Product(){delete[] name;}
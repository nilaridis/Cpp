#include <iostream>
#include "Product.h"

using namespace std ; 


ostream& operator<<(ostream &mystream, Product &obj){
    mystream<< obj.getName()<<" "<<obj.getPrice();
    return mystream ; 
}
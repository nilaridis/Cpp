#include "Box.h"

using namespace std;

// Constructors
Box::Box(){
    x = y = z = 0 ;
}
Box::Box(double x , double y , double z){
    this -> x = x;
    this -> y = y;
    this -> z = z;
}

// Getters
double Box::getx(){return x;}
double Box::gety(){return y;}
double Box::getz(){return z;}


// Setters
void Box::setx(double x){this->x = x;}
void Box::sety(double y){this->y = y;}
void Box::setz(double z){this->z= z;}


// Operators
Box Box:: operator*(double s){
    Box t(x*s , y*s, z*s);
    return t;
}

Box Box:: operator/(double s){
    Box t(x/s , y/s, z/s);
    return t ;
}

Box Box:: operator+ (double s){
    Box t(x+s , y+s, z+s);
    return t ;
}

Box Box:: operator-(double s){
    Box t(x-s , y-s, z-s);
    return t ;
}

Box Box:: operator+(Box N){
    Box t(x+N.x , y+N.y , z+N.z);
    return t ;
}

Box Box:: operator-(Box N){
    Box t(x-N.x , y-N.y , z-N.z);
    return t ;
}


Box Box::operator = (Box s){     //Box& Box
    x = s.x;
    y = s.y;  
    z = s.z;  
    return *this;
}

// Bool
bool Box::operator ==(Box s){
    if (s.x==x && s.y==y && s.z==z)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}


bool Box::operator !=(Box s){
    if (s.x==x && s.y==y && s.z==z)
    {
        return false ;
    }
    else
    {
        return true ;
    }
}

Box Box::operator ++(){   //Box& Box
    x++ ; 
    y++ ;
    z++ ;
    return *this; 
}

Box Box:: operator++(int){
    Box t = *this;
    ++*this;
    return t;
}

Box Box::operator --(){   //Box& Box
    x-- ; 
    y-- ;
    z-- ;
    return *this; 
}

Box Box:: operator--(int){
    Box t = *this;
    --*this;
    return t;
}

Box Box::operator+=(int s){ //Box& Box
    this->x+=s ;
    this->y+=s ;
    this->z+=s ;
    return *this; 
}

Box Box::operator-=(int s){ //Box& Box
    this->x-=s ;
    this->y-=s ;
    this->z-=s ;
    return *this; 
}

Box Box::operator*=(int s){ //Box& Box
    this->x*=s ;
    this->y*=s ;
    this->z*=s ;
    return *this; 
}

Box Box::operator/=(int s){ //Box& Box
    this->x/=s ;
    this->y/=s ;
    this->z/=s ;
    return *this; 
}

ostream& operator<<(ostream& os, const Box& p){
    os<< "length: " << p.x << ", width: " << p.y << ", height: " << p.z ;
    return os ; 
}
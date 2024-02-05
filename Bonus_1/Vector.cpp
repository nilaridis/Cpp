#include <iostream>
#include <math.h>
#include <cmath>
#include "Vector.h" 
using namespace std;

Vector::Vector(){
    x = 0 ;
    y = 0 ;
}

Vector::Vector(double x , double y){
    this ->x = x ;
    this ->y = y ;
}

void Vector::SetX(double x) { this ->x = x ; }
void Vector::SetY(double y) { this ->y =y ;}

double Vector::GetX() {return x ;}
double Vector::GetY() {return y ;}


// Functions

double Vector::magnitude(){
    return sqrt(pow(x,2) + pow(y,2));
}

double Vector::angle(){
    float cos = x / sqrt(pow(x,2) + pow(y,2));
    float ang = acos(cos);
    return ang;
}

double Vector::angleD(){
    float cos = x / sqrt(pow(x,2) + pow(y,2));
    float angle = acos(cos);
    float deg = angle * (180.0/M_PI);
    return deg;
}

void Vector::multiply(double f){
    x = f*x;
    y = f*y;
}

Vector Vector::add(Vector v){
    Vector v1 ;
    v1.x = x + v.x ;
    v1.y = y + v.y ;
    return v1 ;
}

Vector Vector::clone(){
    Vector v2 ;
    v2.x = x ;
    v2.y = y ;
    return v2 ;
}
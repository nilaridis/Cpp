#include <iostream>
#include <iomanip>
#include "Scooter.h"


// Default Constructor
Scooter::Scooter() {
    maxKM = 0 ; 
    year = 0 ; 
}

Scooter:: ~Scooter(){}

// Constructor
Scooter::Scooter(int maxKM, int year) {
    this -> maxKM = maxKM ; 
    this -> year = year ; 
}

// Functions 
int Scooter::getMaxKM(){
    return maxKM ; 
}

int Scooter::getYear(){
    return year;
}

double Scooter::getPollutionScore(){
    return (double)maxKM*250/365 ;
}

double Scooter::getTaxes(){
    return (2022-year)*12.5 ;
}


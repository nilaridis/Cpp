#include <iostream>
#include <iomanip>
#include "Scooter.h"
#include "ElectricalScooter.h"

// Default Constructor
ElectricalScooter::ElectricalScooter() {
    maxKM = 0 ;
    year = 0;
    chargingTime = 0 ; 
}

// Constructor
ElectricalScooter::ElectricalScooter(int maxKM , int year , int chargingTime){
    this -> maxKM = maxKM ; 
    this -> year = year ; 
    this -> chargingTime = chargingTime ;
}

ElectricalScooter:: ~ElectricalScooter(){}

double ElectricalScooter::getPollutionScore(){
    return (double)chargingTime*300/365;
}

int ElectricalScooter:: getChargingTime(){
    return chargingTime ;
}

double ElectricalScooter:: getTaxes(){
    return Scooter::getTaxes()*0.8 ;
}

void ElectricalScooter:: setChargingTime(int chargingTime){
    this -> chargingTime = chargingTime ;
}
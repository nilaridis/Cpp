#include "Controller.h"
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std ;


// Save name and price of product array into my file
void Controller::save(Product products[], const char *filename, int num){
    ofstream fl;
    fl.open(filename);
    
    for(int i=0;i<num;i++){
        fl << products[i].getName() << "\n" << products[i].getPrice() << "\n" ;
    }
    fl.close();
}

// Load name and price from myfile to product array 
void Controller::load(const char *filename, Product products[], int num){

    fstream fl ; 
    fl.open(filename, ios::in);
    for (int i=0 ; i<num ; i++){
        string line ; 

        getline(fl, line);

        const int length = line.length();
        char *char_arr = new char[length + 1];
        strcpy(char_arr, line.c_str());

        products[i].setName(char_arr);


        getline(fl, line);
        products[i].setPrice(stof(line));

    }
    

}
/* 
 * File:   Supermarket.cpp
 * Author: luis
 */

#include <sstream>

#include "Supermarket.h"

using namespace std;

// Constructor
Supermarket::Supermarket(string n, int a, double p): name(n), Item(a, p) {
}

// Copy Constructor
Supermarket::Supermarket(const Supermarket& other): name(other.name), Item(other) {
}

// Destructor
Supermarket::~Supermarket() {    
}

// Public Methods
double Supermarket::pvp() {
    return this->getAmount() * this->getPrice() * 1.08;
}

string Supermarket::toString() {
    string str = "Supermarket: ";
    ostringstream strs1;
    strs1 << this->getAmount();
    str += strs1.str() + " " + name + " ";
    ostringstream strs2;
    strs2 << pvp();
    str += strs2.str();
    return  str;
}

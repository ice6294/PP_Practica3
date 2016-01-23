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
    return this->getPrice() * 1.08;
}

string Supermarket::toString() {
    string str = "Supermarket: ";
    ostringstream strs;
    strs << this->getAmount();
    str += strs.str() + " " + name + " ";
    strs << pvp();
    str += strs.str();
    return  str;
}

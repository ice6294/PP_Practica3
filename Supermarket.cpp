/* 
 * File:   Supermarket.cpp
 * Author: luis
 */

#include "Supermarket.h"

using namespace std;

// Constructor
Supermarket::Supermarket(string n, int a, double p): name(n), Item(a, p) {
}

// Destructor
Supermarket::~Supermarket() {    
}

// Public Methods
double Supermarket::pvp() {
    return this->getPrice() * 1.08;
}

string Supermarket::toString() {
    return "Supermarket: " + /*amount*/ name; // + pvp
}

// Private Methods
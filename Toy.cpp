/* 
 * File:   Toy.cpp
 * Author: luis
 */

#include <sstream>

#include "Toy.h"

using namespace std;

// Constructor
Toy::Toy(string b, string m, int a, double p): brand(b), model(m), Item(a, p) {
}

// Copy Constructor
Toy::Toy(const Toy& other): brand(other.brand), model(other.model), Item(other) {
}

// Destructor
Toy::~Toy() {
}

// Public Methods
double Toy::pvp() {
    return this->getPrice() * 1.21;
}

string Toy::toString() {
    string str = "Toy: ";
    ostringstream strs;
    strs << this->getAmount();
    str += strs.str() + " " + model + " ";
    strs << pvp();
    return str;
}

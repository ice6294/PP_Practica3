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
    double p = this->getAmount() * this->getPrice() * 1.21;
    return p;
}

string Toy::toString() {
    string str = "Toy: ";
    ostringstream strs1;
    strs1 << this->getAmount();
    str += strs1.str() + " " + model + " ";
    ostringstream strs2;
    strs2 << pvp();
    str += strs2.str();
    return str;
}

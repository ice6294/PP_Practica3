/* 
 * File:   Toy.cpp
 * Author: luis
 */

#include "Toy.h"

using namespace std;

// Constructor
Toy::Toy(string b, string m, int a, double p): brand(b), model(m), Item(a, p) {
}

// Destructor
Toy::~Toy() {
}

// Public Methods
double Toy::pvp() {
    return this->getPrice() * 1.21;
}

string Toy::toString() {
    return "Toy: " + /*amount*/ model; // + pvp
}

// Private Methods
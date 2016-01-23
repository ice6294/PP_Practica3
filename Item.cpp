/* 
 * File:   Item.cpp
 * Author: luis
 */

#include <sstream>

#include "Item.h"

using namespace std;

// Constructor
Item::Item(int a, double p): amount(a), price(p) {
}

// Copy Constructor
Item::Item(const Item& other): amount(other.amount), price(other.price) {
}

// Destructor
Item::~Item() {   
}

// Getters
int Item::getAmount() {
    return amount;
}

double Item::getPrice() {
    return price;
}

// Public Methods
double Item::pvp() {
    return price;
}

string Item::toString() {
    string str = "Item";
    ostringstream strs;
    strs << pvp();
    str += strs.str();
    return str;
}
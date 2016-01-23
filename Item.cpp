/* 
 * File:   Item.cpp
 * Author: luis
 */

#include "Item.h"

using namespace std;

// Constructor
Item::Item(int a, double p): amount(a), price(p) {
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
    return str;
}

// Private Methods

/* 
 * File:   Book.cpp
 * Author: luis
 */

#include "Book.h"
#include "Item.h"

using namespace std;

// Constructor (title, author, price))
Book::Book(string t, string a, double p): title(t), author(a), Item(1, p) {
}

// Destructor
Book::~Book() {
}

// Public Methods
double Book::pvp() {
    return this->getPrice() * 1.16;
}

string Book::toString() {
    return "Libro: " + title; // + pvp;
}

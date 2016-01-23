/* 
 * File:   Book.cpp
 * Author: luis
 */

#include <sstream>

#include "Book.h"

using namespace std;

// Constructor (title, author, price))
Book::Book(string t, string a, double p): title(t), author(a), Item(1, p) {
}

// Copy Constructor
Book::Book(const Book& other): title(other.title), author(other.author), Item(other) {
}

// Destructor
Book::~Book() {
}

// Public Methods
double Book::pvp() {
    return (this->getAmount() * this->getPrice() * 1.16);
}

string Book::toString() {
    string str = "Libro: " + title + " ";
    ostringstream strs;
    strs << pvp();
    str += strs.str();
    return str;
}

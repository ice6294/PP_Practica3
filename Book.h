/* 
 * File:   Book.h
 * Author: luis
 */

#ifndef BOOK_H
#define BOOK_H

#include "Item.h"

#include <string>

class Book : public Item {

    public:
        // Constructor (title, author, price))
        Book(std::string, std::string, double);
        // Copy Constructor
        Book(const Book& other);
        // Destructor
        ~Book();
        // Methods
        double pvp();
        std::string toString();

    private:
        // Attributes
        std::string title;
        std::string author;

};

#endif /* BOOK_H */


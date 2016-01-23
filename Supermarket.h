/* 
 * File:   Supermarket.h
 * Author: luis
 */

#ifndef SUPERMARKET_H
#define SUPERMARKET_H

#include "Item.h"

#include <string>

class Supermarket : public Item {

    public:
        // Constructor (name, amount, price)
        Supermarket(std::string, int, double);
        // Destructor
        ~Supermarket();
        // Methods
        double pvp();
        std::string toString();

    private:
        // Attributes
        std::string name;

};

#endif /* SUPERMARKET_H */


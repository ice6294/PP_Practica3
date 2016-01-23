/* 
 * File:   Toy.h
 * Author: luis
 */

#ifndef TOY_H
#define TOY_H

#include "Item.h"

#include <string>

class Toy : public Item {

    public:
        // Constructor
        Toy(std::string, std::string, int, double);
        // Copy Constructor
        Toy(const Toy& other);
        // Destructor
        ~Toy();
        // Methods
        double pvp();
        std::string toString();

    private:
        // Attributes
        std::string brand;
        std::string model;

};

#endif /* TOY_H */


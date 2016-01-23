/* 
 * File:   Item.h
 * Author: luis
 */

#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {

    public:
        // Constructor (amount, price))
        Item(int, double);
        // Destructor
        virtual ~Item();
        // Methods
        virtual double pvp();
        std::string toString();

    protected:
        // Getters
        int getAmount();
        double getPrice();
        
    private:
        // Attributes
        int amount;
        double price;

};

#endif /* ITEM_H */


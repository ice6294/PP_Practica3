/* 
 * File:   ItemProcessor.h
 * Author: luis
 */

#ifndef ITEMPROCESSOR_H
#define	ITEMPROCESSOR_H

#include <vector>
#include "Item.h"

class ItemProcessor {

    public:
        // Constructor
        ItemProcessor();
        // Destructor
        virtual ~ItemProcessor();
        // Methods
        void load(std::string);
	double pvp();
	std::string generateTicket();

    private:
        // Attributes
        std::vector<Item*> items;
        // Private Methods
        std::vector<std::string> split(std::string, char);
        void addItem(std::vector<std::string>);

};

#endif	/* ITEMPROCESSOR_H */


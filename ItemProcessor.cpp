/* 
 * File:   ItemProcessor.cpp
 * Author: luis
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <vector>

#include "ItemProcessor.h"
#include "Book.h"
#include "Supermarket.h"
#include "Toy.h"

using namespace std;

// Constructor
ItemProcessor::ItemProcessor() {
    items = vector<Item*>();
}

// Destructor
ItemProcessor::~ItemProcessor() {
}

// Methods
void ItemProcessor::load(string index) {
    try {

        // Open input.txt
        ifstream in;
        in.open(index.c_str(), ifstream::in);

        // Read first line -> nº of next lines to read
        string str;
        getline(in, str);
        int lines = atoi(str.c_str());

        // Read line by line
        char sep = ' ';
        for(int i = 0; i < lines; i++) {
            getline(in, str);
            vector<string> line = ItemProcessor::split(str, sep);
            addItem(line);
        }

    } catch(exception& e) {
        cout << "#Error: " << e.what() << endl;
    }

}

double ItemProcessor::pvp() {
    double count = 0;
    for (int i = 0; i < items.size(); i++) {
        count += items.at(i)->pvp();
    }
    return count;
}

string ItemProcessor::generateTicket() {
    string ticket = "\n\nTICKET COMPRA\n";
    for (int i = 0; i < items.size(); i++) {
        ticket += "\t" + items.at(i)->toString() + "\n";
    }
    ostringstream strs;
    strs << pvp();
    ticket += "Precio total: " + strs.str() + "\n";
    return ticket;
}

// Private Methods
vector<string> ItemProcessor::split(string line, char sep) {
    vector<string> list;
    stringstream ss(line);
    string token;
    while(getline(ss, token, sep)) {
        list.push_back(token);
    }
    return list;
}

void ItemProcessor::addItem(vector<string> line) {
    int type = atoi(line.at(0).c_str());
    switch(type) {
        case 1: { // Book
            string title = line.at(1);
            string author = line.at(2);
            double price = atof(line.at(3).c_str());

            Book* book = new Book(title, author, price);
            items.push_back(book);
            break;
        }
        case 2: { // Supermarket
            string name = line.at(1);
            int amount = atoi(line.at(2).c_str());
            double price = atof(line.at(3).c_str());

            Supermarket* supermarket = new Supermarket(name, amount, price);
            items.push_back(supermarket);
            break;
        }
        case 3: { // Toy
            string brand = line.at(1);
            string model = line.at(2);
            int amount = atoi(line.at(3).c_str());
            double price = atof(line.at(4).c_str());

            Toy* toy = new Toy(brand, model, amount, price);
            items.push_back(toy);
            break;
        }
        default:
            cout << "No se ha reconocido el producto." << endl;
    }
}

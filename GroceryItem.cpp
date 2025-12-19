#include "GroceryItem.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

// Constructor to initialize GroceryItem with item name and quantity
GroceryItem::GroceryItem(const string& itemName, int qty) {
	this->item = itemName;
	this->quantity = qty;
}

// Getter for quantity
int GroceryItem::GetQuantity() const {
		return quantity;
}

// Getter for item name
string GroceryItem::GetItem() const {
		return this->item;
}
#pragma once
#include <string>
using namespace std;

class GroceryItem
{
	public:
		GroceryItem(const string& itemName, int qty);
		int GetQuantity() const;
		string GetItem() const;
	private:
		string item;
		int quantity;
};


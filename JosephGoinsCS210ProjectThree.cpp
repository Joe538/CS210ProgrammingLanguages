// Joseph Goins
// CS 210
// 12/14/25
// Project Three: Chada Tech Corner Grocer 

#include <iostream>
#include <string>
#include "WelcomeMessages.h"
#include "MenuOptions.h"
#include "GroceryItem.h"
#include "GoodbyeMessages.h"
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	// Create objects
	WelcomeMessages welcome;
	MenuOptions menu;
	GoodbyeMessages goodbye;
	string userInput;
	string fileName = "GroceryItems.txt"; // Input file name
	vector<GroceryItem> groceryList;

	welcome.DisplayInitialWelcomeMessage(); // Display welcome message

	// Main loop for menu options
	while (userInput != "4")
	{
		// Display menu options and get user input
		menu.DisplayMenuOptions();
		cin >> userInput;
		// Process user input
		if(userInput == "1")
		{
			// Get item name from user
			string itemName;
			cout << "Enter the item name: ";
			cin >> itemName;

			// Initialize counter and declare line for getline
			int quantity = 0;
			string line;

			// Open a fresh ifstream so we always start reading from the beginning
			ifstream countFile(fileName);
			if (!countFile) {
				cout << "Failed to open file for counting: " << fileName << endl;
			}
			else {
				while (getline(countFile, line))
				{
					if (line == itemName)
					{
						++quantity; // Increment quantity if item found
					}
				}
			}

			// Add item to grocery list if found
			if(quantity > 0)
			{
				GroceryItem newItem(itemName, quantity);
				groceryList.push_back(newItem);
				cout << "Item added successfully." << endl;
				cout << "The quantity of " << itemName << " is: " << quantity << endl; // Display quantity
			}
			else {
				cout << "Item not found in the file." << endl; // Notify user if item not found
			}

			countFile.close(); // Close the counting file
		}
		else if(userInput == "2")
		{
			// Display numeric grocery list
			cout << "Numeric Grocery List:" << endl;
			for (size_t i = 0, n = groceryList.size(); i < n; ++i) {
				const GroceryItem& item = groceryList[i];
				cout << item.GetItem() << ": " << item.GetQuantity() << endl; // Display item and quantity
			}
		}
		else if(userInput == "3")
		{
			// Display histogram grocery list
			cout << "Histogram Grocery List:" << endl;
			for (size_t i = 0, n = groceryList.size(); i < n; ++i) {
				const GroceryItem& item = groceryList[i];
				// Display item and histogram value with asterisks
				cout << item.GetItem() << ": " << string(item.GetQuantity(), '*') << endl;
			}
		}
		else if(userInput == "4")
		{
			break;
		}
		else
		{
			cout << "Invalid input. Please try again." << endl;
		}
	}

	// Write grocery list to output file
	ofstream outFile("frequency.dat"); // Output file name
	if (!outFile) return 1;

	// Write each item and its quantity to the file
	for (size_t i = 0, n = groceryList.size(); i < n; ++i) {
		const GroceryItem& item = groceryList[i];
		outFile << item.GetItem() << ": " << item.GetQuantity() << endl;
	}

	outFile.close(); // Close the output file

	goodbye.DisplayGoodbyeMessage(); // Display goodbye message

	return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void sandwichSizeSelector(int size, vector <string>& selectedItems);
void breakTypeSelector(int& breadType, vector <string>& selectedItems);
void fillingTypeSelector(int& fillingType, vector <string>& selectedItems);
void saladTypeSelector(int& saladType, vector <string>& selectedItems);
void printSelectedItems(vector <string>& selectedItems);

int main() {

	cout << "\t\t\t\t\t\tWelcome to \"Picabread\"" << endl << endl << endl;

	int size{}, breadType{}, fillingType{}, saladType{};
	vector <string> selectedItems{};

	sandwichSizeSelector(size, selectedItems);
	breakTypeSelector(breadType, selectedItems);
	fillingTypeSelector(fillingType, selectedItems);
	saladTypeSelector(saladType, selectedItems);
	printSelectedItems(selectedItems);
	return 0;
}

void sandwichSizeSelector(int size, vector <string>& selectedItems) {

	cout << "\t\t\t\t\t\t\t Sizes :\n\n\t\t\t\t\t\t\t1 - 15 cm\n\t\t\t\t\t\t\t2 - 30 cm\n\n";
	do {

		cout << "Choose size of the sandwich you want : ";
		cin >> size;

	} while (size < 1 || size > 2);

	if (size == 1) {
		selectedItems.push_back("15 cm");
	}
	else {
		selectedItems.push_back("30 cm");
	}


}
void breakTypeSelector(int& breadType, vector <string>& selectedItems) {

	cout << "\n\n\n\t\t\t\t\t\t     Types of bread :\n\n\t\t\t\t\t\t     1 - White Bread \n\t\t\t\t\t\t     2 - Brown Bread\n\t\t\t\t\t\t     3 - Honey Bread \n\t\t\t\t\t\t     4 - Seed Bread\n\n\n";

	do {

		cout << "Enter number of the bread you want : ";
		cin >> breadType;

	} while (breadType < 1 || breadType > 4);

	if (breadType == 1) {
		selectedItems.push_back("White Bread");
	}
	else if (breadType == 1) {
		selectedItems.push_back("Brown Bread");
	}
	else if (breadType == 1) {
		selectedItems.push_back("Honey Bread");
	}
	else {
		selectedItems.push_back("Seed Bread");
	}

}
void fillingTypeSelector(int& fillingType, vector <string>& selectedItems) {

	cout << "\n\n\n\t\t\t\t\t\t     Types of filling :\n\n\t\t\t\t\t\t        1 - Beef \n\t\t\t\t\t\t        2 - Chicken\n\t\t\t\t\t\t        3 - Cheese \n\t\t\t\t\t\t        4 - Egg\n\t\t\t\t\t\t        5 - Tuna\n\t\t\t\t\t\t        6 - Turkey\n\t\t\t\t\t\t        7 - Skip\n\n\t\t\t\t\t\t\n\n\n";

	char choice{};
	vector <string> choices{};
	do {

		do {

			cout << "Enter type of filling you want : ";
			cin >> fillingType;

		} while (fillingType < 1 || fillingType > 7);

		switch (fillingType)
		{
		case 1:
			selectedItems.push_back("Beef");
			choices.push_back("Beef");
			break;
		case 2:
			selectedItems.push_back("Chicken");
			choices.push_back("Chicken");
			break;
		case 3:
			selectedItems.push_back("Cheese");
			choices.push_back("Cheese");
			break;
		case 4:
			selectedItems.push_back("Egg");
			choices.push_back("Egg");
			break;
		case 5:
			selectedItems.push_back("Tuna");
			choices.push_back("Tuna");
			break;
		case 6:
			selectedItems.push_back("Turkey");
			choices.push_back("Turkey");
			break;
		default:
			break;
		}

		cout << "\n\t\t\t\t\t\tSelected fillings : ";

		for (int i = 0; i < choices.size(); i++) {
			if (choices.size() > 1) {
				cout << " - ";
			}
			cout << choices.at(i);
		}
		cout << endl;

		cout << "\n\nWill you like to add more fillings?\n\nPress \"1\" for yes or press any key to continue" << endl;
		cout << "Enter your choice : ";
		cin >> choice;

	} while (choice == '1');

}
void saladTypeSelector(int& saladType, vector <string>& selectedItems) {

	cout << "\n\n\n\t\t\t\t\t\t     Types of salad :\n\n\t\t\t\t\t\t        1 - Lettuce \n\t\t\t\t\t\t        2 - Tomato\n\t\t\t\t\t\t        3 - Sweet corn \n\t\t\t\t\t\t        4 - Cucumber\n\t\t\t\t\t\t        5 - Pepper\n\t\t\t\t\t\t        6 - Onion\n\t\t\t\t\t\t        7 - Skip\n\n\t\t\t\t\t\t\n\n\n";

	char choice{};
	vector <string> choices{};
	do {

		do {

			cout << "Enter type of salad you want : ";
			cin >> saladType;

		} while (saladType < 1 || saladType > 7);

		switch (saladType)
		{
		case 1:
			selectedItems.push_back("Lettuce");
			choices.push_back("Lettuce");

			break;
		case 2:
			selectedItems.push_back("Tomato");
			choices.push_back("Tomato");

			break;
		case 3:
			selectedItems.push_back("Sweet corn");
			choices.push_back("Sweet corn");

			break;
		case 4:
			selectedItems.push_back("Cucumber");
			choices.push_back("Cucumber");

			break;
		case 5:
			selectedItems.push_back("Pepper");
			choices.push_back("Pepper");

			break;
		case 6:
			selectedItems.push_back("Onion");
			choices.push_back("Onion");

			break;
		default:
			break;
		}

		cout << "\n\t\t\t\t\t\tSelected fillings : ";

		for (int i = 0; i < choices.size(); i++) {

			if (choices.size() > 1) {
				cout << " - ";
			}
			cout << choices.at(i);
		}
		cout << endl;

		cout << "\n\nWill you like to add more salads?\n\nPress \"1\" for yes or press any key to continue" << endl;
		cout << "Enter your choice : ";
		cin >> choice;

	} while (choice == '1');



}
void printSelectedItems(vector <string>& selectedItems) {

	cout << "\n\n\t\t\t\t\t\tYour final order : \n\n";

	for (auto print : selectedItems) {

		cout << print << " - ";

	}

	cout << "\n\n\n\t\t\t\t\t\tHappy Eating! :)" << endl << endl;
}
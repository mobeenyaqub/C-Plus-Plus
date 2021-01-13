#include <iostream>
using namespace std;

int main(){

	string category1 = "Phone" , item_code = "0000";
	string category2 = "Tablet", category3 = "SIM card";
	string category4 = "Case", category5 = "Charger";
	string description,sim_card_code,case_code,charger_code;
	double price = 0.00,total,sim_card_cost=0.00,case_cost = 0.00,charger_cost = 0.00;
	int choice;
	string category,sim_card_category,case_category,charger_category;


	do{

	cout <<endl <<category1 << " options available are : \n\n";

	cout << "0-  Compact \t\t\t\t\t\t\t\t\t" << "Price($) = 29.99\n";

	cout << "1-  Clam Shell \t\t\t\t\t\t\t\t\t" << "Price($) = 49.99\n";

	cout << "2-  RoboPhone  5-inch screen and 64 GB memory \t\t\t\t\t" << "Price($) = 199.99\n";

	cout << "3-  RoboPhone  6-inch screen and 256 GB memory \t\t\t\t\t" << "Price($) = 499.99\n";

	cout << "4-  Y-Phone Standard  6-inch screen and 64 GB memory \t\t\t\t" << "Price($) = 549.99\n";

	cout << "5-  Y-Phone Deluxe  6-inch screen and 256 GB memory \t\t\t\t" << "Price($) = 649.99\n";

	cout <<"\n\n\t\t\t\t\t****************************" <<endl<<endl << category2 << " options available are : \n\n";

	cout << "6-  RoboTab  8-inch screen and 64 GB memory \t\t\t\t\t" << "Price($) = 149.99\n";

	cout << "7-  RoboTab  10-inch screen and 128 GB memory \t\t\t\t\t" << "Price($) = 299.99\n";

	cout << "8- Y-Tab Standard  10-inch screen and 128 GB memory\t\t\t\t" << "Price($) = 499.99\n";

	cout << "9-  Y-Tab Deluxe  10-inch screen and 256 GB memory \t\t\t\t" << "Price($) = 599.99\n";

	cout << "\n\nEnter your choice : ";
	cin >> choice;

	} while (choice < 0 || choice>9);

	switch (choice)
	{
	case 0:
		item_code = "BPCM";
		description = "Compact";
		price = 29.99;
		break;

	case 1:
		item_code = "BPSH";
		description = "Clam Shell";
		price = 49.99;
		break;

	case 2:
		item_code = "RPSS";
		description = "RoboPhone  5-inch screen and 64 GB memory";
		price = 199.99;
		break;

	case 3:
		item_code = "RPLL";
		description = "RoboPhone  6-inch screen and 256 GB memory";
		price = 499.99;
		break;

	case 4:
		item_code = "YPLS";
		description = "Y-Phone Standard  6-inch screen and 64 GB memory";
		price = 549.99;
		break;

	case 5:
		item_code = "YPLL";
		description = "Y-Phone Deluxe  6-inch screen and 256 GB memory";
		price = 649.99;
		break;

	case 6:
		item_code = "RTMS";
		description = "RoboTab  8-inch screen and 64 GB memory";
		price = 149.99;
		break;

	case 7:
		item_code = "RTLM";
		description = "RoboTab  10-inch screen and 128 GB memory";
		price = 299.99;
		break;

	case 8:
		item_code = "YTLM";
		description = "Y-Tab Standard  10-inch screen and 128 GB memory";
		price = 499.99;
		break;

	case 9:
		item_code = "YTLL";
		description = "Y-Tab Deluxe  10-inch screen and 256 GB memory";
		price = 599.99;
		break;
	}

	if (choice >= 0 && choice < 6) {
		category = "Phone";
	}
	else {
		category = "Tablet";
	}

	cout << "\n\n\t\t\t\t\t****************************\n\n\n\n";

	do{

	cout << "Which option will you choose : \n"<<"1-SIM FREE\n2-Pay as you go option?\n\nEnter your choice : ";

	cin >> choice;

	} while (choice < 1 || choice>2);

	switch (choice) {
	case 1:
		sim_card_code = "SMNO";
		sim_card_cost = 0.00;
		sim_card_category = "SIM FREE";
		break;
	case 2:
		sim_card_code = "SMPG";
		sim_card_cost = 9.99;
		sim_card_category = "SIM Purchased";
		break;
	}


	cout << "\n\n\t\t\t\t\t****************************\n\n\n\n";

	do {

		cout << "Will you like to add a case?\n" << "1-Luxury Case\n2-Standard Case\n\nEnter your choice : ";

		cin >> choice;

	} while (choice < 1 || choice>2);

	switch (choice) {
	case 1:
		case_code = "CSLX";
		case_cost = 50.00;
		case_category = "Luxuy";
		break;

	case 2:
		case_code = "CSST";
		case_cost = 0.00;
		case_category = "Standard";
		break;
	
	}


	cout << "\n\n\t\t\t\t\t****************************\n\n\n\n";

	do {

		cout << "Would you like to add a charger?\n" << "1-Car\n2-Home\n3-Both\n4-None\n\nEnter your choice : ";

		cin >> choice;

	} while (choice < 1 || choice>4);


	switch (choice) {
	case 1:
		charger_code = "CGCR";
		charger_cost = 19.99;
		charger_category = "Car";
		break;
	case 2:
		charger_code = "CGHM";
		charger_cost = 15.99;
		charger_category = "Home";
		break;
	case 3:
		charger_code = "CGHM && CGCR";
		charger_cost = 15.99 + 19.99;
		charger_category = "Car & Home";
		break;
	case 4:
		charger_cost = 0;
		case_category = "None";
		break;
	}

	total = price + sim_card_cost + case_cost + charger_cost;

	cout << "\n\n\t\t\t\t\t****************************\n\n\n\n";

	cout << "\n\n\t\t\t\t\t****************************\n\n\n\n";

	cout << "Your items are as follow : " << endl<<endl;

	cout << "Category : " << category << endl;
	cout << "Item Code : " << item_code << endl;
	cout << "Description : " << description << endl;
	cout << "Sim card : " << sim_card_category << endl;
	cout << "Case : " << case_category << endl;
	cout << "Charger : " << charger_category << endl;
	cout << "\nTotal = " << total << endl;

	return 0;

}

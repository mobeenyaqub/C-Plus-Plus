#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;


int main()
{
	int senior_citizen_number{ 0 }, carers{ 2 }, total_people{ 0 };
	float cost_per_head{ 0 }, total_cost_of_citizens{ 0 }, total_cost{ 0 }, profit{ 0 }, estd_cost{ 0 };
	float coach_cost{ 0 }, meal_cost{ 0 }, theatre_cost{ 0 };
	float amount_paid{ 0 };
	vector <string> sc_names,ep_names,carer_1;
	string name,carer,extra_people_name;
	int extra_people{ 0 }, extra_number{ 0 };
	char choice{'0'};


	do 
	{
		cout << "Enter number of senior citizens going for outing between 10 and 36 : ";
		cin >> senior_citizen_number;
	} while (senior_citizen_number < 10 || senior_citizen_number>36);

	total_people = senior_citizen_number + carers;

	if (total_people >= 12 && total_people <= 16) 
	{
		//calculating total cost and cost per head
		estd_cost = (14 * meal_cost) + coach_cost + (14 * theatre_cost);
		coach_cost = 150;
		meal_cost = 14*senior_citizen_number;
		theatre_cost = 21*senior_citizen_number;
		total_cost_of_citizens = coach_cost + meal_cost + theatre_cost;
		cost_per_head = total_cost_of_citizens / senior_citizen_number;
	}
	else if (total_people >= 17 && total_people <= 26) 
	{
		//calculating total cost and cost per head
		estd_cost = (24 * meal_cost) + coach_cost + (24 * theatre_cost);
		coach_cost = 190;
		meal_cost = 13.50 * senior_citizen_number;
		theatre_cost = 20 * senior_citizen_number;
		total_cost_of_citizens = coach_cost + meal_cost + theatre_cost;
		cost_per_head = total_cost_of_citizens / senior_citizen_number;
	}
	else 
	{
		//calculating total cost and cost per head
		//Extra carer is added 
		estd_cost = (36 * meal_cost) + coach_cost + (36 * theatre_cost);
		carers += 1;
		total_people += 1;
		coach_cost = 225;
		meal_cost = 13 * senior_citizen_number;
		theatre_cost = 19 * senior_citizen_number;
		total_cost_of_citizens = coach_cost + meal_cost + theatre_cost;
		cost_per_head = total_cost_of_citizens / senior_citizen_number;
	}

	//Displaying total cost and cost per head of trip
	cout << "\nTotal cost of trip will be : " << total_cost_of_citizens << endl;
	cout << "\nCost per head will be approximately : " << ceil(cost_per_head) << endl;

	//Checking for the extra seats
	if (total_people >= 12 && total_people < 16) {
		extra_people = 16 - total_people;
		cout << "\nThere are still seats for " << extra_people << " people on the bus remaining\n" << endl;
		cout << "\nWould you like to add more people?\n";
		cout << "Press Y/y if you want to or else any other key to continue\n";
		cin >> choice;
	}
	else if (total_people >= 17 && total_people < 26) {
		extra_people = 26 - total_people;
		cout << "\nThere are still seats for " << extra_people << " people on the bus remaining\n" << endl;
		cout << "\nWould you like to add more people?\n";
		cout << "Press Y/y if you want to or else any other key to continue\n";
		cin >> choice;
	}
	else if (total_people >= 27 && total_people < 39) {
		extra_people = 36 - total_people;
		cout << "\nThere are still seats for " << extra_people << " people on the bus remaining\n" << endl;
		cout << "\nWould you like to add more people?\n";
		cout << "Press Y/y if you want to or else any other key to continue\n";
		cin >> choice;
	}

	//Checking if extra people are added
	switch (choice)
	{
	case 'Y':
	case 'y':
		cout << "How many extra members would you like to add?" << endl;
		cout << "Enter their number : ";
		cin >> extra_number;
		extra_people -= extra_number;
	}


	cout << "\n**Now we will be taking names of senior citizens**\n" << endl;

	for (int i = 0; i < senior_citizen_number; i++) {
		cout << "Enter your name : ";
		cin >> name;
		sc_names.push_back(name);
		cout << "Enter the amount paid : ";
		cin >> amount_paid;
		total_cost += amount_paid;
	}

	if(choice=='y' || choice =='Y'){

		cout << "\n**Now we will be taking names of extra people**\n" << endl;

		for (int i = 0; i < extra_number; i++) {
			cout << "Enter your name : ";
			cin >> extra_people_name;
			ep_names.push_back(extra_people_name);
			cout << "Enter the amount paid : ";
			cin >> amount_paid;
			total_cost += amount_paid;
		}

	}

	cout << "\nCarers are suppose to enter their names now : \n";

	for (int i = 0; i < carers; i++) {
		cout << "Enter your name : ";
		cin >> carer;
		carer_1.push_back(carer);
	}
	
	cout << "\nSenior citizens going on outing are as follow : \n"<<endl;
	for (auto people : sc_names) {
		cout << people << endl;
	}

	cout << "\nThese are the carers going on outing : \n" << endl;

	for (auto crr : carer_1) {
		cout << crr << endl;
	}

	if (choice == 'Y' || choice == 'y') {

		cout << "\nThese are the extra people going on outing : \n" << endl;

		for (auto ext : ep_names) {
			cout << ext << endl;
		}
	}
	
	//Calculating profit
	profit = total_cost - estd_cost;

	if (total_cost > estd_cost) {
		cout << "\nTotal profit made is : " << profit << endl << endl;;
	}
	else if (profit==0) {
		cout << "\nNo profit made -- broken-even " << endl << endl;;
	}
	else {
		cout << "\nTotal loss of " << estd_cost - total_cost << " suffered" << endl<<endl;
	}

	return 0;
}
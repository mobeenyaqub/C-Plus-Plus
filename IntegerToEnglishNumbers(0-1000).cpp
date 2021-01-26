#include <iostream>
#include <string>
using namespace std;

void units(int);
void tens(int);
void hundreds(int);

int main()
{
	int number{};
	char choice{};

	cout << "\n\t\t\t\tInteger to english number conversion (1-1000)\n\n";

	do {

		cout << "\nEnter an integer to convert to english number : ";
		cin >> number;

		if (number == 1000) {
			cout << endl << number << " = One Thousand" << endl << endl;
		}
		else if (number > 99 && number < 1000) {
			hundreds(number);
		}
		else if (number > 9 && number < 100) {
			tens(number);
		}
		else if (number < 10) {
			units(number);
		}
		else if (number == 0) {
			cout << endl << number << " = Zero" << endl << endl;
		}
		else {
			cout << endl << number << " Conversion not yet supported!" << endl << endl;
		}

		cout << "\n\nPress 1 to exit or press any key to continue : ";
		cin >> choice;

	} while (choice != '1');


	return 0;
}

void units(int number) {

	switch (number)
	{
	case 1:
		cout << endl << number << " = One" << endl << endl;
		break;
	case 2:
		cout << endl << number << " = Two" << endl << endl;
		break;
	case 3:
		cout << endl << number << " = Three" << endl << endl;
		break;
	case 4:
		cout << endl << number << " = Four" << endl << endl;
		break;
	case 5:
		cout << endl << number << " = Five" << endl << endl;
		break;
	case 6:
		cout << endl << number << " = Six" << endl << endl;
		break;
	case 7:
		cout << endl << number << " = Seven" << endl << endl;
		break;
	case 8:
		cout << endl << number << " = Eight" << endl << endl;
		break;
	case 9:
		cout << endl << number << " = Nine" << endl << endl;
		break;
	}

}

void tens(int number) {

	int check = number;
	int remainder = number % 10;
	bool flag = true;
	number = number / 10;

	switch (check)
	{
	case 10:
		cout << endl << check << " = Ten" << endl << endl;
		flag = true;
		break;
	case 11:
		cout << endl << check << " = Eleven" << endl << endl;
		flag = true;
		break;
	case 12:
		cout << endl << check << " = Twelve" << endl << endl;
		flag = true;
		break;
	case 13:
		cout << endl << check << " = Thirteen" << endl << endl;
		flag = true;
		break;
	case 14:
		cout << endl << check << " = Fourteen" << endl << endl;
		flag = true;
		break;
	case 15:
		cout << endl << check << " = Fifteen" << endl << endl;
		flag = true;
		break;
	case 16:
		cout << endl << check << " = Sixteen" << endl << endl;
		flag = true;
		break;
	case 17:
		cout << endl << check << " = Seventeen" << endl << endl;
		flag = true;
		break;
	case 18:
		cout << endl << check << " = Eighteen" << endl << endl;
		flag = true;
		break;
	case 19:
		cout << endl << check << " = Nineteen" << endl << endl;
		flag = true;
		break;
	case 20:
		cout << endl << check << " = Twenty" << endl << endl;
		flag = true;
		break;
	case 30:
		cout << endl << check << " = Thirty" << endl << endl;
		flag = true;
		break;
	case 40:
		cout << endl << check << " = Forty" << endl << endl;
		flag = true;
		break;
	case 50:
		cout << endl << check << " = Fifty" << endl << endl;
		flag = true;
		break;
	case 60:
		cout << endl << check << " = Sixty" << endl << endl;
		flag = true;
		break;
	case 70:
		cout << endl << check << " = Seventy" << endl << endl;
		flag = true;
		break;
	case 80:
		cout << endl << check << " = Eighty" << endl << endl;
		flag = true;
		break;
	case 90:
		cout << endl << check << " = Ninety" << endl << endl;
		flag = true;
		break;
	}

	if (!flag) {

		switch (number)
		{
		case 2:
			cout << endl << check << " = Twenty ";
			break;
		case 3:
			cout << endl << check << " = Thirty ";
			break;
		case 4:
			cout << endl << check << " = Forty ";
			break;
		case 5:
			cout << endl << check << " = Fifty ";
			break;
		case 6:
			cout << endl << check << " = Sixty ";
			break;
		case 7:
			cout << endl << check << " = Seventy ";
			break;
		case 8:
			cout << endl << check << " = Eighty ";
			break;
		case 9:
			cout << endl << check << " = Ninety ";
			break;

		}

		switch (remainder)
		{
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";
			break;
		case 3:
			cout << "Three";
			break;
		case 4:
			cout << "Four";
			break;
		case 5:
			cout << "Five";
			break;
		case 6:
			cout << "Six";
			break;
		case 7:
			cout << "Seven";
			break;
		case 8:
			cout << "Eight";
			break;
		case 9:
			cout << "Nine";
			break;
		}

	}
}

void hundreds(int number) {

	int remainder = number % 100;
	number = number / 100;
	int check = (number * 100) + remainder;
	bool flag = false;

	if (remainder == 0) {

		switch (number)
		{
		case 1:
			cout << check << " = One Hundred";
			flag = true;
			break;
		case 2:
			cout << check << " = Two Hundred";
			flag = true;
			break;
		case 3:
			cout << check << " = Three Hundred";
			flag = true;
			break;
		case 4:
			cout << check << " = Four Hundred";
			flag = true;
			break;
		case 5:
			cout << check << " = Five Hundred";
			flag = true;
			break;
		case 6:
			cout << check << " = Six Hundred";
			flag = true;
			break;
		case 7:
			cout << check << " = Seven Hundred";
			flag = true;
			break;
		case 8:
			cout << check << " = Eight Hundred";
			flag = true;
			break;
		case 9:
			cout << check << " = Nine Hundred";
			flag = true;
			break;
		}

	}

	if (!flag) {

		flag = false;

		switch (number)
		{
		case 1:
			cout << endl << check << " = One Hundred and ";
			break;
		case 2:
			cout << endl << check << " = Two Hundred and ";
			break;
		case 3:
			cout << endl << check << " = Three Hundred and ";
			break;
		case 4:
			cout << endl << check << " = Four Hundred and ";
			break;
		case 5:
			cout << endl << check << " = Five Hundred and ";
			break;
		case 16:
			cout << endl << check << " = Six Hundred and ";
			break;
		case 7:
			cout << endl << check << " = Seven Hundred and ";
			break;
		case 8:
			cout << endl << check << " = Eight Hundred and ";
			break;
		case 9:
			cout << endl << check << " = Nine Hundred and ";
			break;
		}

		switch (remainder)
		{
		case 10:
			cout << "Ten";
			flag = true;
			break;
		case 11:
			cout << "Eleven";
			flag = true;
			break;
		case 12:
			cout << "Twelve";
			flag = true;
			break;
		case 13:
			cout << "Thirteen";
			flag = true;
			break;
		case 14:
			cout << "Fourteen";
			flag = true;
			break;
		case 15:
			cout << "Fifteen";
			flag = true;
			break;
		case 16:
			cout << "Sixteen";
			flag = true;
			break;
		case 17:
			cout << "Seventeen";
			flag = true;
			break;
		case 18:
			cout << "Eighteen";
			flag = true;
			break;
		case 19:
			cout << "Nineteen";
			flag = true;
			break;
		}

		if (remainder < 10) {
			flag = false;
			remainder = remainder % 10;
		}
		else if (remainder > 19 && remainder < 30) {
			cout << "Twenty ";
			flag = true;
		}
		else if (remainder > 29 && remainder < 40) {
			cout << "Thirty ";
			flag = true;
		}
		else if (remainder > 39 && remainder < 50) {
			cout << "Forty ";
			flag = true;
		}
		else if (remainder > 49 && remainder < 60) {
			cout << "Fifty ";
			flag = true;
		}
		else if (remainder > 59 && remainder < 70) {
			cout << "Sixty ";
			flag = true;
		}
		else if (remainder > 69 && remainder < 80) {
			cout << "Seventy ";
			flag = true;
		}
		else if (remainder > 79 && remainder < 90) {
			cout << "Eighty ";
			flag = true;
		}
		else if (remainder > 89 && remainder < 100) {
			cout << "Ninety ";
			flag = true;
		}

		if (!flag) {

			switch (remainder)
			{
			case 1:
				cout << "One";
				break;
			case 2:
				cout << "Two";
				break;
			case 3:
				cout << "Three";
				break;
			case 4:
				cout << "Four";
				break;
			case 5:
				cout << "Five";
				break;
			case 6:
				cout << "Six";
				break;
			case 7:
				cout << "Seven";
				break;
			case 8:
				cout << "Eight";
				break;
			case 9:
				cout << "Nine";
				break;

			}

		}
	}

}
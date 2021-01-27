#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool add(double number1 = 0.0, double number2 = 0.0);
bool subtract(double number1 = 0.0, double number2 = 0.0);
bool multiply(double number1 = 0.0, double number2 = 0.0);
bool divide(double number1 = 0.0, double number2 = 0.0);
bool power(double number1 = 0.0, double number2 = 0.0);
bool additionalCalculations(double& num);

int main()
{
	double number1{}, number2{};
	char choice{};
	bool holder{};

	do {

		cout << endl << endl << "\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4";

		cout << "\n\nEnter first number : ";
		cin >> number1;

		cout << "\nEnter second number : ";
		cin >> number2;
		do {

			cout << "\n\nPress 1 for addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for division\nPress 5 for exponent(power)\n\n";
			cout << "Enter your choice : ";
			cin >> choice;

		} while (choice < '1' || choice > '5');

		switch (choice) {

		case '1':
			holder = add(number1, number2);
			break;
		case '2':
			holder = subtract(number1, number2);
			break;
		case '3':
			holder = multiply(number1, number2);
			break;
		case '4':
			holder = divide(number1, number2);
			break;
		case '5':
			cout << "\nFirst number is raised to the power of second number\n\n";
			holder = power(number1, number2);
		}

	} while (holder);

	cout << endl << endl << "\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4/\4";

	cout << "\n\n\t\t\t\t\t\t\tBye!\n\n";

	return 0;
}


bool power(double number1, double number2) {

	char choice{};
	double power = pow(number1, number2);
	bool check{};

	cout << "\n\nAnswer of " << number1 << " ^ " << number2 << " = " << power << endl << endl;

	check = additionalCalculations(power);

	return check;
}

bool add(double number1, double number2) {

	char choice{};
	double sum = number1 + number2;
	bool check{};

	cout << "\n\nSum of " << number1 << " + " << number2 << " = " << sum << endl << endl;

	check = additionalCalculations(sum);

	return check;
}

bool subtract(double number1, double number2) {

	char choice{};
	double difference = number1 - number2;
	bool check{};

	cout << "\n\nDifference of " << number1 << " - " << number2 << " = " << difference << endl << endl;

	check = additionalCalculations(difference);

	return check;
}

bool multiply(double number1, double number2) {

	char choice{};
	double product = number1 * number2;
	bool check{};

	cout << "\n\nProduct of " << number1 << " * " << number2 << " = " << product << endl << endl;

	check = additionalCalculations(product);

	return check;
}

bool divide(double number1, double number2) {

	char choice{};
	double quotient = number1 / number2;
	bool check{};

	cout << "\n\nQuotient of " << number1 << " / " << number2 << " = " << quotient << endl << endl;

	check = additionalCalculations(quotient);

	return check;

}

bool additionalCalculations(double& num) {

	double number{};
	bool check = true;
	char choice = true;

	while (check) {

		do {

			cout << "\nPress 1 to add to this number\nPress 2 subtract from this number\nPress 3 to multiply to this number\nPress 4 to divide from this number\nPress 5 to start over\nPress 6 to exit\n\n";
			cout << "Enter your choice : ";
			cin >> choice;

		} while (choice < '1' || choice > '6');

		if (choice == '1') {
			cout << "\nEnter a number to add to " << num << " + ";
			cin >> number;
			num += number;
			cout << "\n\nNew answer = " << num << endl << endl;
		}
		else if (choice == '2') {
			cout << "\nEnter a number to subtract from " << num << " - ";
			cin >> number;
			num -= number;
			cout << "\n\nNew answer = " << num << endl << endl;
		}
		else if (choice == '3') {
			cout << "\nEnter a number to multiply with " << num << " x ";
			cin >> number;
			num *= number;
			cout << "\n\nNew answer = " << num << endl << endl;
		}
		else if (choice == '4') {
			cout << "\nEnter a number to divide from " << num << " / ";
			cin >> number;
			num /= number;
			cout << "\n\nNew answer = " << num << endl << endl;
		}
		else if (choice == '5') {
			check = true;
			return check;
		}
		else {
			check = false;
			return check;
		}

	}

}
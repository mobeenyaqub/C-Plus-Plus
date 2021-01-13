#include <iostream>
using namespace std;

int Find_Max_Divisors(int arr[], int size);


int main()
{
	int array[30];

	for (int i = 0; i < 30; i++) {
		cout << "Enter number at index [" << i << "] : ";
		cin >> array[i];
	}

	cout << "\nThis number has highest number of divisors : " << Find_Max_Divisors(array, 30) << endl;

	return 0;
}

int Find_Max_Divisors(int arr[], int size) {

	int divisor = 0, greatest = 0;

	int decider = 0;

	for (int i = 0; i < size; i++) {

		for (int j = 1; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				++divisor;
			}

		}


		if (divisor > decider) {
			decider = divisor;
			greatest = arr[i];
		}


		divisor = 0;

	}



	return greatest;

}

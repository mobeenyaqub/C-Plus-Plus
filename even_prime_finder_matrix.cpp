#include <iostream>
using namespace std;

int main()
{
	int matrix[5][5], even_count = 0, prime_count = 0, count = 0, num = 0;

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			cout << "Enter number in the index [" << i << "] [" << j << "] : ";
			cin >> matrix[i][j];
		}

	}


	cout << endl;

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\n\nRow ";

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			if (matrix[i][j] != 1 && matrix[i][j] != 0) {

				if (matrix[i][j] % 2 == 0)
				{
					even_count++;
				}

			}


		}

		if (even_count > 1)
		{
			cout << i << " ";
		}

		even_count = 0;
	}

	cout << " contains 2 or more even numbers" << endl << endl;


	cout << "Row ";

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			num = matrix[i][j];

			for (int k = 2; k < num; k++)
			{
				if (num % k == 0) {
					break;
				}
				else if (num == k + 1) {
					prime_count++;
					count++;
				}

			}
		}

		if (prime_count < 2)
		{
			cout << i << " ";
		}

		prime_count = 0;
	}

	cout << " has less than 2 prime numbers \n\n";


	if (count == 0) {
		cout << "No row found containing two prime numbers" << endl << endl;

	}

	system("pause");

	return 0;
}

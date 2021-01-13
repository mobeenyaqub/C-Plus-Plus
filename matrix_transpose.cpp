#include <iostream>
using namespace std;

int main()
{
	int matrix[4][4];



	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 4; j++)
		{
			cout << "Enter values at index [" << i << "] [" << j << "] : ";
			cin >> matrix[i][j];
		}

	}

	cout << "\nOriginal Matrix is : \n\n";
	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 4; j++)
		{

			cout << matrix[i][j] << " ";
		}

		cout << endl;

	}

	cout << "\nTransposed Matrix is : \n\n";

	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 4; j++)
		{
			cout << matrix[j][i] << " ";
		}

		cout << endl;
	}
	cout << endl;

	system("pause");

	return 0;
}

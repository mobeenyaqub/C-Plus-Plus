#include <iostream>
using namespace std;

void diamond(int&);

int main() {

	int n;

	cout << "Enter rows of the diamond : ";
	cin >> n;

	diamond(n);

	return 0;
}

void diamond(int& n) {

	int space = n - 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < space; j++) {
			cout << " ";
		}

		for (int k = 0; k <= i; k++) {
			cout << "* ";
		}

		cout << endl;
		space--;
	}

	space = 0;

	for (int i = n; i >= 0; i--)
	{
		for (int j = 0; j < space; j++) {
			cout << " ";
		}

		for (int k = 1; k < i; k++) {
			cout << " *";
		}

		cout << endl;
		space++;
	}

}

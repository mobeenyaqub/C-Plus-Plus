#include<iostream>
#include<string>
using namespace std;

struct studentType {
	string studentFirstName{};
	string studentLastName{};
	int testScore{};
	char grade{};
};

void studentData(studentType arr[], int size);
void gradeAssign(studentType arr[], int size);
int highestscorefinder(studentType arr[], int size);
void highestscoreprinter(studentType arr[], int size, int);

int main()
{
	studentType arr[20]{};
	int highestScore = 0;


	studentData(arr, 20);

	gradeAssign(arr, 20);

	highestScore = highestscorefinder(arr, 20);

	highestscoreprinter(arr, 20, highestScore);

	return 0;
}

void studentData(studentType arr[], int size) {

	for (int i = 0; i < size; i++) {
		cout << "Enter your first name student [" << i + 1 << "] : ";
		cin >> arr[i].studentFirstName;

		cout << "Enter your last name : ";
		cin >> arr[i].studentLastName;

		do {
			cout << "Enter your test score : ";
			cin >> arr[i].testScore;
		} while (arr[i].testScore < 0 || arr[i].testScore > 100);

		cout << endl;
	}

}

void gradeAssign(studentType arr[], int size) {

	for (int i = 0; i < size; i++) {

		if (arr[i].testScore >= 80) {
			arr[i].grade = 'A';
		}
		else if (arr[i].testScore >= 70) {
			arr[i].grade = 'B';
		}
		else if (arr[i].testScore >= 60) {
			arr[i].grade = 'C';
		}
		else if (arr[i].testScore >= 50) {
			arr[i].grade = 'D';
		}
		else {
			arr[i].grade = 'F';
		}

	}

}

int highestscorefinder(studentType arr[], int size) {

	int highest = 0;

	for (int i = 0; i < size; i++) {
		int score = arr[i].testScore;


		if (highest < score) {
			highest = score;
		}

	}

	return highest;

}

void highestscoreprinter(studentType arr[], int size, int highestScore) {

	cout << "\n\nThe highest scorer is : \n\n";

	for (int i = 0; i < size; i++) {

		if (arr[i].testScore == highestScore) {
			cout << "Name : " << arr[i].studentFirstName << " " << arr[i].studentLastName << endl;
			cout << "Marks : " << arr[i].testScore << " (" << arr[i].grade << ")" << endl;
		}

	}

	cout << "\n\n\nRegular scorers are : \n\n";

	for (int i = 0; i < size; i++) {

		if (arr[i].testScore != highestScore) {
			cout << "Name : " << arr[i].studentFirstName << " " << arr[i].studentLastName << endl;
			cout << "Marks : " << arr[i].testScore << " (" << arr[i].grade << ")" << endl;
		}

	}
}

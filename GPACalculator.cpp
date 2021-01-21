#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void markSheet();
void gradeChecker(string gradeObtained, double& finalGPA, double creditHours);

int main()
{
	double finalGPA{ 0.00 };
	int totalCourses{ 0 }, counter{ 1 }, creditHours{ 0 }, totalCreditHours{ 0 };
	string gradeObtained{}, courseName{};
	char choice{ 'a' };

	do {

		cout << "\t\t\t\t\t\tWelcome to CGPA calculator\n\n";
		cout << "\nEnter the total number of courses you're studying : ";
		cin >> totalCourses;

		markSheet();

		while (totalCourses > 0) {

			cout << "\n\n\rEnter the name of course " << counter << " : ";
			cin.ignore();
			getline(cin, courseName);

			cout << "\n\n\rEnter credit hours of course " << counter << " : ";
			cin >> creditHours;

			cout << "\n\n\rEnter the grade you obtained in course " << counter << " : ";
			cin >> gradeObtained;

			gradeChecker(gradeObtained, finalGPA, creditHours);

			totalCreditHours += creditHours;

			totalCourses--;

			counter++;

		}

		cout << "\n\n\t\t\t\t\t\tYour total CGPA = " << fixed << setprecision(2) << (finalGPA / totalCreditHours) << endl;

		cout << "\n\nWould you like to start over?\n\nPress any key to start over or press \"n\" or \"N\" to exit" << endl << endl;
		cin >> choice;

		finalGPA = 0;
		gradeObtained.clear();
		courseName.clear();
		counter = 1;
		totalCreditHours = 0;

	} while ((choice != 'N') && (choice != 'n'));

	cout << "\n\n\t\t\t\t\t\t\t\tBye!" << endl << endl;

	system("pause");
	return 0;
}

void markSheet() {

	cout << "\n\t\t\t\tMarks/Percentage      Grade\t    Grade Points\n\n";
	cout << "\t\t\t\t   86 - 100%\t\tA\t\t4.00" << endl;
	cout << "\t\t\t\t   82 - 85%\t\tA-\t\t3.67" << endl;
	cout << "\t\t\t\t   78 - 81%\t\tB+\t\t3.33" << endl;
	cout << "\t\t\t\t   74 - 77%\t\tB\t\t3.00" << endl;
	cout << "\t\t\t\t   70 - 73%\t\tB-\t\t2.67" << endl;
	cout << "\t\t\t\t   66 - 69%\t\tC+\t\t2.33" << endl;
	cout << "\t\t\t\t   62 - 65%\t\tC\t\t2.00" << endl;
	cout << "\t\t\t\t   58 - 61%\t\tC-\t\t1.67" << endl;
	cout << "\t\t\t\t   54 - 57%\t\tD+\t\t1.33" << endl;
	cout << "\t\t\t\t   50 - 53%\t\tD\t\t1.00" << endl;
	cout << "\t\t\t\t   Below 50%\t\tF\t\t0.00" << endl;

}

void gradeChecker(string gradeObtained, double& finalGPA, double creditHours) {


	if (gradeObtained.substr(0, 1) == "A" && gradeObtained.substr(1, 1) == "-" || gradeObtained.substr(0, 1) == "a" && gradeObtained.substr(1, 1) == "-") {
		finalGPA += (3.67 * creditHours);
	}
	else if (gradeObtained.substr(0, 2) == "B+" || gradeObtained.substr(0, 2) == "b+") {
		finalGPA += (3.33 * creditHours);
	}
	else if (gradeObtained.substr(0, 2) == "B-" || gradeObtained.substr(0, 2) == "b-") {
		finalGPA += (2.67 * creditHours);
	}
	else if (gradeObtained.substr(0, 2) == "C+" || gradeObtained.substr(0, 2) == "c+") {
		finalGPA += (2.33 * creditHours);
	}
	else if (gradeObtained.substr(0, 2) == "C-" || gradeObtained.substr(0, 2) == "c-") {
		finalGPA += (1.67 * creditHours);
	}
	else if (gradeObtained.substr(0, 2) == "D+" || gradeObtained.substr(0, 2) == "d+") {
		finalGPA += (1.33 * creditHours);
	}
	else if (gradeObtained.substr(0, 1) == "A" || gradeObtained.substr(0, 1) == "a") {
		finalGPA += (4 * creditHours);
	}
	else if (gradeObtained.substr(0, 1) == "B" || gradeObtained.substr(0, 1) == "b") {
		finalGPA += (3.00 * creditHours);
	}
	else if (gradeObtained.substr(0, 1) == "C" || gradeObtained.substr(0, 1) == "c") {
		finalGPA += (2.00 * creditHours);
	}
	else if (gradeObtained.substr(0, 1) == "D" || gradeObtained.substr(0, 1) == "d") {
		finalGPA += (1.00 * creditHours);
	}
	else if (gradeObtained.substr(0, 1) == "F" || gradeObtained.substr(0, 1) == "f") {
		finalGPA += (0.00 * creditHours);
	}
	else {
		cout << "Invalid grade entered" << endl;
	}


}

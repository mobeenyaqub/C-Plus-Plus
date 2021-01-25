#include<iostream>
#include <string>
#include <ctime>
using namespace std;

void ChangePwd(int jewelBoxes[6], string password[6], int boxCount);

int main() {

    srand(time(0));

    int jewelBoxes[6]{ 1,2,3,4,5,6 };
    string password[6]{ "abc","def","ghi","jkl","mno","pqr" };
    string passcode{};
    int rollDie = rand() % 6 + 1;
    bool check = false;
    char repeat{ '0' };

    while (repeat != '1') {

        cout << "\nBox number " << rollDie << " has been unlocked" << endl << endl;

        cout << "Box Number\tPassword\n";
        cout << "1\t   - \t" << password[0] << endl;
        cout << "2\t   - \t" << password[1] << endl;
        cout << "3\t   - \t"<< password[2] << endl;
        cout << "4\t   - \t" << password[3] << endl;
        cout << "5\t   - \t" << password[4] << endl;
        cout << "6\t   - \t" << password[5] << endl;

   
        do {

            check = false;

            if (rollDie == 1) {

                cout << "\nEnter password for box 1 : ";
                cin >> passcode;
                if (passcode == password[0]) {
                    check = true;
                    ChangePwd(jewelBoxes, password, 1);
                }
                else {
                    cout << "Incorrect password entered. Try again\n\n";
                }

            }
            else if (rollDie == 2) {

                cout << "\nEnter password for box 2 : ";
                cin >> passcode;
                if (passcode == password[1]) {
                    check = true;
                    ChangePwd(jewelBoxes, password, 2);
                }
                else {
                    cout << "Incorrect password entered. Try again\n\n";
                }

            }
            else if (rollDie == 3) {

                cout << "\nEnter password for box 3 : ";
                cin >> passcode;
                if (passcode == password[2]) {
                    check = true;
                    ChangePwd(jewelBoxes, password, 3);

                }
                else {
                    cout << "Incorrect password entered. Try again\n\n";
                }

            }
            else if (rollDie == 4) {

                cout << "\nEnter password for box 4 : ";
                cin >> passcode;
                if (passcode == password[3]) {
                    check = true;
                    ChangePwd(jewelBoxes, password, 4);
                }
                else {
                    cout << "Incorrect password entered. Try again\n\n";
                }

            }
            else if (rollDie == 5) {

                cout << "\nEnter password for box 5 : ";
                cin >> passcode;
                if (passcode == password[4]) {
                    check = true;
                    ChangePwd(jewelBoxes, password, 5);
                }
                else {
                    cout << "Incorrect password entered. Try again\n\n";
                }
            }
            else if (rollDie == 6) {

                cout << "\nEnter password for box 6 : ";
                cin >> passcode;
                if (passcode == password[5]) {
                    check = true;
                    ChangePwd(jewelBoxes, password, 6);
                }
                else {
                    cout << "Incorrect password entered. Try again\n\n";
                }

            }

           

        } while (!check);

        rollDie = rand() % 6 + 1;

        cout << "\nWill you like to continue?" << endl;
        cout << "\nPress 1 to exit or press anyother key to continue the loop\n" << endl;
        cin >> repeat;


    }


    return 0;
}

void ChangePwd(int jewelBoxes[6], string password[6], int boxCount) {

    static int b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, b6 = 0;

    if (boxCount == 1) {

        cout << "\nEnter new password for box " << boxCount << " : ";
        cin >> password[0];

        cout << "\nPassword changed for box " << boxCount << endl;
        b1++;

        cout << "\nPassword for box " << boxCount << " has been changed " << b1 << " times" << endl;
    }
    else  if (boxCount == 2) {

        cout << "\nEnter new password for box " << boxCount << " : ";
        cin >> password[1];

        cout << "\nPassword changed for box " << boxCount << endl;
        b2++;

        cout << "\nPassword for box " << boxCount << " has been changed " << b2 << " times" << endl;

    }
    else  if (boxCount == 3) {

        cout << "\nEnter new password for box " << boxCount << " : ";
        cin >> password[2];

        cout << "\nPassword changed for box " << boxCount << endl;
        b3++;

        cout << "\nPassword for box " << boxCount << " has been changed " << b3 << " times" << endl;

    }
    else  if (boxCount == 4) {

        cout << "\nEnter new password for box " << boxCount << " : ";
        cin >> password[3];

        cout << "\nPassword changed for box " << boxCount << endl;
        b4++;

        cout << "\nPassword for box " << boxCount << " has been changed " << b4 << " times" << endl;

    }
    else  if (boxCount == 5) {

        cout << "\nEnter new password for box " << boxCount << " : ";
        cin >> password[4];

        cout << "\nPassword changed for box " << boxCount << endl;
        b5++;

        cout << "\nPassword for box " << boxCount << " has been changed " << b5 << " times" << endl;

    }
    else  if (boxCount == 6) {

        cout << "\nEnter new password for box " << boxCount << " : ";
        cin >> password[5];

        cout << "\nPassword changed for box " << boxCount << endl;
        b6++;

        cout << "\nPassword for box " << boxCount << " has been changed " << b6 << " times" << endl;

    }

}
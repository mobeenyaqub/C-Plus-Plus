#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

void game_position(char game[3][3],char count) {

    cout << "\t\t\t\t\t\tPlayer 1 : \"X\"\n\n\t\t\t\t\t\tPlayer 2 : \"O\" " << endl << endl;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            game[i][j] = count;
            count++;
        }

    }

    cout << "\n\t\t\t\tPositioning : \n";

    for (int i = 0; i < 3; i++) {
        cout << "\t\t\t\t\t\t ";
        for (int j = 0; j < 3; j++) {

            cout << game[i][j] << "    ";
        }
        cout << endl << endl;
    }

}
void random_player_decider(string enter, int &player_chooser) {

    cout << "Press enter to decide randomly whom to start with : ";
    getline(cin, enter);

    if (rand() % 2 == 0) {
        cout << "\n\t\t\t\t\t\tPlayer 1 turn" << endl << endl;
        player_chooser = 2;
    }
    else {
        cout << "\n\t\t\t\t\t\tPlayer 2 turn" << endl << endl;
        player_chooser = 3;
    }

}
void position_entry(int &position, vector<int> &position_check) {

    bool decision = false;

    do {

        do {

            cout << "\rEnter position of your turn : ";
            cin >> position;

        } while (position < 1 || position > 9);

        for (int i = 0; i < position_check.size(); i++) {

            if (position == position_check.at(i)) {
                decision = false;
                cout << "\t\t\t\t\t\t\"Position already reserved.Try again!\"" << endl;
                break;
            }
            else {
                decision = true;
            }

        }

        position_check.push_back(position);

    } while (!decision);

}
void position_decider(char game[3][3],int &player_chooser,int position) {

    switch (position)
    {
    case 1:

        if (player_chooser % 2 == 0) {
            game[0][0] = 'X';
        }
        else {
            game[0][0] = 'O';
        }

        player_chooser++;

        break;

    case 2:

        if (player_chooser % 2 == 0) {
            game[0][1] = 'X';
        }
        else {
            game[0][1] = 'O';
        }

        player_chooser++;

        break;

    case 3:

        if (player_chooser % 2 == 0) {
            game[0][2] = 'X';
        }
        else {
            game[0][2] = 'O';
        }

        player_chooser++;

        break;

    case 4:

        if (player_chooser % 2 == 0) {
            game[1][0] = 'X';
        }
        else {
            game[1][0] = 'O';
        }

        player_chooser++;

        break;

    case 5:

        if (player_chooser % 2 == 0) {
            game[1][1] = 'X';
        }
        else {
            game[1][1] = 'O';
        }

        player_chooser++;

        break;

    case 6:

        if (player_chooser % 2 == 0) {
            game[1][2] = 'X';
        }
        else {
            game[1][2] = 'O';
        }

        player_chooser++;

        break;

    case 7:

        if (player_chooser % 2 == 0) {
            game[2][0] = 'X';
        }
        else {
            game[2][0] = 'O';
        }

        player_chooser++;

        break;

    case 8:

        if (player_chooser % 2 == 0) {
            game[2][1] = 'X';
        }
        else {
            game[2][1] = 'O';
        }

        player_chooser++;

        break;

    default:

        if (player_chooser % 2 == 0) {
            game[2][2] = 'X';
        }
        else {
            game[2][2] = 'O';
        }

        player_chooser++;

        break;
    }

}
void amended_position(char game[3][3]) {

    for (int i = 0; i < 3; i++) {
        cout << "\t\t\t\t\t\t ";
        for (int j = 0; j < 3; j++) {

            cout << game[i][j] << "    ";
        }
        cout << endl << endl;
    }

}
void player_change_indicator(int &player_chooser,int check) {

    if (check < 8) {

        if (player_chooser % 2 == 0) {
            cout << "\n\n\t\t\t\t\t\tPlayer 1 turn\n\n";
        }
        else {
            cout << "\n\n\t\t\t\t\t\tPlayer 2 turn\n\n";
        }

    }
    
}
bool winner_decider(char game[3][3],int check) {

    bool checking = false;

    if (check > 1) {

        //Player 1 decider
        if ((game[0][0] == 'X') & (game[0][1] == 'X') && (game[0][2] == 'X')) {
            cout << "\n\n\t\t\t\t******Player 1 wins. Congratulations ******" << endl << endl;
            checking = true;
        }
        else if ((game[1][0] == 'X') & (game[1][1] == 'X') && (game[1][2] == 'X')) {
            cout << "\n\n\t\t\t\t******Player 1 wins. Congratulations ******" << endl << endl;
            checking = true;
        }
        else if ((game[2][0] == 'X') & (game[2][1] == 'X') && (game[2][2] == 'X')) {
            cout << "\n\n\t\t\t\t******Player 1 wins. Congratulations ******" << endl << endl;
            checking = true;
        }
        else if ((game[0][0] == 'X') & (game[1][1] == 'X') && (game[2][2] == 'X')) {
            cout << "\n\n\t\t\t\t******Player 1 wins. Congratulations ******" << endl << endl;
            checking = true;
        }
        else if ((game[0][2] == 'X') & (game[1][1] == 'X') && (game[2][0] == 'X')) {
            cout << "\n\n\t\t\t\t******Player 1 wins. Congratulations ******" << endl << endl;
            checking = true;
        }
        else if ((game[0][1] == 'X') & (game[1][1] == 'X') && (game[2][1] == 'X')) {
            cout << "\n\n\t\t\t\t******Player 1 wins. Congratulations ******" << endl << endl;
            checking = true;
        }
        //Player 2 decider
        else if ((game[0][0] == 'O') & (game[0][1] == 'O') && (game[0][2] == 'O')) {
            cout << "\n\n\t\t\t\t******Player 2 wins. Congratulations ******" << endl << endl;
            checking = true;
        }
        else if ((game[1][0] == 'O') & (game[1][1] == 'O') && (game[1][2] == 'O')) {
            cout << "\n\n\t\t\t\t******Player 2 wins. Congratulations ******" << endl << endl;
            checking = true;
        }
        else if ((game[2][0] == 'O') & (game[2][1] == 'O') && (game[2][2] == 'O')) {
            cout << "\n\n\t\t\t\t******Player 2 wins. Congratulations ******" << endl << endl;
            checking = true;
        }
        else if ((game[0][0] == 'O') & (game[1][1] == 'O') && (game[2][2] == 'O')) {
            cout << "\n\n\t\t\t\t******Player 2 wins. Congratulations ******" << endl << endl;
            checking = true;
        }
        else if ((game[0][2] == 'O') & (game[1][1] == 'O') && (game[2][0] == 'O')) {
            cout << "\n\n\t\t\t\t******Player 2 wins. Congratulations ******" << endl << endl;
            checking = true;
        }
        else if ((game[0][1] == 'O') & (game[1][1] == 'O') && (game[2][1] == 'O')) {
            cout << "\n\n\t\t\t\t******Player 2 wins. Congratulations ******" << endl << endl;
            checking = true;
        }

    }

    if ((check == 8) && (!checking)) {
   
     cout << "\n\n\t\t\t\t\t******It's a draw. Try again ******" << endl << endl;

    }

    return checking;
}


int main() {
    
    srand(time(0));

    string enter;
    char game[3][3]{}, count = 49;
    int player_chooser{}, position{};
    int check = 0;
    vector <int> position_check{ 0 };
    bool checker{};
    game_position(game,count);

    random_player_decider(enter,player_chooser);

    do {

        position_entry(position,position_check);

        position_decider(game, player_chooser, position);

        amended_position(game);

        player_change_indicator(player_chooser,check);

        checker = winner_decider(game, check);

        if (checker) {
            break;
        }
        
        check++;

    } while (check < 9);
    
    
    return 0;
}
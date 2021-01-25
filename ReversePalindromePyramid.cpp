#include <iostream>
using namespace std;

int main()
{
    int n{ 6 }, space = n - 1, count = 5;
    int checker = 5;

    for (int i = n ; i > 0; i--)
    {
        for (int j = 0; j < space; j++)
            cout << " ";

        for (int j = 0; j <= i ; j++) {
            if( count > 0)
            cout << count;
          
            count--;
        }
       
        for (int j = 0; j <= i + 1; j++) {
            if (count > 0)
            cout << count;

            count++;
        }

        checker--;
        count = checker;
        
        cout << endl;
        space++;
    }


    return 0;
}



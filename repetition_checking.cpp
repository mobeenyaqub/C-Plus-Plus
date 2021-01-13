#include<iostream>
using namespace std;

int main() {

	int index[17]{ 1,2,3,4,5,4,3,2,1,1,2,4,6,7,9,8,9 };
	int count = 0,z=0;
	
	for (int i = 0; i < 17 ; i++) {
		
		for(int j=0;j<17;j++)
		{
			if (index[z] == index[j]) {
				count++;
			}
		}
		cout << index[i] << " is present "<<count<<" times" << endl;
		count = 0;
		z++;
	}

	
	
	

	return 0;
}
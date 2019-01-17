#include <iostream>
using namespace std;

int main() {
	
	int num[5];
	cout << "Enter 5 integers: ";
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
	int* ptr = num;
	for(int i = 0;i < 5;i++){
	cout << *ptr << endl;	
	ptr++;
	}
	return 0;
}


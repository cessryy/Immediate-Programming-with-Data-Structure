#include <iostream>

using namespace std;

int main () {
	int num [10];
		cout << "Input 10 numbers:\n";
		for (int i=0; i<10; i++) {
			cin >> num[i];
	}
		cout << endl;
		cout << "Your input in reverse order:\n";
		for (int j=9; j>=0; j--) {
			cout << num[j] << endl;
		}
return 0;
}


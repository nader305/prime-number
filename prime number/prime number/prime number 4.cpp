#include<iostream>
using namespace std;
int getPrime(int x) {
	int s = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0)
			s++;
	}
	return s;
}
int main() {
	int range;
	cout << "Enter range:\n";
	cin >> range;
	cout << "==========\n";
	for (int i = 1; i <= range; i++) {
		if (getPrime(i) == 2)
			cout << i << endl;
	}
	return 0;
}
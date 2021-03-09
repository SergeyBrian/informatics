#include <iostream>
using namespace std;

bool isPowerOf2(double num) {
	if (num==1) return 1;
	if (!num%1) return 0;
	if (num<=0) return 0;
	isPowerOf2(num/2);
}

int main () {
	double num;
	cout << "Enter number: ";
	cin >> num;
	cout << (isPowerOf2(num)?"This number is power of 2":
			"This number is not power of 2") << endl;
	return 0;
}

#include <iostream>
#include "palindrom.h"
using namespace std;

int main() {
	long int num;
	cout << "Enter number: ";
	cin >> num;
	cout << ((isPalindrom(num)) ? "This number is a Palindrom" :
		       "This number is not a Palindrom") << endl;
	return 0;
}

#include <iostream>
#include "euclid.h"

using namespace std;

int main () {
	int a,b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << endl << "Greatest common divisor: " << NOD(a,b);
	return 0;
}

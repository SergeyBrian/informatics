#include <iostream>
#include <cmath>

using namespace std;

// x^3-2x-3=0
// 1 <= x <= 2

double f(double x) {
	return pow(x, 3) - 2*x - 3;
}


int main () {
	int method;
	double accuracy;
	double a = 1.0, b = 2.0, c;
	cout << "Enter method (1 - Half division, 2 - Hords, 3 - Tangents): ";
	cin >> method;
	cout << "Enter accuracy: ";
	cin >> accuracy;
	switch (method) {
		case 1:
			cout << "Calculating..." << endl;
			while (b - a > accuracy) {
				c = (a+b)/2;
				if (f(b)*f(c)<0) a = c;
				else b = c;
			}
			cout << (a + b) / 2;
			cout << endl << f((a+b)/2);
			break;
		case 2:

			break;
		case 3:
			break;
	}
	cout << endl;
	return 0;
}

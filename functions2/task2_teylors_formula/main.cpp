#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;


double deg2rad(double deg) {
	return (deg*M_PI/180);
}

int factorial (int n) {
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

double teylor(double a, int n) {
	if (n == 1) return a;
	double ns = (pow(-1,n)*(pow(a,2*n+1))/factorial(2*n+1));
	cout << ns << endl;
	return ns + teylor(a,n-1);
}

int main() {
	int accuracy;
	double angle;
	cout << "Enter angle in degrees: ";
	cin >> angle;
	angle = deg2rad(angle);
	cout << "Enter accuracy: ";
	cin >> accuracy;
	cout << "sin(" << angle << ") = " << teylor(angle, accuracy);
	cout << endl;
	cout << "Real value: " << sin(angle) << endl;
	return 0;
}

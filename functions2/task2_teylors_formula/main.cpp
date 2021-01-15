#include <iostream>
#include <cmath>

using namespace std;

int factorial (int n)
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;

double getSin(double a, int n) {
	if (pow(-1,n)*(pow(a,2*n+1))/factorial(2*n+1)==a)
		return 1;
	return getSin(a, n-1);
}

int main() {
	int accuracy;
	double angle;
	cout << "Enter angle in radians: ";
	cin >> angle;
	cout << "Enter accuracy: ";
	cin >> accuracy;
	cout << "sin(" << angle << ") = " << getSin(angle, accuracy);
	cout << endl;
	return 0;
}

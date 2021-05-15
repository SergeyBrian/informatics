#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int l;
vector<double> C;

void sum (vector<double> A, vector<double> B, int n, int k) {
	while (A.size() != B.size()) {
		A.size() > B.size() ? B.push_back(0) : A.push_back(0);
	}
	
	l = max(n, k);
	for (int i = 0; i < max(n, k) + 1; i ++) {
		C.push_back(A[i] + B[i]);
	}

}

void calculate(vector<double> Arr, int power, int xmin, int xmax) {
	double result = 0;
	for (int i = xmin; i <= xmax; i++) {
		result = 0;
		for (int j = 0; j <= power; j++) {
			result += Arr[j]*pow(i, j);
		}
		cout << endl << result;
	}
}

void print(vector<double> Arr, int power) {
	for (int i = 0; i < power + 1; i ++) {
		if (i!=0) cout << "+";
		cout << Arr[i] << "x^" << i;
	}

	cout << endl << endl;
}	

int main () {
	cout << "Вариант 4" << endl;
	int n, k, xmin, xmax;
	cout << "Введите степень n: ";
	cin >> n;
	cout << "Введите степень k: ";
	cin >> k;
	cout << "Введите элементы массива А: " << endl;
	vector<double> A, B;
	for (int i = 0; i < n + 1; i++) {
		double el;
		cout << "A" << i << ": ";
		cin >> el;
		A.push_back(el);
	}

	for (int i = 0; i < k + 1; i ++) {
		double el;
		cout << "B" << i << ": ";
		cin >> el;
		B.push_back(el);
	}

	cout << "Xmin: ";
	cin >> xmin;
	cout << "Xmax: ";
	cin >> xmax;
	
	print(A, n);
	print(B, k);
	sum(A, B, n, k);
	print(C, l);
	calculate(C, l, xmin, xmax);

	cout << endl;
	return 0;
}

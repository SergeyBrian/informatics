#include <iostream>
using namespace std;

int NOD (int a, int b) {
	return b ? NOD (b, a % b) : a;
}


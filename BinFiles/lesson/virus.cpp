#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
	FILE * f = fopen("bin.dat", "wb");
	fclose(f);
	remove("bin.dat");
	return 0;
}

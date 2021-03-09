#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
	int a[5] = {1,2,3,4,5};
	int t = 9;
	FILE * f = fopen("bin.dat", "wb");

	fwrite(&t, sizeof(int), 4, f);

	fclose(f);

	return 0;
}

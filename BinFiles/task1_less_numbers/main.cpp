#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
	int n, count = 0;
	int arr [10];
	int arr1 [10];
	FILE * f;
	cout << "Enter number: ";
	cin >> n;
	f = fopen("data.dat", "wb+");
	int t;
	for (int i = 0; i < 10; i ++) {
		arr[i] = rand() % 10;
	}
	fwrite(arr, sizeof(int), 10, f);
	fseek(f, 0, SEEK_SET);
	
	while (true) {
		fread(&t, sizeof(int), 1, f);
		if (feof(f)) break;
		cout << t << "\t";
		if (t < n) {
			arr1[count];
			count ++;
		}
	}

	for (int i = 0; i < count; i ++) {
		arr[5 + count] = arr1[count];
		
	}
	cout << endl;

	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int & getMiddle(int arr[][10])
{
	int sum = 0;
	int ri, rj;
	for (int i = 0; i < 10; i ++)
		for (int j = 0; j < 10; j ++)
			sum += arr[i][j];
	double middle = sum/100;
	double diff = 200;
	cout << "Average: " << middle << endl;

	for (int i = 0; i < 10; i ++)
		for (int j = 0; j < 10; j ++)
			if (abs(middle - arr[i][j]) < diff)
				diff = abs(middle - arr[i][j]), ri = i, rj = j;
	int &ref = arr[ri][rj];
	return ref;

}

int main () {
	srand(time(0));
	int arr[10][10];
	for (int i = 0; i < 10; i ++)
	{
		for (int j = 0; j < 10; j ++)
		{
			int random = rand()%101;
			arr[i][j] = random;
			cout << random << "\t";
		}
		cout << "\n";
	}
	int &res = getMiddle(arr);
	cout << endl << res;
	cout << endl << &res;
	return 0;
}


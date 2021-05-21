#include <iostream>
#include <vector>

using namespace std;

int main () {
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	vector<int> v(a,a+10);

	vector<int>::iterator it;

	for(it = v.begin(); it!=v.end(); it++)
		cout << *it << "\t";

	cout << endl;

	return 0;
}

#include <iostream>
#include <set>

using namespace std;

int main () {
	set<int> s;
	set<int>::iterator it;
	int t;

	for (int i = 0; i < 10; i++) {
		cin >> t;
		auto r = s.insert(t);
		if (!r.second)
			cout << "Error!" << endl;
	}
	cout << "===\n";
	for (it = s.begin();it!=s.end();it++)
		cout << *it << endl;

	return 0;
}

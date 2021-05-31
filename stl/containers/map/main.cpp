#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;

int main () {
	map<string, int> m;
	map<string, int>::iterator it;

	ifstream file("file.txt");
	string S[4] = {"Mother", "Father", "Sister", "Brother"};
	int I[4] = {37,42,16,22};

	for (int i = 0; i < 4; i ++)
		m.insert(pair<string, int>(S[i], I[i]));

	/*m["Mother"] = 37;
	m["Father"] = 42;
	m["Sister"] = 16;
	m["Brother"] = 22;
	*/

	for (it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " " << (*it).second << "\t";
	}

	cout << endl;

	return 0;
}

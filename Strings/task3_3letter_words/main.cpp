#include <iostream>
#include <string>

using namespace std;

int main () {
	string str;
	cout << "Enter a string with a dot in last position: ";
	getline(cin, str);
	int words[100];
	int len = 0;
	for (int i = 0; i < str.length(); i ++) {
		if (str[i] == ' ' || str[i] == '.') {
			if (len == 3) {
				cout << str[i-3] << str[i-2];
				cout << str[i-1] << endl;
		}
			len = 0;
		} else {
			len ++;
		}
	}
	return 0;
}

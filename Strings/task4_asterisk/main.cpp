#include <iostream>
#include <string>

using namespace std;

int main () {
	string str, str1;
	cout << "Enter a line: ";
	getline(cin, str);
	for (int i = 0; i < str.length(); i ++) {
		if (str[i] != '*') {
			str1 += str[i];
			str1 += str[i];
		}
	}
	cout << str1 << endl;
	return 0;
}

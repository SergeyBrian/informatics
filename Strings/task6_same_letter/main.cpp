#include <iostream>
#include <string>

using namespace std;

int main () {
	string str;
	cout << "Enter string: ";
	getline(cin,str);
	str = "&" + str;
	int letters[100];
	for (int i = 0; i < str.length(); i ++) {
		if (str[i] == '&' || str[i] == ' ') {
			
		}
	}

	return 0;
}

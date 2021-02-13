#include <iostream>
#include <string>

using namespace std;

int main () {
	string str;
	cout << "Enter string: ";
	getline(cin,str);
	str = "&" + str;
	char letters[100];
	for (int i = 0; i < str.length(); i ++) {
		if (str[i] == '&' || str[i] == ' ') {
			for (int j = 0; j < 100; j ++) {
				if (letters[j] == str[i+1]) break;
				if (!letters[j]) {
					letters[j] = str[i+1];
					break;
				}
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < str.length(); j++) {
			if ((str[j]=='&' || str[j]==' ') && 
					str[j+1]==letters[i]) {
				for (int k = j+1; k < str.length(); k++) {
					cout << str[k];
				}
				cout << endl;
			}
		}
		
		if (!letters[i]) break;
	}
	return 0;
}

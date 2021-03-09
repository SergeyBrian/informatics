#include <iostream>
#include <string>

using namespace std;

int main () {
	string str;
	cout << "Enter string: ";
	getline(cin,str);
	bool inBrackets = false;
	for (int i = 0; i < str.length(); i ++) {
		if (inBrackets && str[i] != ')') cout << str[i];
		inBrackets = ((!inBrackets && str[i] == '(') || 
				(inBrackets && str[i] != ')'));
	}	
	cout << endl;
	return 0;
}

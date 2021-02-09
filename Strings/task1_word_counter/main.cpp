#include <iostream>
#include <string>

using namespace std;

int main () {
	string str;
	cout << "Enter string: ";
	getline(cin, str);
	int i = 0;
	int letters =1;
	
	while (str[i] != '.') {
		letters += int((str[i]!='-') && (str[i+1]==' '));
		
	
		i++;
	}

	cout << str;
	cout << endl << letters << " words in string" << endl;
	return 0;
}

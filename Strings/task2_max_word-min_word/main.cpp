#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	str[str.length()-1]='&';
	int min = 9999, max = 0;
	int len = 0;
	for (int i = 0; i < str.length(); i ++) {
		if (str[i] == ' ' || str[i] == '&') {
			len += int(str[i] == '&');
			if (len < min) min = len;
			if (len > max) max = len;
			//cout << endl << "len: " << len;
			len = 0;
		} else {
			//cout << endl << len;
			len ++;
		}
	}
	cout << endl << "Max length: " << max << endl;
       	cout << "Min length: " << min << endl;
	return 0;
}

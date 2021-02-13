#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
	int a = 5, b = 17, c;
	string s = "Text text text";
	ifstream iF;
	ofstream oF;
	fstream F;

	F.open("file.txt", ios::out);

	F << s;

	F.close();

	return 0;
}

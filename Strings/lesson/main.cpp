#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
	string str;
	ofstream f;
	f.open("./file");
	
	getline(cin, str);
	f << str << endl;

	// str.insert - Вставить в строку
	// str.erase - Удалить из строки
	// str.substr - Выделить часть строки	
	

	//cout << str << endl;
	return 0;
}

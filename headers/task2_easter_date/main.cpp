#include <iostream>
#include <iomanip>
#include "easterdate.h"

using namespace std;

int main () {
	int year, date, month;
	bool isCatholic;
	cout << "Enter year: ";
	cin >> year;
	cout << "Use catholic? [0 or 1]: ";
	cin >> isCatholic;
	date = getDate(year, isCatholic);
	month = date%100;
	date -= month;
	date /=100;
	cout << "Easter date: " << setfill('0') << setw(2) << date << "." << setfill('0') << setw(2) << month;	
}

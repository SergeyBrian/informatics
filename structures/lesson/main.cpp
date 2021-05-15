#include <iostream>
#include <string>

using namespace std;


struct date {
	int year;
	string month;
};

struct building
{
	string owner;
	string city;
	int amountOfRooms;
	double price;
	date built;
};


void show(building object) {
	cout << object.owner << endl;
}


int main() {
	building Amount1;
	
	Amount1.owner = "Daniil";
	Amount1.city = "Paris";
	Amount1.amountOfRooms = 5;
	Amount1.price = 50000;
	Amount1.built.year = 1998;
	Amount1.built.month = "September";

	struct building *pAmount = &Amount1;

	cout << pAmount->owner;

	return 0;
}

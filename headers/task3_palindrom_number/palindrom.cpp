#include <iostream>
using namespace std;

bool isPalindrom(long int num) {
	int reversed = 0, check=num;

	while (num) {
		reversed = reversed*10 + num%10;
		num/=10;
	}
	return check==reversed;
}

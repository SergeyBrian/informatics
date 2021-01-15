#include <iostream>
#include <cmath>

using namespace std;

int getNumberOfDigits(int num)
{
    num = abs(num);
    int result = 1;

    while (num / pow(10, result) >= 1)
    {
        result ++;
    }

    return result;
}

int main() {
    int num;
    cout << "Enter a number:";
    cin >> num;
    cout << getNumberOfDigits(num);
    cout << " digit";
    if (abs(num) > 9) cout << "s";
    cout << " in " << num;
    return 0;
}

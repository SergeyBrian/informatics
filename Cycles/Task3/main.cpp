#include <iostream>
#include <cmath>

using namespace std;

bool isSimple (int num)
{
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int min, max;

    cout << "Enter min number: ";
    cin >> min;

    cout << "Enter max number: ";
    cin >> max;

    for (int i = min; i <= max; i++)
    {
        if (isSimple(i))
            cout << i << endl;
    }

    return 0;
}

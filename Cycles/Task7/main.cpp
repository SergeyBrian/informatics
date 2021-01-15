#include <iostream>
#include <cmath>

using namespace std;

bool isNice (int num)
{
    int arrGiven [10], arrReal [10] = {0,0,0,0,0, 0,0,0,0,0,};

    int length = 1;
    int div = 10;

    int n = num;
    while (n / div > 0)
    {
        div *= 10;
        length ++;
    }

    for (int i = 0; i < length; i ++)
    {
        int c = num / int(pow(10, i)) % int(pow(10, i+1));
        arrGiven[9-i] = c;
        arrReal[c-1] += 1;
    }
    for (int i = 0; i < length; i ++) {
        if (arrGiven[9-i] != arrReal[9-i])
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

    for (int i = min; i <= max; i ++)
    {
        if (isNice(i))
            cout << i << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int lengths [10] = {0,0,0,0,0,0,0,0,0,0};

    cout << "Enter 10 numbers (one number per line): \n";

    for (int i = 0; i < 10; i ++)
    {
        int num;
        cin >> num;

        int n = 1;
        int div = 10;
        while (num/div > 0) {
            n += 1;
            div *= 10;
        }

       lengths[n-1] += 1;
    }

    int max = 1;
    for (int i = 0; i < 10; i ++)
    {
        if (lengths[i] > max)
        {
            max = i + 1;
        }
    }

    cout << "Most often length = " << max;

    return 0;
}

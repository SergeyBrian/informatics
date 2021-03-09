#include <iostream>

using namespace std;

int main() {
    int num;

    srand(time(0));
    num = rand() % 100;

    cout << num << endl;

    while (num <= 100)
    {
        num = rand() % 100 + num;
        if (num < 100)
            cout << num << endl;
    }

    return 0;
}

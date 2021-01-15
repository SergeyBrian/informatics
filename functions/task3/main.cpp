#include <iostream>

using namespace std;

int findNOD(int x, int y)
{
    while (x && y)
    {
        if (x > y) x = x%y;
        else y = y%x;
    }
    return x+y;
}

int main() {
    int n;
    cout << "Enter amount of pairs: ";
    cin >> n;

    int * * arr = new int * [n];
    int * res = new int [n];

    cout << "Enter " << n << " pairs of numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[2];
        cin >> arr[i][0] >> arr[i][1];
        res[i] = findNOD(arr[i][0], arr[i][1]);
    }

    for (int i = 0; i < n; i ++)
        cout << res[i] << endl;

    return 0;
}

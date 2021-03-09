#include <iostream>

using namespace std;

int formula(int a, int b, int c)
{
    return (2*a*a)+(b)+(5*c);
}

int main() {
    int n;
    cout << "Enter number of numbers: ";
    cin >> n;

    int **arr = new int * [n];
    for (int i = 0; i < n; i ++)
    {
        arr[i] = new int [3];
        for (int j = 0; j < 3; j ++)
        {
            arr[i][j] = rand() % 101;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Results:" << endl;

    for (int i = 0; i < n; i ++)
        cout << formula(arr[i][0], arr[i][1], arr[i][2]) << "\n\n";

    // Clean up
    for (int i = 0; i < n; i ++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}

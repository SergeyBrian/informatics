#include <iostream>
#include <algorithm>


using namespace  std;

int & sort (int * arr)
{
    int &ref = arr[0];
    return * ref;
}

int main() {
    int n;
    cout << "Enter array length: ";
    cin >> n;

    int * arr = new int [n];

    for (int i = 0; i < n; i ++)
    {
        arr[i] = rand() % 101;
        cout << arr[i] << "\t";
    }
    cout << endl;

    cout << sort(arr);

    return 0;
}

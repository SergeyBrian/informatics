#include <iostream>
#include <cmath>


using namespace std;

int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;

    char n = 0;
    while (x - pow(3, n) > pow(3, n)/2)
        n++;
    cout << n;

    char * arr = new char[n + 1]; // Create array for digits
    arr[0] = 1;
    for (int i = 1; i < n+2; i++) // Fill array with 0s
    {
        arr[i] = 0;
    }

    // Get greatest digit recursively
    int i = 1;
    while (x > 0)
    {
        char greatest_digit = 0;
        while (x - pow(3, greatest_digit) > pow(3, greatest_digit) / 2)
            greatest_digit++;
        arr[ - greatest_digit] = x < 0 ? '$' : 1;
        x = x - pow(3, greatest_digit);
        i ++;
    }

    delete []arr;
    return 0;
}

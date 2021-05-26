#include <iostream>
#include <deque>
#include <cmath>

using namespace std;

double scale(double x, double y) {
    return (x+y)/2;
}

double f(double x, const deque<double>& Array, int power) {
    double result = 0;
    for (int i = power; i >= 0; i--) {
        result += Array[i]*pow(x,i);
    }
    return result;
}

void print(const deque<double>& Arr, int power) {
    for (int i = power; i >= 0; i --) {
        if (i!=power) cout << "+";
        cout << Arr[i] << "x^" << i;
    }

    cout << endl << endl;
}

int main() {
    int n, x_min, x_max;
    cout << "Вариант 1\n";
    cout << "Введите степень n: ";
    cin >> n;
    cout << "Введите элементы массива:\n";
    deque<double> Array;
    for (int i = 0; i < n + 1; i ++) {
        double el;
        cout << "a" << i << ": ";
        cin >> el;
        Array.push_front(el);
    }

    cout << "Введите x min: ";
    cin >> x_min;
    cout << "Введите x max: ";
    cin >> x_max;

    print(Array, n);
    double result = 0;
    for (int i = x_min; i < x_max; i++) {
        result += scale(f(i, Array, n), f(i+1, Array, n));
    }

    cout << result << endl;

    return 0;
}

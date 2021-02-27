#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

bool isNum(char x) {
    const int nums[9] = {'1','2','3','4','5','6','7','8','9'};
    for (int i = 0; i < 9; i ++) {
        if (nums[i]==x) return true;
    }
    return false;
}

double F (double x, int n, int * c) {
    double res = 0;
    for (int i = 0; i <= n; i++) {
        res += c[i]*pow(x,n-i);
    }
}

int * growArr(int * arr, int * s, int p) {
    int * arr2 = new int[*s+1];
    for (int i = 0; i < *s; i ++) arr2[i] = arr[i];
    delete []arr;
    *s+=1;
    arr2[*s] = p;
    return arr2;
}

int main() {
    ifstream f;
    f.open("White_noise.txt");
    string str;
    if (f) cout << "File open!" << endl;
    else cout << "File not open!";
    getline(f, str);

    int a=0,b=0;
    int arr [100];
    int s = 0;
    for (int i = 0; i < str.length(); i ++) {
        if ((isNum(str[i]) && !isNum(str[i+1]))) {
            if (!a) a=str[i] - '0';
            else if (!b) b=str[i] - '0';
            else arr[s++] = str[i] - '0';
        }

        else if (str[i] == '-' && isNum(str[i+1] && !isNum(str[i+2]))) {
            if (!a) a=-1*(str[i+1] - '0');
            else if (!b) b=-1*(str[i+1] - '0');
            else arr[s++] = -1*(str[i+1] - '0');
        }
    }
    cout << a << "\t" << b << endl;
    cout << s;
    cout << endl << endl;
    for (int j = 0; j < s; j ++) cout << arr[j] << endl;
    return 0;
}

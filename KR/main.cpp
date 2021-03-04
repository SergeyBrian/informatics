#include <iostream>
#include <cmath>
#include <fstream>
#include <ctime>

using namespace std;

double F(double x, const double * z, int n) {
    double res = 0;
    for (int i = 0; i < n; i ++) {
        res += z[i]*pow(x,n-i-1);
    }
    return res;
}

int main() {
    srand(time(0));
    int V = rand()%20 + 1;

    double L, K, c;
    double * Z, * z, e =  0.0001;
    cout << "V: " << V << endl;
    FILE * file = fopen("input.dat", "rb");

    fseek(file, sizeof(double)*(V-1), SEEK_SET);
    fread(&K, sizeof(double), 1, file);
    fseek(file, sizeof(double)*(V+19), SEEK_SET);
    fread(&L, sizeof(double), 1, file);
    cout << "K: " << K << endl << "L: " << L;

    Z = new double[(int)L];
    z = new double[(int)(L-2)];

    fseek(file, sizeof(double)*(K-1), SEEK_SET);
    fread(Z, sizeof(double), (int)L, file);
    cout << endl << endl;
    fclose(file);
    for (int i = 0; i < (int)(L-2); i ++)
        z[i] = Z[i+2];

    double a = Z[0], b=Z[1];
    int n = (int)(L-2);

    cout << endl;
    for (int i = 0; i < L-2; i ++) cout << z[i] << endl;

    while (abs(b-a) > e) {
        c = (a+b)/2;
        if (F(a,z,n)*F(c,z,n)>0) a=c;
        else b=c;
    }

    cout << endl << (a+b)/2 << endl;
    ofstream output("output.txt");

    output << "V: " << V << endl << "result: " << (a+b)/2;

    return 0;
}

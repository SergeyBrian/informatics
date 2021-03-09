#include <iostream>
#include <cmath>

using namespace std;


double calculate(double bullet_v, double ball_v, double bullet_m, double ball_m)
{
    bullet_v *= 3.6;
    ball_m /= 1000;
    double impulse_before_collision = bullet_v*bullet_m - ball_v*ball_v;
    double v_after = impulse_before_collision/(bullet_m+ball_m);
    return v_after/3.6;
}

int main() {
    double min_y, max_y, min_x, max_x, v, step_x, step_y, bullet_m = 0.009, ball_v=3.6;

    cout << "SPEED (M/S) Enter min x, max x and step for x: ";
    cin >> min_x >> max_x >> step_x;
    cout << "MASS (G) Enter min y, max y and  step for y: ";
    cin >> min_y >> max_y >> step_y;

    for (double y = min_y; y <=max_y; y += step_y)
        cout << "\t" << y;
    for (double x = min_x; x <= max_x; x += step_x)
    {
        cout << endl << x;
        for(double y = min_y; y <= max_y; y += step_y)
        {
            cout << "\t" << round(calculate(x, ball_v, bullet_m, y)*1000)/1000;
        }
    }

    return 0;
}

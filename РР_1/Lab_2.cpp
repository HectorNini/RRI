#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    double x = 0, y = 0;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if  ((pow(x, 2) + pow(y, 2) < 1) && ((x < -0.7) || ((x > 0) && abs(y) < 0.3)))
        cout << "Точка принадлежит области";
    else if (((x > -0.7) && (x < 0)) || (pow(x, 2) + pow(y, 2) > 1) || ((x > 0) && abs(y) > 0.3))
        cout << "Точка не принадлежит области";
    else
        cout << "Точка лежит на границе области";
}


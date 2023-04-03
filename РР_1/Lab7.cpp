#include <iostream>
#include <cmath>
using namespace std;



double** massiv(int sz)
{
    double** A;
    A = new double* [sz]; 
    for (int i = 0; i < sz; i++) {
        A[i] = new double[sz];
    }
    return A;
}

double maximum(double** m,int sz)
{
    int z = 0,i=0,j=0;
    double max_el = -9999999;
    for (i = (sz - 1); i >= (sz / 2) - 1; i--) {
        for (j = 0; j < sz; j++) {
            if ((j >= z) && (j <= (sz - 1 - z))) {
                if (max_el < m[i][j])
                    max_el = m[i][j];
            }
        }
        z += 1;
        cout << endl;
    }
    return max_el;
}
double minimum(double** m, int sz)
{
    int z = 0, i = 0, j = 0;
    double min_el = 9999999;
    for (i = (sz - 1); i >= (sz / 2) - 1; i--) {
        for (j = 0; j < sz; j++) {
            if ((j >= z) && (j <= (sz - 1 - z))) {
                if (min_el > m[i][j])
                    min_el = m[i][j];
            }
        }
        z += 1;
        cout << endl;
    }
    return min_el;
}

double summa(double** m, int sz)
{
    double sum = 0;
    sum = minimum(m, sz) +maximum(m, sz);
    return sum;
}

void fill(double** m, int sz) {
    int i = 0, j = 0;
    for (i = 0; i < sz; i++) {
        for (j = 0; j < sz; j++) {
            m[i][j] = rand() % 19 - 9;
            cout << m[i][j] << "   ";
        }
        cout << endl;
    }

}




int main()
{
    srand(time(0));
    setlocale(LC_ALL, "rus");
    double max = 0,min=0,sum=0;
    int n = 1;
    double** mas;
    cout << "Введите размер двумерного массива N x N" << endl;
    cout << "N = ";
    cin >> n;
    mas = massiv(n);
    fill(mas,n);
    //max = maximum(mas, n);
    //min = minimum(mas, n);
   // sum = summa(minimum(mas, n), maximum(mas, n));
    //cout << "Макс = " << max << endl;  
    //cout << "Мин = " << min << endl;
    sum = summa(mas, n);
    cout << "Сумма = " << sum << endl;
}




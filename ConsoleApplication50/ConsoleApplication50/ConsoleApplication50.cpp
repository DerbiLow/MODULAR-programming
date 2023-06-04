#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
const int n = 5;
extern "C" float asfun(int x, int n);
//extern "C" float last(int x);
extern "C" float func(int x)
{
    float f;
    f = log(abs(cos(x) + sin(x)));
    return f;
}

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x;
    double y[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Введите Х" << i + 1 << " "; cin >> x;
        float f = asfun(x, n);
        y[i] = f;
        cout << "X(" << i + 1 << ") = " << x << endl;
        cout << "Y(" << i + 1 << ") = " << y[i] << endl;
    }
    return 0;

}
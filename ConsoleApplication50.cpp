
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

const int n = 5; /*Количество итераций цикла*/
extern "C" float asfun(int x); /*функция вызова кода Assembler из C++*/
extern "C" float func(int x) /*функция вызова кода C++ из Assembler*/
{
    float f;
    f = log(abs(cos(x) + sin(x))); /*Математическое вычисление, заданное по варианту*/
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
        float f = asfun(x);
        y[i] = f;
        cout << "X(" << i + 1 << ") = " << x << endl;
        cout << "Y(" << i + 1 << ") = " << y[i] << endl;
    }
    return 0;

}

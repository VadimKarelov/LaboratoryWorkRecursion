#include <iostream>
using namespace std;

double Koren(double a, int n)
{
    if (n == 0)
        return 0.5 * (1 + a);
    double x = Koren(a, n - 1);
    return 0.5 * (x + a / x);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, eps;
    do
    {
        cout << "Введите целое число >= 0" << endl;
        cin >> n;
        cout << "Введите точность - колво раз работы рекурсивной функции" << endl;
        cin >> eps;
    } while (n < 0 || eps <= 0);
    cout << "Корень из " << n << " = " << Koren(n, eps);
}

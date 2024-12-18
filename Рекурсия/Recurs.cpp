#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

double fact(double x)
{
    if (x == 1)
        return 1;
    else
        return x * fact(x - 1);
}

double s(double x, double n)
{
    if (n == 0)
    {
        cout << "s0 = 1" << endl;
        return 1;
    }
    else
    {
        cout << 's' << n << " = " << pow(-1, n) * pow(x, 2 * n) / fact(2 * n) << endl;
        return (pow(-1, n) * pow(x, 2 * n) / fact(2 * n)) + s(x, n - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "RU");
    double x, n;
    cout << "¬ведите x:";
    cin >> x;
    cout << "¬ведите n:";
    cin >> n;
    cout << "–езультат = " << s(x, n);
    return 0;
}
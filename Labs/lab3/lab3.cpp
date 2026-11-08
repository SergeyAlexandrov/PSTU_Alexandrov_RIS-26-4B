#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");

    const double a = 0.1, b = 1.0, eps = 0.0001;
    const int k = 10, n = 10;
    double h = (b - a) / k;     // шаг изменения x
    double L = log(3.0);        // ln 3

    cout << "\t\tВычисление функции" << endl;
    cout << fixed << setprecision(6);

    for (int j = 0; j <= k; j++)
    {
        double x = a + j * h;

        //  сумма для заданного n 
        double s = 1, t = 1;
        for (int i = 1; i <= n; i++)
        {
            t = t * x * L / i;
            s = s + t;
        }
        double sn = s;

        //  сумма для заданной точности (
        s = 1; t = 1;
        int i = 0;
        do
        {
            i++;
            t = t * x * L / i;
            s = s + t;
        } while (t >= eps);
        double se = s;

        double y = pow(3.0, x); // точное значение

        cout << "X=" << x << "   SN=" << sn
             << "   SE=" << se << "   Y=" << y << endl;
    }
    return 0;
}

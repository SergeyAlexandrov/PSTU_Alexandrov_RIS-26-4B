#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;  



int main()
{
    setlocale(LC_ALL, ".65001"); 
    double a, b, c, D, x1, x2;

    cout << "Введите коэфиценты a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0)
        cout << "Это не квадратное уравнение (a = 0)" << endl;
    else
    {
        D = b * b - 4 * a * c;
        if (D > 0)
        {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Два корня: x1 = " << x1 << ", x2 = " << x2 << endl;
        }
        else if (D == 0)
        {
            x1 = -b / (2 * a);
            cout << "Один корень: x = " << x1 << endl;
        }
        else
            cout << "Действительных корней нет" << endl;
    }
    return 0;
}
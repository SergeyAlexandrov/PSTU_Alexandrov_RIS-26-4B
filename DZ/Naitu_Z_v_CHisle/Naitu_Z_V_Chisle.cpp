#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001"); 
    int n, z, m;
    bool f = false;

    cout << "Введите натуральное число n: ";
    cin >> n;
    cout << "Введите цифру z: ";
    cin >> z;

    m = n;
    while (m > 0 && !f)
    {
        if (m % 10 == z)
            f = true;
        m = m / 10;
    }

    if (f == true)
        cout << "Цифра " << z << " есть в числе " << n << endl;
    else
        cout << "Цифры " << z << " нет в числе " << n << endl;

    return 0;
}
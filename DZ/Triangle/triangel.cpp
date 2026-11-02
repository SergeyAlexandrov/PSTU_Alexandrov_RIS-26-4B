#include <iostream>
#include <clocale>
using namespace std;  

int main()
{
    setlocale(LC_ALL, ".65001"); 
    double a, b, c;

    cout << "Введите стороны a, b, c (больше 0): ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0)
        cout << "Стороны должны быть больше 0" << endl;
    else if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
            cout << "Треугольник равносторонний" << endl;
        else if (a == b || a == c || b == c)
            cout << "Треугольник равнобедренный" << endl;
        else
            cout << "Треугольник разносторонний" << endl;
    }
    else
        cout << "Треугольник не существует либо вы ввели некорректные данные" << endl;

    return 0;
}
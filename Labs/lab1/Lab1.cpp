#include <iostream>
#include <cmath>
#include <Windows.h>
#include <clocale>

using namespace std;

// float Задание №1
void task1()
{
    cout.precision(15);
    float a = 1000, b = 0.0001f;

    float deyst1 = a + b;
    float deyst2 = pow(deyst1, 2);
    float a2 = pow(a, 2);
    float deyst3 = a2 + 2 * a * b;
    float deyst4 = deyst2 - deyst3;
    float b2 = pow(b, 2);
    float result = deyst4 / b2;

    cout << endl;
    cout << "a             = " << a << endl;
    cout << "b             = " << b << endl;
    cout << "a + b         = " << deyst1 << endl;
    cout << "(a + b)^2     = " << deyst2 << endl;
    cout << "a^2           = " << a2 << endl;
    cout << "a^2 + 2ab     = " << deyst3 << endl;
    cout << "числитель     = " << deyst4 << endl;
    cout << "b^2           = " << b2 << endl;
    cout << "result float is = " << result << endl;
    cout << endl;
}

// double Задание №1
void task2()
{
    cout.precision(15);
    double a = 1000, b = 0.0001;

    double deyst1 = a + b;
    double deyst2 = pow(deyst1, 2);
    double a2 = pow(a, 2);
    double deyst3 = a2 + 2 * a * b;
    double deyst4 = deyst2 - deyst3;
    double b2 = pow(b, 2);
    double result = deyst4 / b2;

    cout << endl;
    cout << "a             = " << a << endl;
    cout << "b             = " << b << endl;
    cout << "a + b         = " << deyst1 << endl;
    cout << "(a + b)^2     = " << deyst2 << endl;
    cout << "a^2           = " << a2 << endl;
    cout << "a^2 + 2ab     = " << deyst3 << endl;
    cout << "числитель     = " << deyst4 << endl;
    cout << "b^2           = " << b2 << endl;
    cout << "result double is = " << result << endl;
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, ".65001");

    cout << endl;
    cout << "---------------------Задание номер 1----------------------------" << endl;
    cout << endl;

    cout << "=== float ===" << endl;
    task1();
    cout << "=== double ===" << endl;
    task2();

    cout << "---------------------Задание номер 2----------------------------" << endl;
    cout << endl;

    int m, n, r;

    cout << "Введите число для переменной m: ";
    cin >> m;

    cout << "Введите число для переменной n: ";
    cin >> n;

    cout << endl;

    r = n+++m;
    cout << " n+++m : " << r << "  (n=" << n << ", m=" << m << ")" << endl;

    r = m-- > n;
    cout << " m-- > n : " << r << "  (n=" << n << ", m=" << m << ")" << endl;

    r = n-- > m;
    cout << " n-- > m : " << r << "  (n=" << n << ", m=" << m << ")" << endl;

    cout << endl;

    return 0;
}
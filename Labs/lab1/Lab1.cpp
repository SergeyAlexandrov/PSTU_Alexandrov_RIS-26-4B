
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

// float Задание №1
void task1() {
    float a = 1000, b = 0.0001f;
    float deyst1 = a + b;
    float deyst2 = pow(deyst1,2);;
    float a2 = pow(a,2);
    float deyst3 = (a2+2*a*b);
    float deyst4 = deyst2-deyst3;
    float b2 = pow(b,2);
    float result = deyst4/b2;
    cout << ' ' << endl;
    cout << "result float is = " << result << endl;
    cout << ' ' << endl;
}
// double Задание №1
void task2() {
    double a = 1000, b = 0.0001;
    double deyst1 = a + b;
    double deyst2 = pow(deyst1,2);
    double a2 = pow(a,2);
    double deyst3 = (a2+2*a*b);
    double deyst4 = deyst2-deyst3;
    double b2 = pow(b,2);
    double result = deyst4/b2;
    cout << ' ' << endl;
    cout << "result double is = " << result << endl;
    cout << ' ' << endl;
}

int main() 
{
SetConsoleOutputCP(CP_UTF8);   
SetConsoleCP(CP_UTF8); 
cout << ' ' << endl;
cout << "---------------------Задание номер 1----------------------------" << endl;
cout << ' ' << endl;
    task1();
    task2();
cout << "---------------------Задание номер 2----------------------------" << endl;
cout << ' ' << endl;
cout << "Задание номер 2:" << endl;
cout << ' ' << endl;
int m, n, r;
cout << "Введите число для переменной m: ";
cin >> m;
cout << "Введите число для переменной n: ";
cin >> n;
cout << ' ' << endl;

r = n+++m;
cout << " n+++m : " << r << endl;

r = m-- > n;
cout << " m-- > n : " << r << endl;

r = n-- > m;
cout << " n-- > m : " << r << endl;
cout << ' ' << endl;
    return 0;
}
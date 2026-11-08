#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;  

int main()
{
    setlocale(LC_ALL, ".65001");   

    int n = 200;     // граница для сумирования 
    int sum = 0;     // переменная-накопитель: хранит сумму, начальное значение 0

// Цикл for: параметр i принимает значения 3, 6, 9, ...198
    for (int i = 3; i < n; i += 3)
    {
        sum += i;   // тело цикла: прибавляем текущее число i к накопленной сумме
    }

    cout << endl;   // пустая строка для отделения вывода
    cout << "Сумма всех натуральных чисел, кратных 3 и меньших " << n << ", равна: " << sum << endl;
    cout << endl;

    return 0;
}
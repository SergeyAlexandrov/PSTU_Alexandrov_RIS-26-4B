#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");
    srand(time(0));

    const int N = 100;
    int a[N]; // сам массив: 100 ячеек для целых чисел, нумерация с 0 до 99.
    int n, k, i, j;

    cout << "Введите длину массива (не больше 50): ";
    cin >> n;

    // заполняем массив случайными числами 
    for (i = 0; i < n; i++) 
        a[i] = rand() % 21 - 10; //rand() выдаёт огромное случайное число "% 21" берёт остаток от деления на 21, то есть число от 0 до 20

    cout << "Исходный массив:" << endl;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "Введите номер удаляемого элемента K: ";
    cin >> k;

    // удаляем элемент с номером K (нумерация с единицы)
    if (k >= 1 && k <= n)
    {
        for (i = k - 1; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
    }
    else
        cout << "Элемента с таким номером нет" << endl;

    // после каждого чётного элемента добавляем 0
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            for (j = n; j > i + 1; j--)
                a[j] = a[j - 1];
            a[i + 1] = 0;
            n++;
            i++;   // пропускаем вставленный ноль
        }
    }

    cout << "Полученный массив:" << endl;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <cwctype>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");

    char s[256];
    wchar_t w[256], t[256];
    int len, n = 0, i;
    bool pal = true;

    cout << "Введите строку (в конце точка): ";
    cin.getline(s, 256);          // вместо gets(s)

                // переводим строку в "широкие" символы, чтобы одна буква занимала одну ячейку
    len = mbstowcs(w, s, 255);

         // в массив t переписываем всё, кроме пробелов и точки, буквы делаем строчными
    for (i = 0; i < len; i++)
        if (w[i] != L' ' && w[i] != L'.')
        {
            t[n] = towlower(w[i]);
            n++;
        }

    // сравниваем символы с начала и с конца
    for (i = 0; i < n / 2; i++)
        if (t[i] != t[n - 1 - i])
            pal = false;

    if (pal == true)
        cout << "Строка является палиндромом" << endl;
    else
        cout << "Строка не является палиндромом" << endl;

    return 0;
}

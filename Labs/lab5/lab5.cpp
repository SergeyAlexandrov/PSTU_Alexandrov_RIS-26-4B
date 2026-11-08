#include <iostream>
#include <cstring>
#include <clocale>
using namespace std;

// извлекает слово из строки row, начиная с позиции pos
// слово - это цифры до ближайшего нуля  ноль в слово не входит
// возвращает позицию, с которой начинается следующее слово
int getWord(char row[], int pos, char word[])
{
    int j = 0;
    while (row[pos] != '\0' && row[pos] != '0') // "\0" как конец строки '0' как разделитель слов
    {
        word[j] = row[pos];
        j++;
        pos++;
    }
    if (row[pos] == '0')
        pos++;       // пропускаем завершающий ноль
    else
        j = 0;     // ноля в конце не было, слово не считаем
    word[j] = '\0';
    return pos;
}

int main()
{
    setlocale(LC_ALL, ".65001");

    char s[10][81], res[1000], w[81];
    int m, i, pos, first, len;
    res[0] = '\0';

    cout << "Введите число строк (не больше 10): ";
    cin >> m;
    cout << "Введите строки из цифр:" << endl;
    for (i = 0; i < m; i++)
        cin >> s[i];

    for (i = 0; i < m; i++)
    {
        strcat(res, "(");
        pos = 0;
        first = 1;
        while (s[i][pos] != '\0')
        {
            pos = getWord(s[i], pos, w);
            if (w[0] != '\0')
            {
                if (first == 0)
                    strcat(res, ",");
                strcat(res, w);
                first = 0;
            }
        }
        strcat(res, ")");
    }

    cout << "Результат:" << endl;
    len = strlen(res);
    for (i = 0; i < len; i++)
    {
        cout << res[i];
        if ((i + 1) % 60 == 0)
            cout << endl;     // печатаем по 60 символов в строке
    }
    cout << endl;

    return 0;
}

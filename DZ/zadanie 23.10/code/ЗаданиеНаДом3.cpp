#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
setlocale(LC_ALL, ".65001");

int a = 4, b =9;
int* p = &a; // указывает на a
int* q = p; // указывает на a
int& r = *p; // ссылка на  a (другое имя)
p = &b; // становится значением b 
*q += *p; // a = a + b ( a = 13 )
*p = r - 3; // b = a - 3 ( b = 10)
q = p; // q тоже становится указателем на p
*q += r; // b = b+a ( a = 13 b = 23)

cout << a << ' ' << b << ' ' << r; // a =13 r ссылка на туже a соответственно тоже равна 13

return 0;
}
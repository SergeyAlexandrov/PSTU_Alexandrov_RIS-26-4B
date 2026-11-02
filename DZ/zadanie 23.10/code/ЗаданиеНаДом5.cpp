#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
setlocale(LC_ALL, ".65001");

int a = 2, b = 5, c = 8; // резерв памяти a = 2, b = 5, c = 8
int* p = &a; // p указывает на a
int& r = a;// r - второе имя(ссылка) для a 
int copy = *p;// *p это a  = 2 (независимая от a копия)
*p = b; // через p a = b (a = 5) вообщем a становится значением b
p = &c; // p становится указателем на c
r = *p; // *p это c = 8, через r ,  a = 8
*p = b + copy; // через указ p пишем в c  5 + 2 = 7
p = &b; // p теперь указывает на b
*p = r - copy; // r это a = 8, 8 - 2 = 6,  b = 6
r++; // a увеличивается через на 1 ,  a = 9
cout << a << " " << b << " " << c << " " << copy;

return 0;
}
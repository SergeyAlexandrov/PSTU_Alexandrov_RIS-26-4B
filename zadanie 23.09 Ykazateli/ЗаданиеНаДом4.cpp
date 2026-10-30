#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
setlocale(LC_ALL, ".65001");


using namespace std;
int a = 5, b = 8; // a = 5, b = 8
int& r = a; // r - второе имя(ссылка) для a (a = 5)
int& s = a; // s - второе имя(ссылка) для a (a = 5)
int copy = a; // copy - независимая копия, copy = 5
r = b;        // a = 8 (в a записали значение b)
s += 2;         // a = 10 (увеличили a через s)  10
b = copy;       // b = 5 (copy всё это время оставалась 5)
cout << a << " " << b << " "<< r << " " << s << " " << copy;


return 0;
}
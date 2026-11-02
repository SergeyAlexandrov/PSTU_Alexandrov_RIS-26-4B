#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
setlocale(LC_ALL, ".65001");


int a = 10;
int b = 20;
int& r = a; // r становится указателем на a

r = b; // указатель r ведущий к a становится как b =  20 значит и a присвоится значение равное 20
r++; // значение указателя r к a увеличивается на 1 и становится 21
cout << a << " " << b;


return 0;
}
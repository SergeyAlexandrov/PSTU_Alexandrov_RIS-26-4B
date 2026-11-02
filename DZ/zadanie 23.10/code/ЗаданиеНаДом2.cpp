#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
setlocale(LC_ALL, ".65001");


int a = 12; // инициализация a = 12
int* ptr = &a; // инициализация указателя ptr 
int copy = *ptr; // инициализация переменной copy равному указателю ptr ведущему к a равному 12 (просто копирует значение переменной)
(*ptr)++; // указатель ведущий к a увеличивается на 1 соответственно и переменная a  увеличивается на 1
cout << a << " " << copy;


return 0;
}
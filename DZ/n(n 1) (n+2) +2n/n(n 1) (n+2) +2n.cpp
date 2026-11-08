#include <iostream>
#include <clocale>
using namespace std;
int main() {
    int n, i=1, j, p, S = 0;
    setlocale(LC_ALL, ".65001");
    cout << "Введите число n: ";
    cin >> n;
    while (i<=n){
        p = 1;
        j = i;
        while(j<=2*i)
        {
            p *= j;
            j++;
        }
        S += p;
        i++;
    }
    cout << ' ';
    cout << "Сумма: " << S;
    cout << ' ';
return 0;
}
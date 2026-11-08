#include <iostream>
using namespace std;
#include <clocale>
int main() {
    setlocale(LC_ALL, ".65001");
    int n;
    cout << " введите размер кв: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
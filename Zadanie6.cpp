#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    // Ваш код:
    if (N < 0) {
        cout << "Ошибка: факториал отрицательного числа не определён" << endl;
        return 0;
    }

    long long factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }
    cout << factorial << endl;

    return 0;
}
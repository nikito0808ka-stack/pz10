#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    // Ваш код:
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
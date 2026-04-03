#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    // Ваш код:
    for (int i = 2; i <= N; i += 2) {
        cout << i;
        if (i + 2 <= N) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
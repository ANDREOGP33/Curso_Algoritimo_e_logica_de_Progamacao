#include <iostream>

using namespace std;

int main() {
    int y, x, soma = 0;

    cout << "Digite o primeiro valor: ";
    cin >> y;
    cout << "Digite o segundo valor: ";
    cin >> x;

    if (y > x) {
        for (int i = x+1; i < y; i++) {
            if (i % 2 != 0) {
                soma += i;
            }
        }
    } else {
        for (int i = y+1; i < x; i++) {
            if (i % 2 != 0) {
                soma += i;
            }
        }
    }

    cout << "Soma dos numeros impares: " << soma << endl;

    return 0;
}
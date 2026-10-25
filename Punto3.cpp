#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    char c;

    do {
        cout << "Ingrese la altura del rombo (entero impar positivo): ";
        cin >> n;
        if (n <= 0 || n % 2 == 0) {
            cout << "Valor invalido, intente de nuevo." << endl;
        }
    } while (n <= 0 || n % 2 == 0);

    cout << "Ingrese el caracter: ";
    cin >> c;

    int centro = n / 2;

    for (int i = 0; i < n; i++) {
        int dist = abs(centro - i);
        int espacios = dist;
        int simbolos = n - 2 * dist;

        for (int j = 0; j < espacios; j++) {
            cout << " ";
        }
        for (int j = 0; j < simbolos; j++) {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
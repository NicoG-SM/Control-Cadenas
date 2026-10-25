#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "Numero de filas (1 a 15): ";
    cin >> n;

    if (n < 1 || n > 15) {
        return 0;
    }

    int ancho_columna = 4;

    for (int i = 0; i < n; i++) {
        // Imprimir espacios de centrado
        int espacios = (n - 1 - i) * (ancho_columna / 2);
        for (int s = 0; s < espacios; s++) {
            cout << " ";
        }

        long long c = 1;
        for (int k = 0; k <= i; k++) {
            cout << setw(ancho_columna) << c;
            c = c * (i - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}
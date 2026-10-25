#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese N (>= 1): ";
    cin >> N;

    if (N < 1) {
        cout << "Valor invalido." << endl;
        return 0;
    }

    long long mejor_num = 1;
    long long max_pasos = 0;
    long long max_val_alcanzado = 1;

    for (int i = 1; i <= N; i++) {
        long long actual = i;
        long long pasos = 0;
        long long max_local = actual;

        while (actual != 1) {
            if (actual % 2 == 0) {
                actual = actual / 2;
            } else {
                actual = 3 * actual + 1;
            }
            pasos++;
            if (actual > max_local) {
                max_local = actual;
            }
        }

        if (pasos > max_pasos) {
            max_pasos = pasos;
            mejor_num = i;
            max_val_alcanzado = max_local;
        }
    }

    cout << "Numero con la secuencia mas larga: " << mejor_num << endl;
    cout << "Pasos: " << max_pasos << endl;
    cout << "Valor maximo alcanzado: " << max_val_alcanzado << endl;

    return 0;
}
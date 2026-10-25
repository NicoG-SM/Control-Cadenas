#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    cout << "Ingrese a y b (1<=a<=b): ";
    if (!(cin >> a >> b) || a < 1 || a > b) {
        cout << "Rango invalido." << endl;
        return 0;
    }

    int perfectos = 0, abundantes = 0, deficientes = 0;

    for (int i = a; i <= b; i++) {
        int suma_divisores = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                suma_divisores += j;
            }
        }

        string tipo;
        if (suma_divisores == i) {
            tipo = "perfecto";
            perfectos++;
        } else if (suma_divisores > i) {
            tipo = "abundante";
            abundantes++;
        } else {
            tipo = "deficiente";
            deficientes++;
        }

        cout << i << ": " << tipo << " (suma de divisores = " << suma_divisores << ")" << endl;
    }

    cout << "Perfectos: " << perfectos << ", abundantes: " << abundantes << ", deficientes: " << deficientes << endl;

    return 0;
}
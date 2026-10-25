#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    cout << "1. Comprimir" << endl;
    cout << "2. Descomprimir" << endl;
    int opcion;
    cout << "Opcion: ";
    cin >> opcion;
    cin.ignore();

    if (opcion == 1) {
        string cadena;
        cout << "Cadena: ";
        getline(cin, cadena);

        if (cadena.empty()) {
            cout << "Comprimida: " << endl;
            return 0;
        }

        string comprimida = "";
        char actual = cadena[0];
        int contador = 1;

        for (size_t i = 1; i < cadena.length(); i++) {
            if (cadena[i] == actual) {
                contador++;
            } else {
                comprimida += actual + to_string(contador);
                actual = cadena[i];
                contador = 1;
            }
        }
        comprimida += actual + to_string(contador);

        cout << "Comprimida: " << comprimida << endl;

    } else if (opcion == 2) {
        string cadena;
        cout << "Cadena: ";
        getline(cin, cadena);

        string descomprimida = "";
        bool valido = true;
        size_t i = 0;

        if (cadena.empty()) {
            valido = false;
        }

        while (i < cadena.length() && valido) {
            char c = cadena[i];
            if (isdigit(c)) {
                valido = false;
                break;
            }
            i++;

            if (i >= cadena.length() || !isdigit(cadena[i])) {
                valido = false;
                break;
            }

            int num = 0;
            while (i < cadena.length() && isdigit(cadena[i])) {
                num = num * 10 + (cadena[i] - '0');
                i++;
            }

            if (num <= 0) {
                valido = false;
                break;
            }

            for (int k = 0; k < num; k++) {
                descomprimida += c;
            }
        }

        if (valido) {
            cout << "Descomprimida: " << descomprimida << endl;
        } else {
            cout << "Formato invalido." << endl;
        }
    }

    return 0;
}
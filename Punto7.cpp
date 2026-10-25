#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    char opcion;
    cout << "Cifrar (C) o descifrar (D): ";
    cin >> opcion;

    int k;
    cout << "Desplazamiento: ";
    cin >> k;

    cin.ignore();

    string mensaje;
    cout << "Mensaje: ";
    getline(cin, mensaje);

    if (toupper(opcion) == 'D') {
        k = -k;
    }

    // Normalizar k dentro del rango 0-25
    k = (k % 26 + 26) % 26;

    string resultado = "";

    for (size_t i = 0; i < mensaje.length(); i++) {
        char c = mensaje[i];
        if (isupper(c)) {
            char base = 'A';
            resultado += (char)(base + (c - base + k) % 26);
        } else if (islower(c)) {
            char base = 'a';
            resultado += (char)(base + (c - base + k) % 26);
        } else {
            resultado += c;
        }
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
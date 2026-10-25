#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string contrasena;
    cout << "Ingrese la contrasena: ";
    getline(cin, contrasena);

    bool tiene_mayus = false;
    bool tiene_minus = false;
    bool tiene_digito = false;
    bool tiene_simbolo = false;

    for (size_t i = 0; i < contrasena.length(); i++) {
        char c = contrasena[i];
        if (isupper(c)) tiene_mayus = true;
        else if (islower(c)) tiene_minus = true;
        else if (isdigit(c)) tiene_digito = true;
        else if (!isspace(c)) tiene_simbolo = true;
    }

    bool valida = true;

    if (contrasena.length() < 8) {
        cout << "Debe tener al menos 8 caracteres." << endl;
        valida = false;
    }
    if (!tiene_mayus) {
        cout << "Falta al menos una letra mayuscula." << endl;
        valida = false;
    }
    if (!tiene_minus) {
        cout << "Falta al menos una letra minuscula." << endl;
        valida = false;
    }
    if (!tiene_digito) {
        cout << "Falta al menos un digito." << endl;
        valida = false;
    }
    if (!tiene_simbolo) {
        cout << "Falta al menos un simbolo." << endl;
        valida = false;
    }

    if (valida) {
        cout << "Contrasena valida." << endl;
    } else {
        cout << "Contrasena invalida." << endl;
    }

    return 0;
}
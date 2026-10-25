#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    int inicio = 0;
    int fin = frase.length() - 1;
    bool es_palindromo = true;

    while (inicio < fin) {
        while (inicio < fin && !isalnum(frase[inicio])) {
            inicio++;
        }
        while (inicio < fin && !isalnum(frase[fin])) {
            fin--;
        }

        if (inicio < fin) {
            if (tolower(frase[inicio]) != tolower(frase[fin])) {
                es_palindromo = false;
                break;
            }
            inicio++;
            fin--;
        }
    }

    if (es_palindromo) {
        cout << "Es palindromo." << endl;
    } else {
        cout << "No es palindromo." << endl;
    }

    return 0;
}
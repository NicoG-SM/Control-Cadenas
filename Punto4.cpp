#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cout << "Ingrese un entero entre 1 y 3999: ";
    cin >> num;

    if (num < 1 || num > 3999) {
        cout << "Numero fuera de rango." << endl;
        return 0;
    }

    int temp = num;
    string romano = "";

    while (temp >= 1000) { romano += "M"; temp -= 1000; }
    if (temp >= 900) { romano += "CM"; temp -= 900; }
    if (temp >= 500) { romano += "D"; temp -= 500; }
    if (temp >= 400) { romano += "CD"; temp -= 400; }
    while (temp >= 100) { romano += "C"; temp -= 100; }
    if (temp >= 90) { romano += "XC"; temp -= 90; }
    if (temp >= 50) { romano += "L"; temp -= 50; }
    if (temp >= 40) { romano += "XL"; temp -= 40; }
    while (temp >= 10) { romano += "X"; temp -= 10; }
    if (temp >= 9) { romano += "IX"; temp -= 9; }
    if (temp >= 5) { romano += "V"; temp -= 5; }
    if (temp >= 4) { romano += "IV"; temp -= 4; }
    while (temp >= 1) { romano += "I"; temp -= 1; }

    cout << num << " " << romano << endl;

    return 0;
}
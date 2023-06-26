#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int limiteMaximo;
    int base;

    do {
        std::cout << "INGRESE UN LIMITE MAXIMO: ";
        std::cin >> limiteMaximo;
    } while (limiteMaximo <= 0);

    do {
        std::cout << "INGRESAR UNA BASE:  ";
        std::cin >> base;
    } while (base <= 0);

    int potencia = 1;

    for (; potencia <= limiteMaximo; potencia *= base) {
        std::cout << potencia << " ";
    }

    std::cout << endl;

    return 0;
}
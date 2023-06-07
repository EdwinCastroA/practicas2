#include <iostream>

bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int contador = 0;
    int numero = 2;

    std::cout << "Tabla de los 100 primeros números primos:" << std::endl;

    while (contador < 100) {
        if (esPrimo(numero)) {
            std::cout << numero << std::endl;
            contador++;
        }

        numero++;
    }

    return 0;
}
#include <iostream>
#include <vector>

int main() {
    const int TAMANIO_VECTOR = 10;
    std::vector<int> numeros(TAMANIO_VECTOR);

    // Leer los números
    std::cout << "Ingrese 10 números enteros:" << std::endl;
    for (int i = 0; i < TAMANIO_VECTOR; i++) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    // Calcular la suma
    int suma = 0;
    for (int i = 0; i < TAMANIO_VECTOR; i++) {
        suma += numeros[i];
    }

    // Calcular la media aritmética
    double media = static_cast<double>(suma) / TAMANIO_VECTOR;

    // Mostrar los resultados
    std::cout << "Suma de los números: " << suma << std::endl;
    std::cout << "Media aritmética: " << media << std::endl;

    return 0;
}
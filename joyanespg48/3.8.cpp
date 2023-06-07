#include <iostream>
#include <cmath>

void convertirAEfectivo(double cantidad) {
    int billetes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int monedas[] = {50, 20, 10, 5, 2, 1};
    
    std::cout << "Cambio óptimo en billetes y monedas:" << std::endl;

    // Convertir a enteros para evitar errores de precisión en comparaciones
    int cantidad_entera = static_cast<int>(round(cantidad * 100));

    // Procesar los billetes
    for (int i = 0; i < sizeof(billetes) / sizeof(billetes[0]); i++) {
        int num_billetes = cantidad_entera / (billetes[i] * 100);
        if (num_billetes > 0) {
            std::cout << num_billetes << " billete(s) de " << billetes[i] << " euros" << std::endl;
            cantidad_entera -= num_billetes * (billetes[i] * 100);
        }
    }

    // Procesar las monedas
    for (int i = 0; i < sizeof(monedas) / sizeof(monedas[0]); i++) {
        int num_monedas = cantidad_entera / monedas[i];
        if (num_monedas > 0) {
            std::cout << num_monedas << " moneda(s) de " << monedas[i] << " céntimos" << std::endl;
            cantidad_entera -= num_monedas * monedas[i];
        }
    }
}

int main() {
    double cantidad;

    std::cout << "Ingrese la cantidad en euros: ";
    std::cin >> cantidad;

    convertirAEfectivo(cantidad);

    return 0;
}
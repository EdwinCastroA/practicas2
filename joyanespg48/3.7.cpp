#include <iostream>

int main() {
    int hectometros, decametros, metros;

    std::cout << "Ingrese la longitud del perímetro del terreno:" << std::endl;
    std::cout << "Hectómetros: ";
    std::cin >> hectometros;
    std::cout << "Decámetros: ";
    std::cin >> decametros;
    std::cout << "Metros: ";
    std::cin >> metros;

    // Convertir a decímetros
    int perimetro_decimetros = hectometros * 10000 + decametros * 100 + metros * 10;

    std::cout << "El perímetro del terreno es de " << perimetro_decimetros << " decímetros." << std::endl;

    return 0;
}
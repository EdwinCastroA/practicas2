#include <iostream>
#include <string>

struct Libro {
    std::string titulo;
    std::string autor;
};

int main() {
    const int MAX_LIBROS = 8;
    Libro libros[MAX_LIBROS];
    int cantidadLibros = 0;

    std::cout << "Ingrese la información de los libros:" << std::endl;

    while (cantidadLibros < MAX_LIBROS) {
        std::cout << "Libro " << cantidadLibros + 1 << ":" << std::endl;

        std::cout << "Título: ";
        std::getline(std::cin >> std::ws, libros[cantidadLibros].titulo);

        std::cout << "Autor: ";
        std::getline(std::cin >> std::ws, libros[cantidadLibros].autor);

        cantidadLibros++;

        std::cout << std::endl;

        std::string respuesta;
        std::cout << "¿Desea ingresar otro libro? (S/N): ";
        std::getline(std::cin >> std::ws, respuesta);

        if (respuesta != "S" && respuesta != "s") {
            break;
        }
    }

    std::cout << std::endl;
    std::cout << "Libros almacenados:" << std::endl;

    for (int i = 0; i < cantidadLibros; i++) {
        std::cout << "Libro " << i + 1 << ":" << std::endl;
        std::cout << "Título: " << libros[i].titulo << std::endl;
        std::cout << "Autor: " << libros[i].autor << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
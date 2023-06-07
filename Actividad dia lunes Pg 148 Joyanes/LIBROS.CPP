#include <iostream>
#include <string>
using namespace std;

struct Libro {
   string titulo;
   string autor;
};

int main() {
   Libro libros[8];
   int numLibros = 0;

   while (numLibros < 8) {
      cout << "Ingrese el titulo del libro #" << numLibros + 1 << ": ";
      getline(cin, libros[numLibros].titulo);

      cout << "Ingrese el autor del libro #" << numLibros + 1 << ": ";
      getline(cin, libros[numLibros].autor);

      numLibros++;

      if (numLibros == 8) {
         cout << "Se han almacenado el maximo de libros posible." << endl;
      } else {
         char continuar;
         cout << "¿Desea continuar ingresando libros? (S/N): ";
         cin >> continuar;

         if (continuar == 'N' || continuar == 'n') {
            break;
         }
         cin.ignore();
      }
   }

   cout << endl << "Lista de libros almacenados:" << endl;
   for (int i = 0; i < numLibros; i++) {
      cout << "Libro #" << i + 1 << endl;
      cout << "Titulo: " << libros[i].titulo << endl;
      cout << "Autor: " << libros[i].autor << endl << endl;
   }

   return 0;
}
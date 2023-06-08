#include <iostream>
#include <string>

using namespace std;

int main() {
    // Precios para cada ubicación
    double precios[] = {50.00, 80.00, 120.00, 160.00};
    string ubicaciones[] = {"general", "preferencia", "platea", "vip"};

    // Variables para almacenar la ubicación elegida y el número de entradas
    string ubicacion;
    int num_entradas;

    // Solicitar al usuario la ubicación y el número de entradas
    cout << "Ingrese la ubicacion (general, preferencia, platea o vip): ";
    cin >> ubicacion;
    cout << "Ingrese la cantidad de entradas: ";
    cin >> num_entradas;

    // Buscar el índice de la ubicación elegida
    int indice = -1;
    for (int i = 0; i < 4; i++) {
        if (ubicaciones[i] == ubicacion) {
            indice = i;
            break;
        }
    }

    // Calcular el costo total basado en la ubicación elegida y el número de entradas
    double costo_total;
    if (indice != -1) {
        costo_total = num_entradas * precios[indice];
        if (ubicacion == "vip") {
            string bebida;
            cout << "Elija su bebida (gaseosa, cerveza o agua): ";
            cin >> bebida;
            if (bebida == "gaseosa" || bebida == "cerveza") {
                costo_total += 10.00;
            } else if (bebida == "agua") {
                costo_total += 5.00;
            }
        }
    } else {
        // Si la ubicación no es válida, imprimir un mensaje de error
        cout << "Ubicacion no valida" << endl;
        return 0;
    }

    // Imprimir el costo total
    cout << "Total a pagar: $" << costo_total << endl;

    return 0;
}
//debe usar SWITCH -CASE

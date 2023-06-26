#include <iostream>
using namespace std;

int main(){
    
    int numeros[10];
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    cout << "INGRESE 10 NUMEROS:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
        if (numeros[i] > 0) {
            positivos++;
            
        } else if (numeros[i] < 0) {
            negativos++;
            
        } else {
            ceros++;
        }
    }
    cout << "CANTIDAD DE NUMEROS POSITIVOS: " << positivos << endl;
    cout << "CANTIDAD DE NUMEROS NEGATIVOS: " << negativos << endl;
    cout << "CEROS: " << ceros << endl;

    return 0;
}
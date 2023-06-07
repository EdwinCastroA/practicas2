#include <iostream>
using namespace std;

int main() {
    int array[3][5] = {
        {4, 7, 1, 3, 5},
        {2, 0, 6, 9, 7},
        {3, 1, 2, 6, 4}
    };

    // Visualizar el array en el formato deseado
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 3; i++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
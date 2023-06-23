//Salida del siguiente segmento del programa es
#include <iostream>
using namespace std;

int main() {
  int m = 3;
  int n = 5;

  //segmento A

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++)
      cout << " *";
    cout << endl;
  }

  cout << endl;

  //Segmento B 

  for (int i = n; i > 0; i--) {
    for (int j = m; j > 0; j--)
      cout << " * ";
    cout << endl;
  }

  return 0;
}

//Salida del segmento A seria:
//un triangulo de asteriscos(*).

*
 * *
 * * *
 * * * *

//Salida del segmento B seria:
//un rectangulo vertical de asteriscos(*).

 *  *  * 
 *  *  * 
 *  *  * 
 *  *  * 
 *  *  * 

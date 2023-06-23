//Codigo de programa
#include<iostream>
using namespace std;

int main(int argc, char *argv[])

{
    int i = 1 , n ;
    cin >> n;
    while ( i <= n)

      if((i % n) == 0)
          ++i;

    cout << i << endl;
    system("PAUSE");
    return 0;
    
}


// A) ¿cual es la salida si se introduce el valor n,0? 
// No tendria o no hay salida.


// B) ¿cual es la salida si se introduce el valor n,1? 
// Tendria como salida 2.


// c) ¿cual es la salida si se introduce el valor n,3? 
// Estaria en un bucle infinito, ya que no se produce una respuesta.

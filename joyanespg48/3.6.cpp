#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
float pies, pulgadas, yardas, metros, centimetros;
cout << " Introduzca pies: \n ";
cin >> pies;

pulgadas = pies * 12;
yardas = pies / 3;
centimetros = pulgadas * 2.54;
metros = centimetros / 100;
cout << " pies " << pies << endl;
cout << " pulgadas " << pulgadas << endl;
cout << " yardas " << yardas << endl;
cout << " centimetros " << centimetros << endl;
cout << " metros " << metros << endl;
system("PAUSE");
return EXIT_SUCCESS;
}
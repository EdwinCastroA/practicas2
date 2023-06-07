#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int x;
cout << " dame un numero entero ";
cin >> x;
x = 2 * x;
cout << "su doble es " << x << " su triple es " << 3 * x << endl;
system("PAUSE");
return EXIT_SUCCESS;
}
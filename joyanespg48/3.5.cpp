#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
float m, energia;
const float c = 2.997925e+10;
cout << " introduzca masa\n ";
cin >> m;
energia = c * m * m * m;
cout << " energia en ergios : " << energia;
system("PAUSE");
return EXIT_SUCCESS;
}
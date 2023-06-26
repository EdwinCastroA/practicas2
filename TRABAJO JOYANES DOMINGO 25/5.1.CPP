#include <iostream>
using namespace std;

int main() {
  int n, suma = 0;
  
  cout << "INGRESE UN VALOR POSITIVO DE n: ";
  cin >> n;
  
  for (int i = 1; i <= n; i++) {
    suma += i;
  }
  
  cout << "LA SUMA DE LOS VALORES DEL 1 AL " << n << " ES: " << suma << endl;
  
  return 0;
}
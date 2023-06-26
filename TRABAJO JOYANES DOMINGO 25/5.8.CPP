#include <iostream>
#include <math.h>
#define M 5
#define f(x) cos(3*x) - 2*x 

using namespace std;

int main(){
    for (double x = 0.0; x <= M; x += 0.5)
    cout << x << "" << f(x) << endl;
    return 0;;
}
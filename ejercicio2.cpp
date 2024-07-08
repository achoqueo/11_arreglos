#include <iostream>
using namespace std;
const int MAX = 200;
int main() {
    int n;
    cout << "Ingrese el numero de elementos: ";
    cin >> n;
    int arreglo[MAX];
    int arreglo_par[MAX], arreglo_impar[MAX];
    int numPar = 0, numImpar = 0;

    cout << "Ingrese los numeros: ";
     for (int i = 0; i < n; ++i) {
        cin >> arreglo[i];
        if (arreglo[i] % 2 == 0) {
            arreglo_par[numPar++] = arreglo[i];
        } else {
            arreglo_impar[numImpar++] = arreglo[i];
        }
    }
}

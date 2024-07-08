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

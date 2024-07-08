#include <iostream>
using namespace std;
 void numelementos (int arreglo[], int n);
 void numpares(int arreglo[], int& numpar);
 void numimpares(int arreglo[], int& numimpar);
 for (int i = 0; i < n; ++i) {
        if (arreglo[i] % 2 == 0) {
            arreglopar[numpar++] = arreglo[i];
        } else {
            arregloimpar[numimpar++] = arreglo[i];
        }
    }
int main() {
 
    int n;
    cout << "Ingrese el numero de elementos: ";
    cin >> n;
    int arreglo[MAX];
    int arreglopar[MAX], arregloimpar[MAX];
    int numpar, numimpar;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; ++i) {
        cin >> arreglo[i];
    }

}

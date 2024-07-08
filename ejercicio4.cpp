#include <iostream>
using namespace std;
void Multiplos(int arreglo[], int a, int b);
void Resultados(int arreglo[], int x);
int main() {
  int t, n;
  cout << "Ingrese el tamano del arreglo: "; cin >> t;
  cout << "Ingrese el numero requerido: "; cin >> n;
  int arreglo[t];
  Multiplos(arreglo, t, n);
  cout << "El arreglo con multiplos de " << n << " son: ";
  Resultados(arreglo, t);
  return 0;
}
void Multiplos(int arreglo[], int a, int b) {
  for (int i = 0; i < a; i++) {
    arreglo[i] = b * (i + 1);
  }
}

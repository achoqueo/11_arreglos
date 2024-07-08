#include <iostream>
using namespace std;
int main(){
    int n, a;
    string FP[9999], PG[9999];
    cout<<"Ingrese la cantidad de alumnos que hay en la clase de fundamentos de programacion:";cin>>n;
    for(int i=1;i<=n;i++){
    cout<<"Ingrese el nombre del estudiante "<<i<<" en la clase de fundamentos de programacion: "; cin>>FP[i];
    }
    cout<<"Ingrese la cantidad de alumnos que hay en la clase programacion grafica: ";cin>>a;
    for(int i=1;i<=a;i++){
    cout<<"Ingrese el nombre del estudiante "<<i<<" en la clase de programacion grafica: "; cin>>PG[i];
    }
return 0;
}

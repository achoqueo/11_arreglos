#include<iostream>
using namespace std;
int main(){
	int n,a, b, A[200];
	a=0;
	b=0;
    double Porcentaje,Promedio;
    cout<<"Ingrese la cantidad de numeros: ";cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Ingrese el numero "<<i<<":";
        cin>>A[i];
        if(A[i]==0){
            b++;
        } else{
            a=a+A[i];
        }
    }
}

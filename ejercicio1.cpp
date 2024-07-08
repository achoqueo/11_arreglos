#include<iostream>
using namespace std;

int main(){
	int n;
	int s=0;
	float cc=0;
	cout<<"Ingrese la cantidad de numeros enteros: ";cin>>n;
	int*A=new int[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero: ";cin>>A[i];
	s=s+A[i];
	if(A[i]==0){
		cc=cc+1;
	}
 }
}

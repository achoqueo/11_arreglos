#include<iostream>
using namespace std;
int tem(float a[], int b);
int main(){
	float min[7], max[7], med[7]; 
	for(int i=0; i<7; i++){
		cout<<"Dia "<<i+1<<"Ingrese la emperatura minima: "; cin>>min[i];
		cout<<"Ingrese la temperatura maxima: "; cin>>max[i];
		med[i]= (max[i]+min[i]) / 2;
	}
	cout<<"La temperatura media de cada dia es: "<<endl;
	for(int i=0; i<7; i++){
		cout<<"Dia "<<i+1<<": "<<med[i]<<" grados"<<endl;
	}
	int dia= tem(min, 7);
	cout<<"El dia "<<dia+1<<" es la menor temperatura de toda la semana con "<<min[dia]<<" grados"<<endl; 
	float t;
   	cout<<"Ingrese una temperatura: "; cin>>t; 
	cout<<"Temperaturas maximas igual a "<<t<<" grados"<<endl;
	int cc=0;
	for(int i=0; i<7; i++){
		if(t==max[i]){
			cout<<"Dia: "<<i+1<<endl;
			cc=1;
		}
	}
	if(cc==0){
		cout<<"No hay ningun dia que coincida"<<endl;
	}
	return 0;
}
int tem(float a[], int d){
	int mindia=0;
	for(int i=0; i<d; i++){
		if( a[i] < a[mindia]){
			mindia=i;
		}
	}
	return mindia;
}

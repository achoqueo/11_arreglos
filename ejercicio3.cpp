#include<iostream>
using namespace std;
int tem(float a[], int b);
int main(){
	float min[7], max[7], med[7]; 
	for(int i=0; i<7; i++){
		cout<<"Dia "<<i+1<<"Temperatura minima: "; cin>>min[i];
		cout<<"Temperatura maxima: "; cin>>max[i];
		med[i]= (max[i]+min[i]) / 2;
	}
	cout<<"Temperatura media de cada dia"<<endl;
	for(int i=0; i<7; i++){
		cout<<"Dia "<<i+1<<": "<<med[i]<<" grados"<<endl;
	}
	int dia= tem(min, 7);
	cout<<"El dia "<<dia+1<<" es la menor temperatura de toda la semana con "<<min[dia]<<" grados"<<endl; 

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

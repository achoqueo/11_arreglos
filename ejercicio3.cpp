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
}

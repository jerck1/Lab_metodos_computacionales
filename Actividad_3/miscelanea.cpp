#include <iostream>
#include <math.h>
using namespace std;
double suma(int m, double a[]){
        double sum=0;
	for(int i=0;i<m;i++){
		sum+=a[i];
		cout<<"La suma es: "<<sum<<endl;
	pow(a,2);
	}
	return sum;
}
double suma_cuadrados(int m, double a[]){
        double sum=0;
	for(int i=0;i<m;i++){
		sum+=pow(a[i],2);
		cout<<"La suma es: "<<sum<<endl;
	}
	return sum;
}
int main(){
	int n;
	cout<<"Ingrese la cantidad de números: ";cin>>n;
	double a[n]; //={1,2,3};
	a[0]=0;

	for (int i=0;i<n;i++){
		cout<<"Ingrese valor"<<i;cin>>a[i];
	}
	//Programa de la suma de números
	suma(n,a);
//	int b = 0;
//	while ( b < 10 ){
//	b++;
//	cout<<"b="<<b<<endl;
//	if(b==5){
//	break;
//	}
	
	return 0;
}

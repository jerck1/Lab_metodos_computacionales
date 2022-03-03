#include <iostream>
using namespace std;
void suma(int n,double A[],double B[],double C[]){
	for(int i=0;i<n;i++)
		C[i]=A[i]+B[i];
}
void resta(int n,double A[],double B[],double C[]){
	for(int i=0;i<n;i++)
		C[i]=A[i]-B[i];
	}
void producto_por_escalar(int n,double k,double A[],double C[]){
	for(int i=0;i<n;i++)
		C[i]=k*A[i];
}
double producto_interno(int n,double A[],double B[]){
	double d=0;
	for(int i=0;i<n;i++)
		d+=A[i]*B[i];
	return d;
	}
void imprimir(int n,double C[]){
	cout<<"(";
	for (int i=0;i<n;i++)
		cout<<C[i]<<",";
	cout<<")"<<endl;
}
void ortogonalidad(int n,double A[],double B[]){
	double d=producto_interno(n,A,B);
	if(d!=0)
		cout<<"Los vectores son ortogonales"<<endl;
	else
		cout<<"Los vectores no son ortogonales"<<endl;
}
int main(){
	int n=3;//tamaño de arrays
	double k=2.5;//escalar
       //dos arrays de entrada	
	double A[n]={1,2,3};
	double B[n]={3,4,5.};
	//donde se guardarán los resultados
	double C[n]={0,0,0};
	double d;
	//llamar a las funciones
	suma(n,A,B,C);
	imprimir(n,C);
	resta(n,A,B,C);
	imprimir(n,C);
	cout<<"Producto A*B "<<producto_interno(n,A,B)<<endl;
	ortogonalidad(n,A,B);
	return 0;
}

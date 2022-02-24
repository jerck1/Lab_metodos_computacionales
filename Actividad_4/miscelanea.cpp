#include <iostream>
#include <math.h>
using namespace std;
//funcion para la suma
double suma(int m, double a[]){
        double sum=0;
	for(int i=0;i<m;i++){
		sum+=a[i];
	}
	cout<<"La suma es: "<<sum<<endl;
	return sum;
}
//funcion para la suma de cuadrados
double suma_cuadrados(int m, double a[]){
        double sum=0;
	for(int i=0;i<m;i++){
		sum+=pow(a[i],2);
	}
	cout<<"La suma de los cuadrados es: "<<sum<<endl;
	return sum;
}
//funcion para el factorial
//Sirve en el último punto de Taylor y luego
int factorial(int n){
	int m=1;
	for(int i=1;i<=n;i++)
		m*=i;
	cout<<"Factorial: "<<m<<endl; //muestra en pantall el factorial
	return m;
}
int main(){
	int n;
	cout<<"Ingrese la cantidad de números: ";cin>>n;
	double a[n]; //={1,2,3};
	a[0]=0;

	for (int i=0;i<n;i++){
		cout<<"Ingrese valor "<<i<<" ";cin>>a[i];
	}
	//Llama a la suma de números
	suma(n,a);
	//Llama a la función factorial
	factorial(5); //calcula 5!
	return 0;
}

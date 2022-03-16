#include <iostream>
using namespace std;
void suma(double x,double y,double &z){
	//cout<<p<<endl;
	//cout<<*p<<endl;
	z=x+y;
}
void imprimir(double *x,int n,int m){
	//cout<<a<<endl;
}
int main(){
	double a=2;
	double *p;
	p=&a;//& pos mem
        //valor guardado en p: pos. mem. de a
	cout<<p<<endl;
	cout<<*p<<endl;//valor guardado en la pos. mem.
	cout<<*(&a)<<endl;
	double b[2][3]={{1,2,3},{4,5,6}};
	cout<<b<<endl;
	cout<<&b[0][0]<<endl;
	double *q;
	q=&b[0][0];
	cout<<"pos mde memoria de b"<<endl;
	for(int i=0;i<6;i++){
//	for(int j=0;j<3;j++){
		cout<<q<<endl;
		cout<<*q<<endl;
		q++;
	}
	cout<<"tamaño de 0x7ffe69fb72a0: "<<sizeof(0x7ffe69fb72a0)<<endl;
	//Ejm con funcion
	double x=1,y=3,z;
	suma(x,y,z);
	cout<<"z="<<z<<endl;
	double c[2]={1,2};
	cout<<imprimir(c,2,3);
	return 0;
}


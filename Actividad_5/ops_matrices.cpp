#include <iostream>
using namespace std;

void suma(int n,int m,double A[][3],double B[][3],double D[][3]){
	for(int j=0;j<m;j++)
		for(int i=0;i<n;i++)
			D[i][j]=A[i][j]+B[i][j];
}
int main(){
	int n=2;
	int m=3;
	double A[n][m]={{1,2,3},{4,5,6}};
	double B[n][m]={{6,5,4},{3,2,1}};
	double C[m][n]={{1,2},{3,4},{5,6}};
	double k=2.5;
//salida
	double D[n][m];
	suma(n,m,A,B,D);

	for(int j=0;j<m;j++)
	for(int i=0;i<n;i++)
		cout<<D[i][j]<<" ";
	return 0;
}

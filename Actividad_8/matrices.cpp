#include <iostream>
#include <math.h>

using namespace std;
//const int n=3;
//const int m=3;
int main(){
  int m,n;
  cout<<"Ingrese número de filas de la matriz"<<endl;
  cin>>m;//filas
  cout<<"Ingrese número de columnas de la matriz"<<endl;
  cin>>n;//columnas
  int nb=2*n;
  //A: matriz original
  //B: matriz aumentada
  double A[m][n],B[m][nb]; //double o float
  //Ingreso de los elementos de la matriz
  for(int i=0;i<m;i++){
    cout<<"Ingrese fila "<<i<<":"<<endl;
    for(int j=0;j<n;j++){
      cin>>A[i][j];
    }
  }
  //Imprimir la matriz
  cout<<"Matriz A:"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<A[i][j]<<" ";
    }
    cout<<endl;
  }
  //Definimos la matriz aumentada
  for(int i=0;i<m;i++)
    for(int j=n;j<nb;j++)
      if(i==j-n)
        B[i][j]=1;
        else
        B[i][j]=0;
  //Guardamos A en B
  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
      B[i][j]=A[i][j];
      cout<<"Matriz aumentada B antes:"<<endl;
      for(int i=0;i<m;i++){
        for(int j=0;j<nb;j++){
          cout<<B[i][j]<<" ";
          }
          cout<<endl;
          }
  //Inician los calculos desde el pivote

    //int p=0;
//for(int p=0;p<3;p++)
int p=0;
{

  //Pivotes
    for(int j=1;j<nb;j++){
      B[p][j]=B[p][j]/B[p][p];
//        cout<<j<<" "<<B[p][j]<<endl;
  }
B[p][p]=1;//asignamos 1 al pivote
cout<<"Matriz aumentada B pivote:"<<endl;
for(int i=0;i<m;i++){
  for(int j=0;j<nb;j++){
    cout<<B[i][j]<<" ";
    }
    cout<<endl;
    }
//////////////////////////////////////////
//Suma filas:
    ////
    //suma fila
  for(int k=0;k<m;k++){
    if(k!=p){
    for(int l=0;l<nb;l++){
      double tmp=B[k][p];
      cout<<"tmp"<<tmp<<endl;
      B[k][l]=B[k][l]-B[p][l]/tmp;
      }
    }
    }
    //Imprimir la matriz aumentada
    cout<<"Matriz aumentada B despues:"<<endl;
    for(int i=0;i<m;i++){
      for(int j=0;j<nb;j++){
        cout<<B[i][j]<<" ";
        }
        cout<<endl;
        }
}
  return 0;
}

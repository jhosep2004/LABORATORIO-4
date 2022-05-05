#include <iostream> 
using namespace std; 
int main (){ 
    int array[3][3]; 
    int suma1=0,suma2=0,suma3=0; 
    for(int i=0;i<3;i++){ 
        for(int j=0;j<3;j++){ 
            cout<<"ingrese numero para ["<<i<<"]["<<j<<"]: "; 
            cin>>array[i][j]; 
        } 
    } 
    for(int i=0;i<3;i++){ 
        suma1=array[0][i]+suma1; 
    } 
    for(int i=0;i<3;i++){ 
        suma2=array[1][i]+suma2; 
    } 
    for(int i=0;i<3;i++){ 
        suma3=array[2][i]+suma3; 
    } 
    if(suma1>suma2 && suma1>suma3){ 
        cout<<"La fila mayor es la 1 con "<<suma1; 
    } 
    if(suma2>suma1 && suma2>suma3){ 
        cout<<"La fila mayor es la 2 con "<<suma2; 
    } 
    if(suma3>suma2 && suma3>suma1){ 
        cout<<"La fila mayor es la 3 con "<<suma3; 
    } 
    return 0; 
}
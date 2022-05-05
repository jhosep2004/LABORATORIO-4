#include <iostream> 
using namespace std; 
int main(){ 
    int array[3][5]; 
    for(int i=0;i<3;i++){ 
        for(int j=0;j<5;j++){ 
            cout<<"valor: "; 
            cin>>array[i][j]; 
        } 
    } 
    int suma=0; 
    for(int i=0;i<3;i++){ 
        for(int j=0;j<5;j++){
            if (i>0 and i%2==0){ 
                suma=suma+array[i][j]; 
            } 
        } 
    } 
    cout<<"la suma de los numeros en lineas pares es: "<<suma; 
}
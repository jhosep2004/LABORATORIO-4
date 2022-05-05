#include <iostream> 
using namespace std; 
void buscar(int a[8]){ 
    int num,cont=0; 
    cout<<"Numero a buscar: "; 
    cin>>num; 
    for(int i=0;i<8;i++){ 
        if (num==a[i]){ 
            cont=cont+1;
        } 
    } 
    if (cont>=1){ 
        cout<<"verdadero"; 
    } 
    else{ 
        cout<<"falso"; 
    } 
} 
int main(){ 
    int array[8]; 
    for (int i=0;i<8;i++){ 
        cout<<"numero: "; 
        cin>>array[i]; 
    } 
    buscar(array);
}
#include <iostream> 
using namespace std; 
void mostrar(string a[20][20]){ 
    for(int i=0;i<20;i++){ 
        for (int j=0;j<20;j++){ 
            cout<<a[i][j]<<" "; 
        } 
        cout<<endl; 
    } 
} 
void moverarribaabajo(string a[20][20]){ 
    int num1; 
    cout<<" Para donde quiere moverlo[0 arriba/1 abajo]: "; 
    cin>>num1; 
    if(num1==0){ 
        for(int i=0;i<20;i++){ 
            for (int j=0;j<20;j++){ 
                a[i][j]=" "; 
            } 
        } 
        for(int i=0;i<10;i++){ 
            for (int j=5;j<16;j++){ 
                a[i][j]="*"; 
            } 
        } 
    } 
    else if(num1==1){ 
        for(int i=0;i<20;i++){ 
            for (int j=0;j<20;j++){ 
                a[i][j]=" ";
            } 
        } 
        for(int i=10;i<20;i++){ 
            for (int j=5;j<16;j++){ 
                a[i][j]="*"; 
            } 
        } 
    } 
    else{ 
        cout<<" usted ingreso incorrectamente el numero"<<endl; 
    } 
} 
void moverizqdere(string a[20][20]){ 
    int num2; 
    cout<<" Para donde quiere moverlo[0 izquierda/1 derecha]: "; 
    cin>>num2; 
    if(num2==0){ 
        for(int i=0;i<20;i++){ 
            for (int j=0;j<20;j++){ 
                a[i][j]=" "; 
            } 
        } 
        for(int i=5;i<16;i++){ 
            for (int j=0;j<10;j++){ 
                a[i][j]="*"; 
            } 
        } 
    } 
    else if(num2==1){ 
        for(int i=0;i<20;i++){ 
            for (int j=0;j<20;j++){ 
                a[i][j]=" "; 
            } 
        } 
        for(int i=5;i<16;i++){ 
            for (int j=10;j<20;j++){ 
                a[i][j]="*"; 
            } 
        } 
    } 
    else{ 
        cout<<"usted ingreso mal,bay"<<endl; 
    } 
} 
int main(){
    string matriz[20][20]; 
    for(int i=5;i<16;i++){ 
        for (int j=5;j<16;j++){ 
            matriz[i][j]="*"; 
        } 
    } 
    mostrar(matriz); 
    cout<<endl; 
    cout<<endl; 
    moverarribaabajo(matriz); 
    mostrar(matriz); 
    cout<<endl; 
    cout<<endl; 
    moverizqdere(matriz); 
    mostrar(matriz); 
}
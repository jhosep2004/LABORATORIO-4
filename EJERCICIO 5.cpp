#include <iostream> 
using namespace std; 
void nuevo(string a[10],string b[10],string c[10]){ 
    int numero; 
    cout<<"cuantos productos quiere añadir: "; 
    cin>>numero; 
    for (int i=10;i<10+numero;i++){ 
        cout<<"DATOS DE PRODUCTO "<<i+1<<endl; 
        cout<<"nombre del producto: "; 
        getline(cin,a[i]); 
        cout<<"precio del producto: "; 
        getline(cin,b[i]); 
        cout<<"cantidad de stock: "; 
        getline(cin,c[i]); 
        cout<<endl; 
    } 
} 
void buscar(string a[10],string b[10],string c[10]){ 
    string busca; 
    cout<<"Producto a buscar: "; 
    cin>>busca; 
    for (int i=0;i<10;i++){ 
        if(busca==a[i]){
            cout<<"el producto es : "<<a[i]<<endl; 
            cout<<"cuesta: "<<b[i]<<endl; 
            cout<<"hay "<<c[i]<<" productos"; 
        } 
    } 
} 
void modificar(string a[10],string b[10],string c[10]){ 
    string producto; 
    cout<<"ingrese producto a modificar: "; 
    cin>>producto; 
    for (int i=0;i<10;i++){ 
        string num; 
        if(producto==a[i]){ 
            cout<<"que decea modificar(1 para precio/2 para stock): "; 
            getline(cin,num); 
            if(num=="1"){ 
                cout<<"ingrese nuevo precio: "; 
                cin>>b[i]; 
            } 
            else if(num=="2"){ 
                cout<<"ingrese nuevo stock: "; 
                cin>>c[i]; 
            } 
            else{ 
                cout<<"ustd ingreso el numero mal"; 
            } 
        } 
        else{ 
            cout<<"ese producto no esta disponible"; 
        } 
    } 
} 
int main(){ 
    string nombreproducto[10]; 
    string precio[10]; 
    string stock[10]; 
    for (int i=0;i<10;i++){ 
        cout<<"DATOS DE PRODUCTO "<<i+1<<endl; 
        cout<<"nombre del producto: ", 
        getline(cin,nombreproducto[i]); 
        cout<<"precio del producto: "; 
        getline(cin,precio[i]); 
        cout<<"cantidad de stock: "; 
        getline(cin,stock[i]); cout<<endl;
    }
    nuevo(nombreproducto,precio,stock); 
    cout<<endl; 
    modificar(nombreproducto,precio,stock); 
    cout<<endl; 
    buscar(nombreproducto,precio,stock); 
}
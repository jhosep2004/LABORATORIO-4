#include <iostream> 
using namespace std; 
int main(){ 
    string nombres[3]; 
    string apellidos[3]; 
    string edad[3]; 
    string dni[3]; 
    for (int i=0;i<3;i++){ 
        cout<<"DATOS DE LA PERSONA "<<i+1<<endl; 
        cout<<"nombre: ", 
        getline(cin,nombres[i]); 
        cout<<"apellido: "; 
        getline(cin,apellidos[i]); 
        cout<<"edad: "; 
        getline(cin,edad[i]); 
        cout<<"DNI: "; 
        getline(cin,dni[i]); 
        cout<<endl; 
    } 
    for(int i=0;i<3;i++){ 
        cout<<"DATOS PERSONALES DE LA PERSONA "<<i+1<<endl; 
        cout<<"nombre: "<<nombres[i]<<endl; 
        cout<<"apellido: "<<apellidos[i]<<endl; 
        cout<<"edad: "<<edad[i]<<endl; 
        cout<<"dni: "<<dni[i]<<endl; 
    } 
}
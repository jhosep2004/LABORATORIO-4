#include <iostream> 
using namespace std; 
bool primo (int n){ 
    for(int i = 2; i <= n ; i++){ 
        if(n % i == 0){ 
            if(n == i){ 
                return true; 
            } 
            else { 
                return false; 
            } 
        } 
    } return false; 
} 
int main(){ 
    int array[25]; 
    int j=0; 
    for(int i = 2 ; i <=100 ; i++){ 
        if(primo(i)==true){ 
            array[j]=i;
            j++; 
        } 
    } 
    for(int i = 0 ; i <25 ; i++){ 
        cout<<array[24-i]<<" "; 
    } 
    return 0; 
}
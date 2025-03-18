#include <iostream>
using namespace std;

int primo(int a){
    int i;
    int divisores = 0;
    
    for(i = 1; i <= a; i++){
        if(a % i == 0){
            divisores += 1;
        }   
    }
    
    if(divisores > 2){
        return 0;
    }
    
    return 1;
}

int main() {
    int a;
    
    cout << "Digite um número: " << endl;
    cin >> a;
    
    if(primo(a) == 1){
        cout << "Número primo";
    }else{
        cout << "Não é primo";
    }
    
    return 0;
}
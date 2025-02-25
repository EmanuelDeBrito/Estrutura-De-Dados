// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int v[5];
    int numero;
    int i;
    int j;
    
    for(i = 0; i < 5; i++){
        cout << "Digite um número:" << endl;
        cin >> v[i];
    }
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(v[j] > v[i]){
                numero = v[i];
                v[i] = v[j];
                v[j] = numero;
            }
        }
    }
    
    for(i = 0; i < 5; i++){
        cout << v[i] << " ";
    }

    return 0;
}
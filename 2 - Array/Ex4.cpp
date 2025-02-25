// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Array onde serão armazenados os números
    int v[3];
    
    // Array onde será calculado os fatoriais
    int w[3] = { 1, 1, 1 };
    
    // Variaveis de laço
    int i;
    int j;
   
    for(i = 0; i < 3 ; i++){
        // Recebendo e Armazenando os números no array
        cout << "Digite um valor: " << endl;
        cin >> v[i];
    }
   
    for(i = 0; i < 3; i++){
        // Pegando cada número e fazendo o fatorial
        for(j = v[i]; j > 1; j--){
            // Fazendo a multiplicação
            w[i] *= j;
        }
        
        // Mostrando o resultado de cada fatorial feito
        cout << "Fatorial da posição " << i + 1 << endl;
        cout << w[i] << endl;
    }
     
    return 0;
}
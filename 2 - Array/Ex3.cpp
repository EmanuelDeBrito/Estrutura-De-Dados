// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Variavel de Array
    char palavra[10];
    
    // Variavel que armazena o tamanho da palavra
    int tamanho;
    
    // Variavel do laço
    int i;
    
    // Recebendo o tamanho da palavra
    cout << "Digite a quantidade de letras da palavra" << endl;
    cin >> tamanho;
   
    for(i = 0; i < tamanho; i++){
        // Recebendo as letras e amazenando no array
        cout << "Digite a letra: " << endl;
        cin >> palavra[i];
    }
    
    // Mostrando a palavra ao inverso
    cout << "Palavra inversa: ";
    for(i = tamanho; i >= 0; i--){
        cout << palavra[i];
    }

    return 0;
}
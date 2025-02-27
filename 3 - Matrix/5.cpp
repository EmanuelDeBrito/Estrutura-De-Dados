#include <iostream>
using namespace std;

int main()
{
    // Variavel matriz de ordem 6
    int m[6][6];
    
    // Variavel que vai armazenar o produto dos números abaixo da diagonal principal
    int produto = 1;
    
    // Variavel que pega os números das diagonais - Inicializo ela como 1 porque a diagonal 0 não tem números ao lado dela
    int auxiliar = 1;
    
    // Variaveis de laço
    int i;
    int j;
    
    // Populando o vetor
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            cout << "Digite o número da linha " << i + 1 << " e da coluna " << j + 1 << endl;
            cin >> m[i][j];
        }
    }
    
    // Percorro todas as linhas
    for(i = 1; i < 6; i++){
        // Faço um for que decrementa percorrendo entre os números que estão a esquerda do número da diagonal
        for(j = (auxiliar - 1); j >= 0; j--){
            // Armazenando na variável produto o produto de cada número a esquerda do número da diagonal
            produto *= m[i][j];    
        }
        
        // Incrementando o indice da diagonal 
        auxiliar++;
    }
    
    // Exibindo o produto   
    cout << "Produto: " << produto;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    // Declaração dos arrays
    int numeros[10];
    int numerosInverso[10];
   
    // Variáveis Auxiliares
    
    // Variavel auxiliar onde guardo o número enviado
    int numero; 
    
    // Contador de quantos números foram digitados
    int contador; 
    
    // Variável do laço
    int i; 
   
    for(i = 0; i < 10; i++){
        // Recebendo número do usuário
        cout << "Digite o " << i + 1 << " número" << endl;
        cin >> numero;
       
        // Verificando se o número não é negativo
        if(numero < 0) break;
        
        // Adicionando o número no array
        numeros[i] = numero;
        
        // incrementando na varivel contador
        contador += 1;
    }
   
    for(i = 0; i < contador; i++){
        // Invertendo o valor de cada número do loop numeros
        numerosInverso[i] = numeros[i] * -1;
    }
   
    for(i = 0; i < contador; i++){
        // Mostrando cada valor invertido
        cout << "Array inverso posição " << i + 1 << endl;
        cout << numerosInverso[i] << endl;
    }

    return 0;
}
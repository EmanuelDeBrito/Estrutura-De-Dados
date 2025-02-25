#include <iostream>
using namespace std;

int main() {
    
    // Array de numeros
    int numeros[100];
    
    // Varivel auxiliar para guardar o número
    int numero;
    
    // Variavel o último número
    int ultimoNumero;
    
    // Varivel que conta quantos números são iguais ao último
    int contador = 0;
    
    // Variaveis de laço
    int i;
    int j;
   
    for(i = 0; i < 100; i++){
        // Recebendo o número
        cout << "Digite um número: " << endl;
        cin >> numero;
        
        // Verificando se o número passado é 0
        if(numero == 0){
            // armazena o último número antes do zero na variável 
            ultimoNumero = numeros[i - 1];
            break;
        }
        
        // Adicionando o número passado no array
        numeros[i] = numero;
    }
   
    for(j = 0; j < i - 1; j++){
        // Verificando quantos números são iguais ao último
        if(numeros[j] == ultimoNumero) contador++;
    }
    
    // Mostrando quantos números foram iguais
    cout << "Números iguais ao: " << ultimoNumero << " (ultimo)\n";
    cout << contador;

    return 0;
}
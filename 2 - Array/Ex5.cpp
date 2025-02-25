// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Varivel do array
    int v[4];
    
    // Variavel que armazena o maior número
    int maior;
    
    // Variável que armazena o menor número
    int menor;
    
    // Varivel que armazena a quantidade de números pares
    float pares = 0;
    
    // Variavel que armazena o total para cálculo da média
    int total = 0;
    
    // Variavel do laço
    int i;
   
    for(i = 0; i < 4; i++){
        cout << "Digite o número: " << endl;
        cin >> v[i];
       
       // Na primeira iteração o 1 númerpo será o maior e menor
        if(i == 0){
            maior = v[i];
            menor = v[i];
        }
        
        // Nas iterações que não sejam a primeira
        if(i != 0){
            // Verificando se o número é maior que o maior
            if(v[i] > maior){
                maior = v[i];
            }
            
            // Verificando se o número é menor que o menor
            if(v[i] < menor){
                menor = v[i];
            }
        }
        
        // Verificando se o número é par
        if(v[i] % 2 == 0){
            pares += 1;
        }
        
        // Somando o número de cada iteração
        total += v[i];
    }
   
   
   // Mostrando o maior, menor, percentualo de pares e média
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Percentual Pares: " << (pares / i * 100) << endl;
    cout << "Média: " << total / i << endl;
   
    return 0;
}
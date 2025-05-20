#include <iostream>
using namespace std;

int main()
{
    // Derclarando variaveis e ponteiros
    int a;
    int b;
    int soma;
    int *point1;
    int *point2;
    
    // Recebendo os valores de A e B
    cout << "Digite o primeiro e segundo valor" << endl;
    cin >> a >> b;
    
    // Associando espaços de memória aos ponteiros
    point1 = &a;
    point2 = &b;
    
    // Mostrando os endereços de memória
    cout << &a << endl;
    cout << &b << endl;
    cout << &point1 << endl;
    cout << &point2 << endl;
    
    // Somando os espaços de memória A e B
    soma = *point1 + *point2;
    
    // Atribuindo o espaço de memoria soma ao ponteiro    
    *point1 = soma;
    
    // Exibindo conteudo do ponteiro
    cout << *point1;

    return 0;
}
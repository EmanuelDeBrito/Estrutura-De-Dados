#include <iostream>
using namespace std;

int main()
{
    // Declaração de variaveis, vetor e ponteiros 
    int a = 1;
    int b = 2;
    int c = 3;
    int v[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
    int *pt1;
    int *pt2;
    int *pt3;
    int *vaux;
    
    // Atribuindo endereços de memória aos ponteiros
    pt1 = &a;
    pt2 = &b;
    pt3 = &c;
    
    // Mostrando os endereços de memória
    cout << &a << endl;
    cout << &pt1 << endl;
    
    // Exibindo o conteudo do endereço de memória do ponteiro
    cout << *pt1 << endl;
    
    // Atribuindo e mostrando counteúdo do endereço de memória do ponteiro
    vaux = &v[0];
    cout << *vaux << endl;
    
    // Usando ponteiro no vetor
    for(int i = 0; i < 10; i = i + 2){
        *vaux += 10;
        cout << "Valor índice v[" << i << "]" << *vaux << endl;
        vaux = vaux + 2;
    }

    return 0;
}
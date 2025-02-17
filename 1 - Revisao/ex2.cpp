#include <iostream>
using namespace std;

int main()
{
    int largura;
    int altura;
    
    cout << "Digite a largura do retângulo" << endl;
    cin >> largura;
    cout << "Digite a altura do retângulo" << endl;
    cin >> altura;
    
    int area = largura * altura;
    
    cout << "Área do retângulo: " << area << endl;
    
    return 0;
}
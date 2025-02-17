#include <iostream>
using namespace std;

int main()
{
    int base;
    int altura;
    
    cout << "Digite a base do triângulo" << endl;
    cin >> base;
    cout << "Digite a altura do triângulo" << endl;
    cin >> altura;
    
    int area = (base * altura) / 2;
    
    cout << "Área do triângulo: " << area << endl;
    
    return 0;
}
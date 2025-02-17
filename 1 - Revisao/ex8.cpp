#include <iostream>
using namespace std;

int main()
{
    int lado1;
    int lado2;
    int lado3;
    
    cout << "Digite primeiro lado do triângulo: : " << endl;
    cin >> lado1;
    cout << "Digite segundo lado do triângulo: : " << endl;
    cin >> lado2;
    cout << "Digite terceiro lado do triângulo: : " << endl;
    cin >> lado3;
    
    if((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3)){
        cout << "Equilátero";
    }else if((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)){
        cout << "Isósceles";
    }else{
        cout << "Escaleno";
    }
    
    return 0;
}
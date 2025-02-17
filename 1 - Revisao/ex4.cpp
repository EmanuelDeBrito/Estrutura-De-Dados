#include <iostream>
using namespace std;

int main()
{
    int base1;
    int base2;
    int altura;
    
    cout << "Digite a primeira base do trapézio" << endl;
    cin >> base1;
    cout << "Digite a segunda base do trapézio" << endl;
    cin >> base2;
    cout << "Digite a altura do trapézio" << endl;
    cin >> altura;
    
    int area = ((base1 + base2) * altura) / 2;
    
    cout << "Área do trapézio: " << area << endl;
    
    return 0;
}
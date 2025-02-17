#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Digite um número: " << endl;
    cin >> n;
    
    n % 2 == 0 ? cout << "Número Par" : cout << "Número Ímpar";
    
    return 0;
}
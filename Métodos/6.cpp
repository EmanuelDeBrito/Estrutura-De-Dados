#include <iostream>
using namespace std;

int quadrado(int n){
    int res = n * n;
    
    return res;
}

int soma(int a, int b){
    int res = quadrado(a) + quadrado(b);
    
    return res;
}

int main() {
    int a, b;
    
    cout << "Digite o primeiro número: " << endl;
    cin >> a;
    cout << "Digite o segundo número: " << endl;
    cin >> b;
    
    cout << "Resultado da soma dos quadrados dos dois números: " << soma(a, b);
    
    return 0;
}
#include <iostream>
using namespace std;

int fatorial(int n){
    int i;
    int res = 1;
    
    for(i = n; i > 1; i--){
        res *= i;
    }
    
    return res;
}

int main() {
    int a;
    
    cout << "Digite o número para cálculo do fatorial: " << endl;
    cin >> a;
    
    cout << "Fatorial de " << a << ": " << fatorial(a);
    
    return 0;
}
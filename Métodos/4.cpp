#include <iostream>
using namespace std;

int soma(int a, int b){
    int res = a + b;
    
    return res;
}

int subtracao(int a, int b){
    int res = a - b;
    
    return res;
}

int multiplicacao(int a, int b){
    int res = a * b;
    
    return res;
}

int divisao(int a, int b){
    int res = a / b;
    
    return res;
}

int main() {
    int a, b;
    char operacao;
    
    cout << "Digite o primeiro número: " << endl;
    cin >> a;
    cout << "Digite o segundo número: " << endl;
    cin >> b;
    cout << "Digite a operação sendo as opções(+, -, *, /): " << endl;
    cin >> operacao;
    
    switch(operacao){
        case '+':
            cout << "Resultado da soma: " << soma(a, b);
            break;
        case '-':
            cout << "Resutaldo da subtração: " << subtracao(a, b);
            break;
        case '*':
            cout << "Resultado da multiplicação: " << multiplicacao(a, b);
            break;
        case '/':
            cout << "Resultado da divisão: " << divisao(a, b);
            break;
    }
    
    return 0;
}
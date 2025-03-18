#include <iostream>
using namespace std;

float celsius(float fahrenheit){
    float res = (fahrenheit - 32) * 5 / 9;
    
    return res;
}

float fahrenheit(float celsius){
    float res = (celsius * 9 / 5) + 32;
    
    return res;
}

int main() {
    
    float a, b;
    
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> a;
    cout << "Digite a temperatura em Celsius: ";
    cin >> b;
    
    cout << "Temperatura de Fahrenheit para Celsius: " << celsius(a) << endl;
    cout << "Temperatura de Celsius para Fahrenheit: " << fahrenheit(b) << endl;
    
    return 0;
}
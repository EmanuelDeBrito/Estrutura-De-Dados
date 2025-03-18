#include <iostream>
using namespace std;

int bissexto(int ano){
    
    if((ano % 4 == 0) && (ano % 100 != 0)){
        return 1;
    }
    
    return 0;
}

int main() {
    int ano;
    
    cout << "Digite o ano para ver se é bissexto: ";
    cin >> ano;
    
    if(bissexto(ano) == 1){
        cout << "Ano é bissexto";
    }else{
        cout << "Não é bissexto";
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int ano;
    
    cout << "Digite o ano para saber se ele é bissexto: " << endl;
    cin >> ano;
    
    if((ano % 4 == 0 || ano % 400 == 0) && !(ano % 100 == 0)){
        cout << "É bissexto";
    }else{
        cout << "Não é bissexto";
    }
    
    return 0;
}
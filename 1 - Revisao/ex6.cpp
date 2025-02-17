#include <iostream>
using namespace std;

int main()
{
    int idade;
    
    cout << "Digite sua idade" << endl;
    cin >> idade;
    
    if(idade >= 0){
        if(idade >= 0 && idade <= 11){
            cout << "Criança";
        }else if(idade >= 12 && idade <= 17){
            cout << "Adolescente";
        }else if(idade >= 18 && idade <= 49){
            cout << "Adulta";
        }else{
            cout << "Idoso";
        }
    }else{
        cout << "Digite uma idade válida";
    }
    
    return 0;
}
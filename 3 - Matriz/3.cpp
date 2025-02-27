#include <iostream>
using namespace std;

int main()
{
    // Varivel de matriz
    int m[2][3];
    
    // Variveis de laço
    int i;
    int j;
    
    // Laço de repetição que popula a matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            cout << "Digite o número da linha " << i + 1 << " da coluna " << j + 1 << endl;
            cin >> m[i][j];
        }
    }
    
    // Aqui inverto, ao invés de mostrar cada coluna de cada linha mostro cada linha de cada coluna 
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            cout << m[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
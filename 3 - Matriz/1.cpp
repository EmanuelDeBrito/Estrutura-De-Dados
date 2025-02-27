#include <iostream>
using namespace std;

int main() {
    int m[4][4];
    int diagonal = 0;
    int soma = 0;
    int i;
    int j;
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cout << "Digite o número da linha " << i << " da coluna "<< j << endl;
            cin >> m[i][j];
        }
        soma += m[i][diagonal];
        diagonal++;
    }
    
    cout << "Soma das diagonais: " << soma;

    return 0;
}
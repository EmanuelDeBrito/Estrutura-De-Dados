#include <iostream>
using namespace std;

int main() {
    int m[3][5];
    int v[3] = { 0, 0, 0 };
    int i;
    int j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            cout << "Número da linha " << i + 1 << " coluna " << j + 1 << endl;
            cin >> m[i][j];
            v[i] += m[i][j];
        }
    }
    
    for(i = 0; i < 3; i++){
        cout << "Soma da linha " << i + 1 << ": " << v[i] << endl;
    }

    return 0;
}
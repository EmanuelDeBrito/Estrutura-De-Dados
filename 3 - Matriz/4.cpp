#include <iostream>
using namespace std;

int main() {
    int m[3][3];
    int i;
    int j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << "Número linha " << i + 1 << " coluna " << j + 1 << endl;
            cin >> m[i][j];
        }
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << m[i][j] << "\t";
        }
        cout << "\n";
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if((i + j) % 2 != 0){
                cout << m[i][j] << endl;
            }
        }
    }

    return 0;
}
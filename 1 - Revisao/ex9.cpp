#include <iostream>
using namespace std;

int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    
    cout << "Digite quatro números: " << endl;
    cin >> n1 >> n2 >> n3 >> n4;
    
    if((n1 > n2) && (n1 > n3) && (n1 > n4)){
        cout << "Maior: " << n1 << endl;
    }else if((n2 > n1) && (n2 > n3) && (n2 > n4)){
        cout << "Maior: " << n2 << endl;
    }else if((n3 > n1) && (n3 > n2) && (n3 > n4)){
        cout << "Maior: " << n3 << endl;
    }else if((n4 > n1) && (n4 > n2) && (n4 > n3)){
        cout << "Maior: " << n4 << endl;
    }else{
        cout << "Maior: Há números iguais" << endl;
    }
    
    if((n1 < n2) && (n1 < n3) && (n1 < n4)){
        cout << "Menor: " << n1 << endl;
    }else if((n2 < n1) && (n2 < n3) && (n2 < n4)){
        cout << "Menor: " << n2 << endl;
    }else if((n3 < n1) && (n3 < n2) && (n3 < n4)){
        cout << "Menor: " << n3 << endl;
    }else if((n4 < n1) && (n4 < n2) && (n4 < n3)){
        cout << "Menor: " << n4 << endl;
    }else{
        cout << "Menor: Há números iguais" << endl;
    }
    
    int media = (n1 + n2 + n3 + n4) / 4;
    
    cout << "Média: " << media << endl;
    
    return 0;
}
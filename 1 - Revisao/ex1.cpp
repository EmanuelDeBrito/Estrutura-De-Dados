#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    
    cout << "Valor de A: " << endl;
    cin >> a;
    cout << "Valor de B: " << endl;
    cin >> b;
    cout << "Valor de C: " << endl;
    cin >> c;
    
    int delta = pow(b, 2) - (4 * a * c);
    
    if(delta >= 0){
        int x1 = (-(b) - sqrt(delta)) / (2 * a);
        int x2 = (-(b) + sqrt(delta)) / (2 * a);
        
        cout << "Valor de X1: " << x1 << endl;
        cout << "Valor de X2: " << x2 << endl;
    }

    return 0;
}
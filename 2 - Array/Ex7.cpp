#include <iostream> 
using namespace std;   
int main() {     
  int v1[4];     
  int v2[4];     
  char v3[4];     
  int v4[4];     
  int i;          
  
  cout << "A - Adição | S - Subtração | M - Multiplicação | D - Divisão" << endl;          
  
  for(i = 0; i < 4; i++){         
    cout << "Digite o " << i + 1 << " número do primeiro array" << endl;         
    cin >> v1[i];         
    cout << "Digite o " << i + 1 << " número do segundo array" << endl;         
    cin >> v2[i];         
    cout << "Digite a " << i + 1 << " operação" << endl;         
    cin >> v3[i];                  
    
    if(v3[i] == 'A'){             
      v4[i] = v1[i] + v2[i];         
    }else if(v3[i] == 'S'){             
      v4[i] = v1[i] - v2[i];         
    }else if(v3[i] == 'M'){             
      v4[i] = v1[i] * v2[i];         
    }else if(v3[i] == 'D'){             
      v4[i] = v1[i] / v2[i];         
    }     
  }          
  
  for(i = 0; i < 4; i++){         
    cout << "Resultado da " << i + 1 << " conta" << endl;         
    cout << v4[i] << endl;     
  }       
  
  return 0; 
}

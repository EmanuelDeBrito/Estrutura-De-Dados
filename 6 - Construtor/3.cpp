#include <iostream>
using namespace std;
 
class Comparavel{
    // Atributo da classe privado
    int n;
    
    public:
        // Construtor
        Comparavel(int n){
            this->n = n;
        }
        
        // Método para mostrar mensagens na tela
        void mostrarMensagem(string mensagem){
            cout << mensagem << endl;
        }
        
        // Método que verifica se o número passado é maior ou igual ao atributo n        
        bool maiorOuIgual(int n){
            if(this->n >= n){
                mostrarMensagem("É maior ou igual");
                return true;
            }else{
                mostrarMensagem("Não é maior ou igual");
                return false;
            }
        }
        
        // Método que verifica se o número passado é menor ou igual ao atributo n
        bool menorOuIgual(int n){
            if(this->n <= n){
                mostrarMensagem("É menor ou igual");
                return true;
            }else{
                mostrarMensagem("Não é maior ou igual");
                return false;
            }
        }
        
        // Método que verifica se o número passado é diferente do atributo n
        bool diferente(int n){
            if(this->n != n){
                mostrarMensagem("É diferente");
                return true;
            }else{
                mostrarMensagem("É igual");
                return false;
            }
        }
};
 
int main()
{   
    // Criando instância
    Comparavel c1(5);
    
    // Usando os métodos
    c1.maiorOuIgual(4);
    c1.menorOuIgual(6);
    c1.diferente(5);
 
    return 0;
}
#include <iostream>
using namespace std;
 
class Conta{
    public:
    
        // Atributos da conta
        int numero;
        double saldo;
        double limite;
        string nome;
        
        // Método construtor        
        Conta(int numero, double saldo, double limite, string nome){
            this->numero = numero;
            this->saldo = saldo;
            this->limite = limite;
            this->nome = nome;
        }
        
        // Método que verifica o saldo disponível
        void verificarSaldo(){
            cout << "Saldo disponível: R$" << this->saldo << endl;
        }
        
        // Método de saque
        bool saca(double valor){
            if(this->saldo - valor >= 0){
                this->saldo -= valor;
                cout << "Saque no valor de R$" << valor << " feito com sucesso" << endl;
                this->verificarSaldo();
                return true;
            }else{
                cout << "Saldo insuficiente" << endl;
                this->verificarSaldo();
                return false;
            }
        }
        
        // Método de depósito        
        void deposita(double valor){
            if(valor > 0){
                this->saldo += valor;
                cout << "Valor de R$" << valor << " depositado com sucesso" << endl;
                this->verificarSaldo();
            }else{
                cout << "Digite um valor válido" << endl;
            }
        }
        
        // Método de transferência
        bool transfere(Conta &destino, double valor){
            if(this->saldo - valor >= 0){
                this->saldo -= valor;
                destino.saldo = valor;
                cout << "Transferência para " << destino.nome << " feita com sucesso no valor de R$" << valor << endl;
                verificarSaldo();
                return true;
            }else{
                cout << "Saldo insuficiente";
                verificarSaldo();
                return false;
            }
        }
};
 
int main()
{
    Conta conta1(1, 0, 1000, "Emanuel");
    Conta conta2(2, 0, 1000, "Viviane");
    
    conta1.deposita(1000);
    conta1.transfere(conta2, 500);
 
    return 0;
}
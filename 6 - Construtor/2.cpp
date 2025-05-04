#include <iostream>
using namespace std;
 
class EntradaDeCinema{
    public:
        // Atributos da classe
        int diaFilme;
        float horarioFilme;
        int salaFilme;
        float valorFilme;
        
        // Construtor        
        EntradaDeCinema(int diaFilme, float horarioFilme, int salaFilme, float valorFilme){
            this->diaFilme = diaFilme;
            this->horarioFilme = horarioFilme;
            this->salaFilme = salaFilme;
            this->valorFilme = valorFilme;
        }
        
        // Método que ajuda no cálculo dos descontos
        float calculaDesconto(float valorTotal, float porcentagem){
            float res = (porcentagem * 100) / valorTotal;
            return res;
        }
        
        // Método que verifica desconto para menor de idade
        void calculaDescontoMenorIdade(int idadeCliente){
            if(idadeCliente < 12){
                this->valorFilme -= calculaDesconto(this->valorFilme, 50);
                cout << "Desconto de menor idade aplicado" << endl;
            }else{
                cout << "Você não tem direito a este benefício" << endl;
            }
        }
        
        // Método que verifica desconto para estudante
        void calculaDescontoEstudante(int numeroCarteira, int idadeEstudante){
            if((idadeEstudante >= 12) && (idadeEstudante <= 15)){
                this->valorFilme -= calculaDesconto(this->valorFilme, 40);
                cout << "Desconto de 40 por cento aplicado" << endl;
            }else if((idadeEstudante >= 16) && (idadeEstudante <= 20)){
                this->valorFilme -= calculaDesconto(this->valorFilme, 30);
                cout << "Desconto de 30 por cento aplicado" << endl;
            }else{
                this->valorFilme -= calculaDesconto(this->valorFilme, 20);
                cout << "Desconto de 20 por cento aplicado" << endl;
            }
        }
    
        // Método que verifica desconto a partir do horário do filme        
        void calculaDescontoHorario(){
            if(this->horarioFilme < 16){
                this->valorFilme -= calculaDesconto(this->valorFilme, 10);
                cout << "Desconto de 10 por cento aplicado" << endl;
            }
        }
        
        // Método que imprime o ingresso
        void imprimirIngresso(){
            cout << "Dia do filme: " << this->diaFilme << endl;
            cout << "Horário do filme: " << this->horarioFilme << endl;
            cout << "Sala do filme: " << this->salaFilme << endl;
            cout << "Valor do filme: " << this->valorFilme << endl;
        }
};
 
 
int main()
{   
    // Instância da classe
    EntradaDeCinema entrada(10, 17, 5, 100);
    
    // Usando os métodos    
    entrada.calculaDescontoMenorIdade(15);
    entrada.calculaDescontoEstudante(123, 15);
    entrada.calculaDescontoHorario();
    entrada.imprimirIngresso();
    
    return 0;
}
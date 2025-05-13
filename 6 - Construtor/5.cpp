#include <iostream>
using namespace std;

class Calendario{
    public:
        int mes;
        int ano;
        
        Calendario(int mes, int ano){
            this->mes = mes;
            this->ano = ano;
        }
        
        bool bissexto(){
            if((this->ano % 4 == 0) && (this->ano % 100 != 0) || (this->ano % 400 == 0)){
                return true;
            }else{
                return false;
            }
        }
        
        int diaDaSemana(int dia, int mes, int ano){
            int f = ano + dia + 3 * (mes - 1) - 1; 
            
            if(mes < 3){
                ano -= 1;
            }else{
                f -= int(0.4 * mes + 2.3);
            }
            
            f += int(ano / 4) - int((ano / 100 + 1) * 0.75);
            f %= 7;
            
            return f + 1;
        }
        
        void imprimirCalendario(){
            cout << "DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n";
            
            short tamanhoDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            
            // Observa se o ano é bissexto
            if(bissexto() == true){
                tamanhoDoMes[1] = 29;
            }
            
            // Faz a tabalução até o primerio dia da semana
            for(int i = 1; i < diaDaSemana(1, this->mes, this->ano); i++){
                cout << "\t";
            }
            
            // Preenche o calendário
            for(int dia = 1; dia <= tamanhoDoMes[this->mes - 1]; dia++){
                if(dia < 10){
                    cout << "0" << dia << "\t";
                }else{
                    cout << dia << "\t";
                }
                
                if(diaDaSemana(dia, this->mes, this->ano) == 7){
                    cout << "\n";
                }
            }
        }
};

int main()
{
    Calendario c(2, 2024);
    
    c.imprimirCalendario();
}
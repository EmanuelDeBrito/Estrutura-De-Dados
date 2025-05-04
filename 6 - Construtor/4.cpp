#include <iostream>
using namespace std;

class Aluno{
    public:
        // Atributos
        int matricula;
        string nome;
        int telefone;
        
        // Construtor vazio
        Aluno(){
            this->matricula = 0;
            this->nome = "";
            this->telefone = 0;
        }
        
        // Construtor
        Aluno(int matricula, string nome, int telefone){
            this->matricula = matricula;
            this->nome = nome;
            this->telefone = telefone;
        }
        
        // Método que imprime a matrícula do aluno
        void imprimirMatricula(Aluno aluno){
            cout << endl << "Dados do aluno" << endl;
            cout << "Matrícula: " << aluno.matricula << endl;
            cout << "Nome: " << aluno.nome << endl;
            cout << "Telefone: " << aluno.telefone << endl;
        }
        
        // Método que imprime as matrículas de dois alunos
        void imprimirMatriculas(Aluno aluno1, Aluno aluno2){
            imprimirMatricula(aluno1);
            imprimirMatricula(aluno2);
        }
};
 
int main()
{   
    // Instâncias
    Aluno aluno1(1, "Emanuel", 1398980098);
    Aluno aluno2(2, "Viviane", 1187654321);
    
    // Usando os métodos da classe
    aluno1.imprimirMatriculas(aluno1, aluno2);
 
    return 0;
}
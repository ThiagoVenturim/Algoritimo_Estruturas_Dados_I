#include <iostream>
#include <string>
using namespace std;

class Aluno{
private:
    int matricula;
    string nome;
    string curso;
    int periodo;
public:
    Aluno(): matricula(0), nome(""), curso(""), periodo(1){}
    Aluno(int matricula, string nome, string curso, int periodo){
        this->matricula=matricula;
        this->nome=nome;
        this->curso=curso;
        this->periodo=periodo;
    }

    void setMatricula(int matricula){this->matricula=matricula;}
    void setNome(string nome){this->nome=nome;}
    void setCurso(string curso){ this->curso=curso;}
    void setPeriodo(int periodo){this->periodo=periodo;}

    int getMatricula(){return matricula; }
    int getPeriodo(){return periodo; }
    string getNome(){return nome; }
    string getCurso(){return curso; }

    void aprovarAluno(){
        periodo++;
    }
    
    void imprimirDados(){
        cout <<"--Dados do Aluno--"<<endl;
        cout << "Nome: " << nome <<endl;
        cout << "Matricula: " << matricula <<endl;
        cout << "Curso: " << curso <<endl;
        cout << "Periodo: " << periodo <<endl;
    }
};

int main(){
    int tamanho, matricula, periodo;
    string nome, curso;
    
    cout<<"Digite o tamanho de alunos: " <<endl;
    cin >> tamanho;
    cin.ignore();

    Aluno* aluno = new Aluno[tamanho];

    
    for(int i=0; i<tamanho ; i++){
        cout << "Digite os dados do aluno: " << i <<endl;
        cout << "Nome:" << endl;
        getline(cin, nome);
        aluno[i].setNome(nome);

        cout<< "Matricula:" << endl;
        cin >> matricula;
        aluno[i].setMatricula(matricula);
        cin.ignore();


        cout<< "Curso:" <<endl;
        getline(cin, curso);
        aluno[i].setCurso(curso);

        cout<< "Periodo:" <<endl;
        cin >>  periodo;
        aluno[i].setPeriodo(periodo);
        cin.ignore();


    }
    
    for(int i=0; i<tamanho ; i++){
        for(int j=0; i<5; j++){
            aluno[i].aprovarAluno();
        }
    }

    for(int i=0; i<tamanho ; i++){
        aluno[i].imprimirDados();
    }

    delete[] aluno;

return 0;
}
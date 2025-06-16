#include <iostream>
#include <string>
using namespace std;

class Pessoa{
private: 
    string nome;
    int idade;
    float altura;
public:
//contrutor
    Pessoa(string nome, int idade, float altura ){ 
        this->nome = nome; 
        this->idade = idade;
        this->altura = altura;
    }
    Pessoa(){ 
        nome = " ";
        idade = 0;
        altura = 0.0;
    }
//set    
    void setNome(string nome){
        this->nome=nome;
    }
    void setIdade(int idade){
        this->idade=idade;
    }
    void setAltura(float altura){
        this->altura=altura;
    }
//get
    string getNome(){
        return nome;
    }
    int getIdade(){
        return idade;
    }
    float getAltura(){
        return altura;
    }
//Imprimir dados
    void imprimirDados(){
        cout <<"Nome: " << nome << endl;
        cout <<"Idade: " << idade << "anos" << endl;
        cout <<"Altura: " << altura << "metros" <<endl;
    }
};

int main(){
    Pessoa pessoa1("Joao", 25, 1.75);

    Pessoa pessoa2;
    string nome;
    int idade;
    float altura;
    cout<<"Digite o nome da pessoa2: ";

    getline(cin, nome);
    pessoa2.setNome(nome);
    
    cout <<"Digite a idade da pessoa2: ";
    cin >> idade;
    pessoa2.setIdade(idade);

    cout <<"Digite a altura da pessoa2: ";
    cin >> altura;
    pessoa2.setAltura(altura);

    cout << endl << "Dadaos da pessoa1: " << endl;
    pessoa1.imprimirDados();

     cout << endl << "Dadaos da pessoa2: " << endl;
    pessoa2.imprimirDados();

return 0;
}
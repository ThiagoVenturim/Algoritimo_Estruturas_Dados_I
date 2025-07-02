#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Funcionario{
private:
    string nome;
    double salarioBase;
public:
    Funcionario(): nome(""), salarioBase(0.0) {}
    Funcionario(string nome, double salarioBase){
        this->nome = nome;
        this->salarioBase = salarioBase;
    }

    void setSalarioBase(double salarioBase){ this->salarioBase = salarioBase; }
    void setNome(string nome){ this->nome = nome;}
    string getNome(){ return nome; }
    double getSalarioBase(){ return salarioBase; }


};
class Gerente: public Funcionario{
private:
    float bonus;
public:
    Gerente(): Funcionario(), bonus(0.0) {}
    Gerente(string nome, double salarioBase, float bonus): Funcionario(nome, salarioBase){
        this->bonus = bonus;
    }
    void setBonus(float bonus){ this->bonus = bonus; }
    float getBonus(){ return bonus; }
    
    double calcularSalario(){
        return getSalarioBase() + bonus;
    }

};

int main(){
    double salarioBase;
    string nome;
    float bonus;
    cout << "Digite o nome do gerente: ";
    getline(cin, nome);
    cout << "Digite o salario base do gerente: ";
    cin >> salarioBase;
    cout << "Digite o bonus do gerente: ";
    cin >> bonus;
    Gerente gerente(nome, salarioBase, bonus);
    cout << "Nome do gerente: " << gerente.getNome() << endl;
    cout << "Salario base do gerente: " << gerente.getSalarioBase() << endl;
    cout << "Bonus do gerente: " << gerente.getBonus() << endl;
    cout << "Salario total do gerente: " << gerente.calcularSalario() << endl;
    return 0;
}
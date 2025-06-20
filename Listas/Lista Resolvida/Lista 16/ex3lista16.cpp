#include <iostream>
#include <string>
using namespace std;

class Empregado{
private:
    string nome;
    double salarioBase;
    double imposto;
public:
    Empregado(): nome(""), salarioBase(0.0), imposto(0.0) {}
    Empregado(string nome, double salarioBase, double imposto){
        this->nome=nome;
        this->salarioBase=salarioBase;
        this->imposto=imposto;
    }
    void setNome(string nome){this->nome=nome;}
    void setSalarioBase(double salarioBase){this->salarioBase=salarioBase; }
    void setImposto(double imposto){this->imposto=imposto; }

    string getNome(){ return nome; }
    double getSalarioBase(){ return salarioBase; }
    double getImposto(){ return imposto; }
};

class Vendedor: public Empregado{
private:
    double valorVendas;
    double comissao;
public:
    Vendedor(): Empregado(),  valorVendas(0.0), comissao(0.0){}
    Vendedor( double valorVendas, 
        double comissao, 
        string nome, 
        double salarioBase, 
        double imposto): Empregado( nome,salarioBase, imposto ), valorVendas(valorVendas), comissao(comissao){}
    
    void setValorVendas(double valorVendas){ this->valorVendas = valorVendas; }
    void setComissao(double comissao){ this->comissao = comissao; }

    double getValorVendas(){ return valorVendas;}
    double getComissao(){ return comissao; }

    double calcularSalario(){

        return (getSalarioBase() + (comissao*valorVendas)) * (1-getImposto());
    }

};

int main(){

    
    Vendedor vendedor1(10000.0, 0.05, "Sla", 2000.0, 0.1); 
    Vendedor vendedor2(15000.0, 0.07, "Sla2", 2500.0, 0.12); 
    
    double salarioLiquido1 = vendedor1.calcularSalario();
    double salarioLiquido2 = vendedor2.calcularSalario();

   
    cout << "Vendedor: " << vendedor1.getNome() << endl;
    cout << "Salario Liquido: R$ " << salarioLiquido1 << endl << endl;

    cout << "Vendedor: " << vendedor2.getNome() << endl;
    cout << "Salario Liquido: R$ " << salarioLiquido2 << endl;

    return 0;
}


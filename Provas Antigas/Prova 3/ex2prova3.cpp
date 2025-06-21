#include <iostream>
#include <string>
using namespace std;

class Empregado{
private:
    string nome;
    int codigoSetor;
    double salarioBase;
    double imposto;
public:
    Empregado(): nome(""), codigoSetor(0), salarioBase(0.0), imposto(0.0){}
    Empregado(string nome, int codigoSetor, double salarioBase, double imposto){
        this->nome=nome;
        this->codigoSetor=codigoSetor;
        this->salarioBase=salarioBase;
        this->imposto=imposto;
    }

    void setNome(string nome){this->nome=nome;}
    void setCodigoSetor(int codigoSetor){this->codigoSetor=codigoSetor;}
    void setSalarioBase(double salarioBase){this->salarioBase=salarioBase;}
    void setImposto(double imposto){ this->imposto=imposto;}

    string getNome(){return nome;}
    int getCodigoSetor(){return codigoSetor;}
    double getSalarioBase( ){return salarioBase;}
    double getImposto( ){ return imposto;}
};

class Vendedor: public Empregado{
private:
    double valorVendas;
    double comissao;
public: 
    Vendedor(): Empregado(),  valorVendas(0.0), comissao(0.0){}
    Vendedor( double valorVendas, double comissao, string nome, 
        int codigoSetor, double salarioBase, double imposto):Empregado(nome, codigoSetor, salarioBase, imposto){
        this->valorVendas=valorVendas;
        this->comissao=comissao;
    }
    
    void setValorVendas(double valorVendas){this->valorVendas=valorVendas;}
    void setComissao(double comissao){this->comissao=comissao;}

    double getValorVendas(){return valorVendas;}
    double getComissao(){return comissao;}
    
    double calcularSalario(){
        return  ( getSalarioBase() + (valorVendas * comissao)) * (1.0 - getImposto());
    }

    void Mostrar(){
        cout << "Nome: " << getNome() << endl;
        cout << "Codigo Setor: " << getCodigoSetor() << endl;
        cout << "Salario Base: " << getSalarioBase() << endl;
        cout << "Impostos: " << getImposto() << endl;
        cout << "Valor de Vendas: "<< valorVendas << endl;
        cout << "Comissao: "<< comissao << endl;
        cout << "Salario Liquido: " << calcularSalario() <<endl;
    }
};

int main(){
    Vendedor p1;
    Vendedor p2;

    string nome;
    int codigoSetor;
    double salarioBase,  imposto,  valorVendas,  comissao;

    cout <<" -- Vendedor 1 -- " << endl;
    cout <<"Nome: " << endl;
    getline(cin, nome);
    p1.setNome(nome);

    cout <<"Codigo do setor: " <<endl;
    cin >> codigoSetor;
    p1.setCodigoSetor(codigoSetor);
    cin.ignore();

    cout <<" Digite o Salario Base: " << endl;
    cin >> salarioBase;
    p1.setSalarioBase(salarioBase);
    cin.ignore();

    cout <<" Digite a porcetage, de 0 a 1 de impostos" << endl;
    cin >> imposto ;
    p1.setImposto(imposto);
    cin.ignore();

    cout <<" Digite o valor das vendas" << endl;
    cin >> valorVendas;
    p1.setValorVendas(valorVendas);
    cin.ignore();

     cout <<" Digite a porcetage, de 0 a 1 a comissao" << endl;
    cin >> comissao;
    p1.setComissao(comissao);
    cin.ignore();

    
    cout <<" -- Vendedor 2 -- " << endl;
    cout <<"Nome: " << endl;
    getline(cin, nome);
    p2.setNome(nome);

    cout <<"Codigo do setor: " << endl;
    cin >> codigoSetor;
    p2.setCodigoSetor(codigoSetor);
    cin.ignore();

    cout <<" Digite o Salario Base: " << endl;
    cin >> salarioBase;
    p2.setSalarioBase(salarioBase);
    cin.ignore();

    cout <<" Digite o imposto" << endl;
    cin >> imposto ;
    p2.setImposto(imposto);
    cin.ignore();

    cout <<" Digite o valor das vendas" << endl;
    cin >> valorVendas;
    p2.setValorVendas(valorVendas);
    cin.ignore();

    cout <<" Digite a porcetage, de 0 a 1 a comissao" << endl;
    cin >> comissao;
    p2.setComissao(comissao);
    cin.ignore();

    p1.Mostrar();
    p2.Mostrar();
return 0;
}
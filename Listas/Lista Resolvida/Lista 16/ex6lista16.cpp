#include <iostream>
#include <string>
using namespace std;

class Funcionario {
private:
    string nome;
    double salarioBase;

public:
    
    Funcionario() : nome(""), salarioBase(0.0) {}
    Funcionario(string nome, double salarioBase) {
        this->nome = nome;
        this->salarioBase = salarioBase;
    }

    void setNome(string nome) { this->nome = nome; }
    void setSalarioBase(double salario) { this->salarioBase = salario; }

    string getNome() { return nome; }
    double getSalarioBase() { return salarioBase; }


    virtual double calcularSalario() {
        return salarioBase;
    }

    virtual void exibirDados() {
        cout << "Nome: " << nome << endl;
        cout << "Salario Final: R$ " << calcularSalario() << endl;
    }

    
    virtual ~Funcionario() {}
};

class Gerente : public Funcionario {
public:
    Gerente(string nome, double salarioBase) : Funcionario(nome, salarioBase) {}

    double calcularSalario() override {
        return getSalarioBase() + 2000.0;
    }
};


class Desenvolvedor : public Funcionario {
private:
    int numProjetos;

public:
    Desenvolvedor(string nome, double salarioBase, int numProjetos)
        : Funcionario(nome, salarioBase) {
        this->numProjetos = numProjetos;
    }

    double calcularSalario() override {
        return getSalarioBase() + (500.0 * numProjetos);
    }
};

class Estagiario : public Funcionario {
private:
    float percentual; 
public:
    Estagiario(string nome, double salarioBase, float percentual)
        : Funcionario(nome, salarioBase) {
        this->percentual = percentual;
    }

    double calcularSalario() override {
        return getSalarioBase() * percentual;
    }
};


int main() {
    Funcionario* funcionarios[3];

    funcionarios[0] = new Gerente("sla", 5000);
    funcionarios[1] = new Desenvolvedor("Sla", 4000, 3);
    funcionarios[2] = new Estagiario("SLA", 2000, 0.6);

    cout << " Dados dos Funcionarios " << endl;
    for (int i = 0; i < 3; i++) {
        funcionarios[i]->exibirDados();

    }

    for (int i = 0; i < 3; i++) {
        delete funcionarios[i];
    }

    return 0;
}

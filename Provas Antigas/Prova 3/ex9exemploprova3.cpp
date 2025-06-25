#include <iostream>
#include <string>
using namespace std;

// Classe Base
class Funcionario {
private:
    string nome;
    double salarioBase;
public:
    Funcionario(): nome(""), salarioBase(0.0) {}
    Funcionario(const string& n, double s): nome(n), salarioBase(s) {}

    void setNome(const string& n) { nome = n; }
    void setSalarioBase(double s) { salarioBase = s; }

    string getNome() const { return nome; }
    double getSalarioBase() const { return salarioBase; }

    virtual double calcularSalario() const {
        return salarioBase;
    }

    virtual void Mostrar() const {
        cout << "Nome: " << nome << endl;
        cout << "Salario Base: R$ " << salarioBase << endl;
        cout << "Salario Total: R$ " << calcularSalario() << endl;
    }
};

// Classe Derivada Gerente
class Gerente : public Funcionario {
public:
    Gerente(): Funcionario() {}
    Gerente(const string& n, double s): Funcionario(n, s) {}

    double calcularSalario() const override {
        return getSalarioBase() + 2000.0;
    }

    void Mostrar() const override {
        cout << "Cargo: Gerente" << endl;
        Funcionario::Mostrar();
    }
};

// Classe Derivada Desenvolvedor
class Desenvolvedor : public Funcionario {
private:
    int projetos;
public:
    Desenvolvedor(): Funcionario(), projetos(0) {}
    Desenvolvedor(const string& n, double s, int p): Funcionario(n, s), projetos(p) {}

    void setProjetos(int p) { projetos = p; }
    int getProjetos() const { return projetos; }

    double calcularSalario() const override {
        return getSalarioBase() + (500.0 * projetos);
    }

    void Mostrar() const override {
        cout << "Cargo: Desenvolvedor" << endl;
        cout << "Projetos concluidos: " << projetos << endl;
        Funcionario::Mostrar();
    }
};

int main() {
    Desenvolvedor p1("Thiago", 2000, 20);
    Gerente p2("Leticia", 2500);

    cout << "\n--- Dados do Desenvolvedor ---\n";
    p1.Mostrar();

    cout << "\n--- Dados do Gerente ---\n" << endl;
    p2.Mostrar();

    return 0;
}

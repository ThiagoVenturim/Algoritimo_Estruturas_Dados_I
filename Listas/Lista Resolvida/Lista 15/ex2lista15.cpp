#include <iostream>
using namespace std;

class Elevador {
private:
    int andarAtual;
    int totalAndares;
    int capacidade;
    int pessoasAtual;

public:
    Elevador(int totalAndares, int capacidade) {
        this->totalAndares = totalAndares;
        this->capacidade = capacidade;
        andarAtual = 0;
        pessoasAtual = 0;
    }

    void inicializa(int capacidade, int totalAndares) {
        this->capacidade = capacidade;
        this->totalAndares = totalAndares;
        andarAtual = 0;
        pessoasAtual = 0;
    }

    void entra() {
        if (pessoasAtual < capacidade) {
            pessoasAtual++;
        } else {
            cout << "Elevador cheio!" << endl;
        }
    }

    void sai() {
        if (pessoasAtual > 0) {
            pessoasAtual--;
        } else {
            cout << "Elevador vazio!" << endl;
        }
    }

    void sobe() {
        if (andarAtual < totalAndares) {
            andarAtual++;
        } else {
            cout << "Já está no último andar!" << endl;
        }
    }

    void desce() {
        if (andarAtual > 0) {
            andarAtual--;
        } else {
            cout << "Já está no térreo!" << endl;
        }
    }

    int getAndarAtual() {
        return andarAtual;
    }

    int getTotalAndares() {
        return totalAndares;
    }

    int getCapacidade() {
        return capacidade;
    }

    int getPessoasAtual() {
        return pessoasAtual;
    }

    void mostrar() {
        cout << "Capacidade do elevador: " << capacidade << endl;
        cout << "Total de andares: " << totalAndares << endl;
        cout << "Andar atual: " << andarAtual << endl;
        cout << "Número de pessoas no elevador: " << pessoasAtual << endl;
    }
};

int main() {
    Elevador p1(10, 5);
    p1.mostrar();

    p1.sobe();
    cout << "O elevador está no " << p1.getAndarAtual() << "º andar" << endl;

    p1.entra();
    p1.entra();
    p1.entra();
    p1.entra();
    p1.entra();
    p1.entra(); // Este deve mostrar "Elevador cheio!"

    cout << "Pessoas no elevador: " << p1.getPessoasAtual() << endl;

    p1.desce();
    cout << "O elevador está no " << p1.getAndarAtual() << "º andar" << endl;

    p1.sai();
    p1.sai();
    p1.sai();
    p1.sai();
    p1.sai();
    p1.sai(); // Este deve mostrar "Elevador vazio!"

    p1.mostrar();

    return 0;
}


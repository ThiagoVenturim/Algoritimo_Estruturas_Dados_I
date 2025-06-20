#include <iostream>
using namespace std;

// Classe base Forma
class Forma {
public:
    virtual float calcularArea() = 0;
};

// Classe Retangulo, derivada de Forma
class Retangulo : public Forma {
private:
    float base;
    float altura;
public:
    Retangulo(float base, float altura) {
        this->base = base;
        this->altura = altura;
    }

    float calcularArea() override {
        return base * altura;
    }
};

// Classe Triangulo, derivada de Forma
class Triangulo : public Forma {
private:
    float base;
    float altura;
public:
    Triangulo(float base, float altura) {
        this->base = base;
        this->altura = altura;
    }

    float calcularArea() override {
        return (base * altura) / 2;
    }
};

int main() {

    Forma* formas[2];

    formas[0] = new Retangulo(5.0, 4.0);   
    formas[1] = new Triangulo(5.0, 4.0);   

    
    for (int i = 0; i < 2; i++) {
        cout << "Área da forma " << i + 1 << ": " << formas[i]->calcularArea() << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete formas[i];
    }

    return 0;
}

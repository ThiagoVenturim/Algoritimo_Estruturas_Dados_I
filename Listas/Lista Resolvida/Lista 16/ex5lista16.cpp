#include <iostream>
#include <string>
using namespace std;

class Veiculo {
private:
    double peso;
    double preco;
    int velocidadeMaxima;
public:
    Veiculo(double peso = 0.0, double preco = 0.0, int velocidadeMaxima = 0)
        : peso(peso), preco(preco), velocidadeMaxima(velocidadeMaxima) {}

    void setPeso(double p) { peso = p; }
    void setPreco(double p) { preco = p; }
    void setVelocidadeMaxima(int v) { velocidadeMaxima = v; }

    double getPeso() { return peso; }
    double getPreco() { return preco; }
    int getVelocidadeMaxima() { return velocidadeMaxima; }

    void print() {
        cout << "Peso: " << peso << " kg" << endl;
        cout << "Preco: R$ " << preco << endl;
        cout << "Velocidade Maxima: " << velocidadeMaxima << " km/h" << endl;
    }
};

class Motor {
private:
    int numCilindros;
    float potencia;
public:
    Motor(int numCilindros = 0, float potencia = 0.0)
        : numCilindros(numCilindros), potencia(potencia) {}

    void setNumCilindros(int n) { numCilindros = n; }
    void setPotencia(float p) { potencia = p; }

    int getNumCilindros() { return numCilindros; }
    float getPotencia() { return potencia; }

  
    void print() {
        cout << "Numero de Cilindros: " << numCilindros << endl;
        cout << "Potencia: " << potencia << " CV" << endl;
    }
};


class CarroPasseio : public Veiculo, public Motor {
private:
    string modelo;
    string cor;
public:
    CarroPasseio(
        string modelo = "", string cor = "",
        double peso = 0.0, double preco = 0.0, int velocidadeMaxima = 0,
        int numCilindros = 0, float potencia = 0.0)
        : Veiculo(peso, preco, velocidadeMaxima), Motor(numCilindros, potencia),
          modelo(modelo), cor(cor) {}

    
    void setModelo(string m) { modelo = m; }
    void setCor(string c) { cor = c; }

    string getModelo() { return modelo; }
    string getCor() { return cor; }

    
    void print() {
        cout << "===== Carro de Passeio =====" << endl;
        Veiculo::print();
        Motor::print();
        cout << "Modelo: " << modelo << endl;
        cout << "Cor: " << cor << endl;
        cout << "============================" << endl;
    }
};

class Caminhao : public Veiculo, public Motor {
private:
    double toneladas;
    float alturaMaxima;
    double comprimento;
public:
    Caminhao(
        double toneladas = 0.0, float alturaMaxima = 0.0, double comprimento = 0.0,
        double peso = 0.0, double preco = 0.0, int velocidadeMaxima = 0,
        int numCilindros = 0, float potencia = 0.0)
        : Veiculo(peso, preco, velocidadeMaxima), Motor(numCilindros, potencia),
          toneladas(toneladas), alturaMaxima(alturaMaxima), comprimento(comprimento) {}

    // Setters
    void setToneladas(double t) { toneladas = t; }
    void setAlturaMaxima(float a) { alturaMaxima = a; }
    void setComprimento(double c) { comprimento = c; }

    // Getters
    double getToneladas() { return toneladas; }
    float getAlturaMaxima() { return alturaMaxima; }
    double getComprimento() { return comprimento; }

    // Print
    void print() {
        cout << "========== Caminhao ==========" << endl;
        Veiculo::print();
        Motor::print();
        cout << "Toneladas: " << toneladas << " t" << endl;
        cout << "Altura Maxima: " << alturaMaxima << " m" << endl;
        cout << "Comprimento: " << comprimento << " m" << endl;
        cout << "==============================" << endl;
    }
};

// ================= Programa Principal ===================
int main() {
    // Veiculo
    Veiculo v(1200, 50000, 180);
    cout << "===== Veiculo =====" << endl;

    v.print();
    cout << endl;

    // Motor
    Motor m(4, 150);
    cout << "===== Motor =====" << endl;
    m.print();
    cout << endl;

    // Carro de Passeio
    CarroPasseio carro("Civic", "Prata", 1300, 120000, 200, 4, 180);
    carro.print();
    cout << endl;

    // Caminhao
    Caminhao caminhao(12, 4.2, 12, 8000, 500000, 120, 8, 400);
    caminhao.print();
    cout << endl;

    return 0;
}

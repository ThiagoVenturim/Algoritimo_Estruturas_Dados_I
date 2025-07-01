#include <iostream>
#include <cmath>
using namespace std;
class Retangulo {
    private:
        double largura;
        double altura;
        
    public:
        Retangulo() : largura(0.0), altura(0.0) {}
        Retangulo(double largura, double altura){
            this->largura = largura;
            this->altura = altura;
        }
        void SetLargura(double largura) { this->largura = largura; }
        void SetAltura(double altura) { this->altura = altura; }
        double GetLargura() { return largura; }
        double GetAltura() { return altura; }
       
};

class Cubo : public Retangulo {
    private:
        double profundidade;
    public:
        Cubo() : Retangulo(), profundidade(0.0){}
        Cubo(double largura, double altura, double profundidade) : Retangulo(largura, altura) {
            this->profundidade = profundidade;
        }
        double Volume() { return GetLargura() * GetAltura() * profundidade; }
};

int main(){
    float largura, altura, profundidade;
    cout << "Digite a largura, altura e profundidade do cubo: " << endl;
    cin >> largura >> altura >> profundidade;
    Cubo cubo(largura, altura, profundidade);
    cout << "Volume do cubo: " << cubo.Volume() << endl;
return 0;
}
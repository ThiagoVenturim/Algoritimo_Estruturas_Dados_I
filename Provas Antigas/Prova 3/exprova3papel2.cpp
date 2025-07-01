#include <iostream>
#include <cmath>
using namespace std;
class Caixa{
    private:
        double largura;
        double altura;
        double profundidade;
    public:
        Caixa() : largura(0.0), altura(0.0), profundidade(0.0) {}
        Caixa(double largura, double altura, double profundidade){
            this->largura = largura;
            this->altura = altura;
            this->profundidade = profundidade;
        }
        void SetLargura(double largura) { this->largura = largura; }
        void SetAltura(double altura) { this->altura = altura; }
        void SetProfundidade(double profundidade) { this->profundidade = profundidade; }
        double GetLargura() { return largura; }
        double GetAltura() { return altura; }
        double GetProfundidade() { return profundidade; }
        double Volume() { return largura * altura * profundidade; }

    protected:
        float Area() { return 2 * (largura * altura + largura * profundidade + altura * profundidade); }
};
int main(){
    float largura, altura, profundidade;
    cout << "Digite a largura, altura e profundidade da caixa: " << endl;
    cin >> largura >> altura >> profundidade;
    Caixa caixa(largura, altura, profundidade);
    cout << "Volume da caixa: " << caixa.Volume() << endl;
return 0;
}
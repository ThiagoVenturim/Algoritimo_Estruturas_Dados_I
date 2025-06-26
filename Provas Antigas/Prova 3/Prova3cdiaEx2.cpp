#include <iostream>
#include <cmath>
using namespace std;

class Retangulo{
private:
    float largura;
    float altura;
protected:
    float Perimetro(){return largura*2+altura*2; }
public:
    Retangulo(): largura(0.0), altura(0.0){}
    Retangulo(float largura, float altura){
        this->largura=largura;
        this->altura=altura;
    } 
    void setLargura(float largura){this->largura=largura;}
    void setAltura(float altura){this->altura=altura;}
    float getAltura(){return altura;}
    float getLargura(){return largura;}
    float  Area(){ return largura*altura; }
    float imprimirPerimetro(){ return  Perimetro(); }
};

int main(){ 
    float altura, largura;
    Retangulo p1;
    cout<<"Digite a Largura do Retangulo (em metros): " << endl;
    cin >> largura;
    p1.setLargura(largura);
    cout<<"Digite a Altura do Retangulo (em metros): " << endl;
    cin >> altura;
    p1.setAltura(altura);
    cout << "Area: " << p1.Area()  << " metros quadrados" << endl;
    cout << "Perimetro " << p1.imprimirPerimetro() << endl;

return 0;
};
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Ponto{
protected :
    float x;
    float y;
public:
    Ponto(): x(0.0), y(0.0){}
    Ponto(float x, float y){ 
        this->x=x;
        this->y=y;
    }

    void setX(){this->x=x;}
    void setY(float y){this->y=y;}
    float getX(){return x;}
    float getY(){return y;}

    float CalcularDistancia(Ponto& outro){
        return sqrt( pow((x- outro.x ),2)  + pow((y- outro.y ),2));
    }

};
class Retangulo: public Ponto{
private:
    float largura;
    float altura;
public:
    Retangulo(): Ponto(), largura(0.0), altura(0.0){}
    Retangulo(float largura, float altura, float x, float y): Ponto(x, y){
        this->largura=largura;
        this->altura=altura;
    }

    void setLargura(float largura){this->largura=largura;}
    void setAltura(float altura){this->altura=altura;}
    float getLargura(){return largura;}
    float getAltura(){return altura;}

    float CalcularArea(){return largura*altura;}
    float CalcularPerimetro(){return largura*2 + altura*2;}
     
    void Mostra(){
        cout << "____Retangulo____" << endl;
        cout << "Area: " << CalcularArea() << endl;
        cout << "Perimetro: " << CalcularPerimetro() << endl;
        cout << "Pocisao: " << x << "," << y << endl; 
    }

};

int main(){
return 0;
}
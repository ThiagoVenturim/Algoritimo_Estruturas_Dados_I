#include <iostream>
#include <cmath>
using namespace std;
class Ponto{
protected:
    float x;
    float y;
public:
    Ponto(): x(0.0), y(0.0){}
    Ponto(float x, float y ){
        this->x=x;
        this->y=y;
    }

    void setX(float x){this->x=x;}
    void setY(float y){this->y=y;}
    float getX(){return x;}
    float getY(){return y;}
};
class Circulo: public Ponto{
private:
    float raio;
public: 
    Circulo(): Ponto(), raio(0.0){}
    Circulo( float x, float y, float raio){
        this->raio=raio;
        this->x=x;
        this->y=y;
    }

    void setRaio(float raio){this->raio=raio;}
    float getRaio(){return raio;}
    float area(){return M_PI*raio*raio;}

};

 int main() {
 // Criando um objeto da classe Circulo
 Circulo c(3, 4, 5); // Centro (3, 4), Raio 5
 // Exibindo os dados do círculo
 cout << "Centro: (" << c.getX() << ", " << c.getY() << ")" << endl;
 cout << "Raio: " << c.getRaio() << endl;
 cout << "Área: " << c.area() << endl;
 return 0;
 }
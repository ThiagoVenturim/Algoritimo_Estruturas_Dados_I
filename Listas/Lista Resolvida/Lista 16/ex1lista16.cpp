#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Ponto{ //classe ponto
private:
    float x;
    float y;
public:
    Ponto() : x(0), y(0) {} //construtores
    Ponto(float x, float y){
        this->x=x;
        this->y=y;
    }

    void setX(float x){
        this->x=x;
    }

    void setY(float y){
        this->y=y;
    }

    float getX(){
        return x;
    }

    float getY(){
        return y;
    }

    float dist(Ponto &outro){
        return sqrt( pow(outro.x - x, 2) + pow(outro.y - y, 2) ); 
    }
};

class Circulo : public Ponto{
    private:
        float raio;
    public:
    Circulo() : Ponto(), raio(0){}
    Circulo(float raio) : Ponto(0, 0), raio(raio){}
    Circulo(float x, float y, float raio) : Ponto(x, y), raio(raio){}

    void setRaio(float raio){
        this->raio=raio;
    }

    float getRaio(){
        return raio;
    }

    float area(){   
        return M_PI * pow(raio, 2);
    }

     float circunferencia(){
        return M_PI * 2 * raio;
     }
};

class Roda : public Circulo{
private:
    string Material;
    string Fabricante;
    float aro;
public:
    Roda (): Circulo(), Material(""), Fabricante(""), aro(0.0){}
    Roda(float x, float y, float raio, string Material, int aro, string Fabricante)
        : Circulo(x, y, raio) {
        this->Material = Material;
        this->aro = aro;
        this->Fabricante = Fabricante;
    }

    void setMaterial(string Material){
        this->Material = Material;
    }
    void setaro( float aro){
        this->aro = aro;
    }
    void setFabricante( string Fabricante){
        this->Fabricante = Fabricante;
    }

    string getMaterial(){
        return Material;
    }
    string getFabricante(){
        return Fabricante; 
    }
    float getaro(){
        return aro;
    }
};

class Esfera: public Circulo{
public:
    Esfera(): Circulo() {}
    Esfera(float x, float y, float raio): Circulo(x, y, raio){ }

    float getVolume(){
        return (4.0/3.0) * M_PI * pow(getRaio(), 3);
    }

};
int main() {
    // Instanciar um Ponto
    Ponto p(2, 3);
    cout << "Ponto:" << endl;
    cout << "x: " << p.getX() << ", y: " << p.getY() << endl << endl;

    // Instanciar um Circulo
    Circulo c(2, 3, 5);
    cout << "Circulo:" << endl;
    cout << "Centro: (" << c.getX() << ", " << c.getY() << ")" << endl;
    cout << "Raio: " << c.getRaio() << endl;
    cout << "Area: " << c.area() << endl;
    cout << "Circunferencia: " << c.circunferencia() << endl << endl;

    // Instanciar uma Roda
    Roda r(2, 3, 5, "Aluminio", 17, "Pirelli");
    cout << "Roda:" << endl;
    cout << "Centro: (" << r.getX() << ", " << r.getY() << ")" << endl;
    cout << "Raio: " << r.getRaio() << endl;
    cout << "Material: " << r.getMaterial() << endl;
    cout << "Aro: " << r.getaro() << endl;
    cout << "Fabricante: " << r.getFabricante() << endl;
    cout << "Area: " << r.area() << endl;
    cout << "Circunferencia: " << r.circunferencia() << endl << endl;

    // Instanciar uma Esfera
    Esfera e(2, 3, 5);
    cout << "Esfera:" << endl;
    cout << "Centro: (" << e.getX() << ", " << e.getY() << ")" << endl;
    cout << "Raio: " << e.getRaio() << endl;
    cout << "Volume: " << e.getVolume() << endl;

    return 0;
}
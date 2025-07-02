#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Forma{
public:
    virtual float area() = 0;
};

class Quadrado : public Forma{
private:
    float lado; 
public:
    Quadrado(float l=0):lado(l){}
    float area() override {
        return lado * lado;
    }
};

class Retangulo : public Forma{
private:
    float base, altura;
public:
    Retangulo(float b=0, float h=0):base(b), altura(h){}
    float area() override {
        return base * altura;
    }
};  
int main(){

    Forma* f1 = new Quadrado(5);
    Forma* f2 = new Retangulo(4, 6);

    cout << "Area do Quadrado: " << f1->area() << endl;
    cout << "Area do Retangulo: " << f2->area() << endl;

    delete[] f1;
    delete[] f2;
return 0;
}
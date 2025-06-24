#include <iostream>
#include <cmath>
using namespace std;
typedef struct{
    float x;
    float y;
}Centro;

class CirculoSimples{
private:
    float raio;
    Centro centro;
public:
    CirculoSimples(): raio(0.0), centro{0.0, 0.0}{}
    CirculoSimples(float raio, float x, float y){
        this->raio=raio;
        centro.x= x;
        centro.y= y;
    }
    
    void setRaio(float raio){
        this->raio=raio;
    }
    void setCentro(float x, float y){ 
        centro.y= y;
        centro.x=x;
    }

    void AumentarRaio(float Porcentagem){ raio+= raio*(Porcentagem/100);}
    void Calcular(){
        cout<< "Area: " << M_PI*pow(raio, 2) << endl;
        cout<< "Circunferencia: " << 2*M_PI*raio << endl;
        cout<< "Centro: " << centro.x << "," << centro.y  << endl;
    }
};
int main(){
    CirculoSimples p1;
    float raio, x, y, aument;
    cout<<"Digite o raio e o centro" << endl;
    cin >>raio >> x >> y;
    p1.setRaio(raio);
    p1.setCentro(x, y);
    p1.Calcular();
    cout << "Digite a porcentagem (0 a 100) para aumentar o raio: " << endl;
    cin >>aument;
    p1.AumentarRaio(aument);
    p1.Calcular();
return 0;    
}
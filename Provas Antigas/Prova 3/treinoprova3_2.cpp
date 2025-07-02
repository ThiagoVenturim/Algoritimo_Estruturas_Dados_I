#include <iostream>
#include <cmath>
using namespace std;

class Temperatura{
private:
    float grausCelsius;
    float  grausFahrenheit;
public:
    Temperatura(): grausCelsius(0.0), grausFahrenheit(0.0){}
    Temperatura(float grausCelsius){
        this->grausCelsius=grausCelsius;
       grausFahrenheit= (grausCelsius * 9.0 / 5.0) + 32.0; 
    }
    void Mostrar() {
        cout << "Graus Celsius: " << grausCelsius << endl;
        cout << "Graus Fahrenheit: " << grausFahrenheit << endl;
    }
    float getGrausFahrenheit() {return grausFahrenheit;}
    float getGrausCelsius() {return grausCelsius;}
    void avaliarTemperatura(){
        if (grausCelsius > 30) {
            cout << "Temperatura Alta!" << endl;
        } else if (grausCelsius >= 15 && grausCelsius <= 30) {
            cout << "Temperatura Media." << endl;
        } else {
            cout << "Temperatura Baixa!" << endl;
        }
    }
};

int main(){
    Temperatura t1(25.0);
    t1.Mostrar();
    t1.avaliarTemperatura();

    Temperatura t2(35.0);
    t2.Mostrar();
    t2.avaliarTemperatura();

    Temperatura t3(10.0);
    t3.Mostrar();
    t3.avaliarTemperatura();

return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

class CirculoSimples{
private:
    double raio;
    double x, y;
    
    double calcularArea(){
        return M_PI * pow(raio, 2);
    }

    double calcularCircunferencia(){
        return 2* M_PI* raio;
    }

    double calcularDistancia ( const CirculoSimples &outro){
        double dx = x - outro.x;
        double dy = y - outro.y;
        return sqrt(dx * dx + dy * dy);
    }
public:
    // Define o raio
    void definirRaio(double r) {
        raio = r;
    }

    // Aumenta o raio por um percentual
    void aumentarRaio(double percentual) {
        raio += raio * (percentual / 100.0);
    }

    // Define o centro (x, y)
    void definirCentro(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    // Imprime o raio
    void imprimirRaio() {
        cout << "Raio: " << raio << endl;
    }

    // Imprime o centro
    void imprimirCentro() {
        cout << "Centro: (" << x << ", " << y << ")" << endl;
    }

    // Imprime a área
    void imprimirArea() {
        cout << "Área: " << calcularArea() << endl;
    }

    // Imprime a circunferência
    void imprimirCircunferencia() {
        cout << "Circunferência: " << calcularCircunferencia() << endl;
    }

    // Imprime a distância entre este círculo e outro
    void imprimirDistanciaEntreCentros(CirculoSimples &outro) {
        cout << "Distância entre centros: " << calcularDistancia(outro) << endl;
    }
};

int main() {
    CirculoSimples c1, c2;
    double raio, x ,y, aumentar;
    cout<< "digite o raio: "<< endl;
    cin >> raio;
    c1.definirRaio(raio);
    cout<< "digite o centro : "<< endl;
    cin >> x >> y;
    c1.definirCentro(x, y);

    // Definindo o segundo círculo
    cout<< "digite o raio do segundo ciruclo : "<< endl;
    cin >> raio;
    c2.definirRaio(raio);
    cout<< "digite o centro : "<< endl;
     cin >> x >> y;
    c2.definirCentro(x, y);

    cout << "Circulo 1:" << endl;
    c1.imprimirRaio();
    c1.imprimirCentro();
    c1.imprimirArea();
    c1.imprimirCircunferencia();

    cout << "\nCirculo 2:" << endl;
    c2.imprimirRaio();
    c2.imprimirCentro();
    c2.imprimirArea();
    c2.imprimirCircunferencia();

    cout << "\nDistancia entre os centros:" << endl;
    c1.imprimirDistanciaEntreCentros(c2);

    cout << "\nAumentando o raio do Circulo:" << endl;
    cin >> aumentar;
    c1.aumentarRaio(aumentar );
    c1.imprimirRaio();
    c1.imprimirArea();

    return 0;
}



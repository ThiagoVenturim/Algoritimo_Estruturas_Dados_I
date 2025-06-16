#include <iostream>
using namespace std;

class Carro {
private:
    double combustivel;      
    double kmPercorrido;    
    static const int TANQUE_MAX = 50;     
    static const double CONSUMO_POR_LITRO; 

public:
    Carro() {
        combustivel = 0;
        kmPercorrido = 0;
    }

    void abastecer(double litros) {
        if (litros <= 0) {
            cout << "Quantidade inválida para abastecimento." << endl;
            return;
        }

        if (combustivel + litros > TANQUE_MAX) {
            combustivel = TANQUE_MAX;
            cout << "Tanque cheio. Só foi possivel abastecer até o limite de 50 litros." << endl;
        } else {
            combustivel += litros;
        }
    }

    void mover(double km) {
        double autonomia = combustivel * CONSUMO_POR_LITRO;

        if (km <= autonomia) {
            combustivel -= km / CONSUMO_POR_LITRO;
            kmPercorrido += km;
        } else {
            cout << "Combustível insuficiente! O carro percorreu apenas " << autonomia << " km antes de parar." << endl;
            kmPercorrido += autonomia;
            combustivel = 0;
        }
    }

    void getDados(double *km, double *litros) const {
        *km = kmPercorrido;
        *litros = combustivel;
    }
};

const double Carro::CONSUMO_POR_LITRO = 15.0;

int main() {
    Carro carro1, carro2;
    double km, litros;

   
    carro1.abastecer(20);
    carro2.abastecer(30);


    carro1.mover(200);
    carro2.mover(400);


    carro1.getDados(&km, &litros);
    cout << "Carro 1:" << endl;
    cout << "Distancia percorrida: " << km << " km" << endl;
    cout << "Combustível restante: " << litros << " litros" << endl;

   
    
    carro2.getDados(&km, &litros);
    cout << "\nCarro 2:" << endl;
    cout << "Distancia percorrida: " << km << " km" << endl;
    cout << "Combustível restante: " << litros << " litros" << endl;

    return 0;
}

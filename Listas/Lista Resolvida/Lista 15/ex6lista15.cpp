#include <iostream>
using namespace std;

class CondicionadorAr {
private:
    float tempExterna;
    int potencia;

public:
    CondicionadorAr() {
        tempExterna = 0.0;
        potencia = 0;
    }

    void setTempExterna(float temp) {
        tempExterna = temp;
    }

    void setPotencia(int pot) {
        if (pot >= 0 && pot <= 10) {
            potencia = pot;
        } else {
            cout << "Potencia fora do limite (0 a 10)." << endl;
        }
    }

    float getTempAmbiente() {
        float reducao = potencia * 1.8;
        float resultado = tempExterna - reducao;
        if (resultado < 0) {
            resultado = 0;
        }
        return resultado;
    }
};

int main() {
    CondicionadorAr p1, p2;
    float tempE;
    int pot;

    // Condicionador 1
    cout << "Digite a temperatura externa do primeiro condicionador: ";
    cin >> tempE;
    cout << "Digite a potencia do primeiro condicionador (0 a 10): ";
    cin >> pot;

    p1.setTempExterna(tempE);
    p1.setPotencia(pot);
    cout << "Temperatura ambiente resultante do primeiro condicionador: " << p1.getTempAmbiente() << " ºC" << endl;

    // Condicionador 2
    cout << "\nDigite a temperatura externa do segundo condicionador: ";
    cin >> tempE;
    cout << "Digite a potencia do segundo condicionador (0 a 10): ";
    cin >> pot;

    p2.setTempExterna(tempE);
    p2.setPotencia(pot);
    cout << "Temperatura ambiente resultante do segundo condicionador: " << p2.getTempAmbiente() << " ºC" << endl;

    return 0;
}

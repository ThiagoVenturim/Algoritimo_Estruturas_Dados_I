#include <iostream>
#include <cmath>
using namespace std;

class Eletrodomestico{
private:
    float potencia;
    float tempo;
public:
    Eletrodomestico(): potencia(0.0), tempo(0.0){}
    Eletrodomestico(float potencia , float tempo){
        this->potencia = potencia;
        this->tempo = tempo;
    }

    void setPotencia(float potencia){ this->potencia= potencia;}
    void setTempo(float tempo ){ this->tempo=tempo;}
    float getPotencia(){return potencia;}
    float getTempo(){return tempo;}
    float calcularConsumoMensal(){ return (potencia*tempo*30);}
    float retornarConsumoDiario(){ return calcularConsumoDiario();  }
    
protected:
    float calcularConsumoDiario(){ return (potencia*tempo); }
};

int main(){
    int tam;
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;
    Eletrodomestico *eletro = new Eletrodomestico[tam];
    for(int i = 0; i <tam ; i++){
        float potencia, tempo;
        cout << "Digite a potencia do eletrodomestico " << i+1 << ": ";
        cin >> potencia;
        cout << "Digite o tempo de uso do eletrodomestico " << i+1 << ": ";
        cin >> tempo;
        eletro[i] = Eletrodomestico(potencia, tempo);
    }
    cout << "Consumo mensal dos eletrodomesticos: " << endl;
    for(int i = 0; i < tam; i++){
        cout << "Eletrodomestico " << i+1 << ": " << eletro[i].calcularConsumoMensal() << " kWh" << endl;
        cout << "Consumo diario do eletrodomestico " << i+1 << ": " << eletro[i].retornarConsumoDiario() << " kWh" << endl;
    }
    delete[] eletro;
return 0;
}
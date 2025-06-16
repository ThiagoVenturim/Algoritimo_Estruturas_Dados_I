#include <iostream>
using namespace std;

class Relogio {
    int hora;
    int minuto;
    int segundo;
public:
    // Construtor padrão
    Relogio() {
        hora = 0;
        minuto = 0;
        segundo = 0;
    }

    // Construtor com parâmetros
    Relogio(int hora, int minuto, int segundo) {
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    }

    // Método setHora
    void setHora(int hora, int minuto, int segundo) {
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    }

    // Método getHora (retornando por referência)
    void getHora(int &h, int &m, int &s) {
        h = hora;
        m = minuto;
        s = segundo;
    }

    // Método que avança 1 segundo
    void avancarUmSegundo() {
        segundo += 1;

        if (segundo >= 60) {
            segundo = 0;
            minuto += 1;
        }
        if (minuto >= 60) {
            minuto = 0;
            hora += 1;
        }
        if (hora >= 24) {
            hora = 0;
        }
    }
};

int main() {
    Relogio p1;
    int h, m, s;

    cout << "Digite hora, minuto e segundo: ";
    cin >> h >> m >> s;

    p1.setHora(h, m, s);

    p1.getHora(h, m, s);
    cout << "Horario atual: " << h << ":" << m << ":" << s << endl;

    cout << "Avancando 1 segundo..." << endl;
    p1.avancarUmSegundo();

    p1.getHora(h, m, s);
    cout << "Horario atualizado: " << h << ":" << m << ":" << s << endl;

    return 0;
}

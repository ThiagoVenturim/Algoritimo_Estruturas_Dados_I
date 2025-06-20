#include <iostream>
#include <string>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Carros {
    string Modelo;
    string Marca;
    int AnoFabricacao;
    double preco;
    Data dataVenda;
};

int carroMaisCaro(Carros carros[], int tamanho, int maiorInd, int atual) {
    if (tamanho == 0) {
        return -1; // Retorna -1 se vetor estiver vazio
    }
    if (atual == tamanho) {
        return maiorInd;
    }
    if (carros[atual].preco > carros[maiorInd].preco) {
        maiorInd = atual;
    }
    return carroMaisCaro(carros, tamanho, maiorInd, atual + 1);
}

int main() {
    int tamanho;
    cout << "Digite o tamanho do vetor de carros: ";
    cin >> tamanho;
    cin.ignore(); // Limpa o buffer após cin >>

    if (tamanho <= 0) {
        cout << "Tamanho inválido." << endl;
        return 1;
    }

    Carros* carros = new Carros[tamanho];

    for (int i = 0; i < tamanho; i++) {
        cout << "\nCarro " << i + 1 << endl;

        cout << "Modelo: ";
        getline(cin, carros[i].Modelo);

        cout << "Marca: ";
        getline(cin, carros[i].Marca);

        cout << "Ano de Fabricacao: ";
        cin >> carros[i].AnoFabricacao;

        cout << "Preco: ";
        cin >> carros[i].preco;

        cout << "Data de Venda (dia mes ano): ";
        cin >> carros[i].dataVenda.dia >> carros[i].dataVenda.mes >> carros[i].dataVenda.ano;

        cin.ignore(); // Limpa o buffer antes do próximo getline
    }

    int indiceMaior = carroMaisCaro(carros, tamanho, 0, 0);

    if (indiceMaior == -1) {
        cout << "Nenhum carro cadastrado." << endl;
    } else {
        cout << "\nO carro mais caro é:\n";
        cout << "Modelo: " << carros[indiceMaior].Modelo << endl;
        cout << "Marca: " << carros[indiceMaior].Marca << endl;
        cout << "Ano de Fabricacao: " << carros[indiceMaior].AnoFabricacao << endl;
        cout << "Preco: R$ " << carros[indiceMaior].preco << endl;
        cout << "Data de Venda: " << carros[indiceMaior].dataVenda.dia << "/"
             << carros[indiceMaior].dataVenda.mes << "/"
             << carros[indiceMaior].dataVenda.ano << endl;
    }

    delete[] carros;
    return 0;
}

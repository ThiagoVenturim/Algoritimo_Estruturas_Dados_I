#include <iostream>
#include <string>
using namespace std;

class Veiculo{
protected:
    string modelo;
    string  placa;
    int ano;
    double preco;
public:
    Veiculo(): modelo(""), placa(""), ano(0), preco(0.0){}
    Veiculo(string modelo, string  placa, int ano, double preco){
        this->modelo=modelo;
        this->placa=placa;
        this->ano=ano;
        this->preco=preco;
    }

    void setModelo(string modelo){this->modelo=modelo;}
    void setPlaca(string placa){this->placa=placa;}
    void setAno(int ano){this->ano=ano;}
    void setPreco(double preco){this->preco=preco;}

    string getModelo(){return modelo;}
    string getPlaca(){return placa;}
    int getAno(){return ano;}
    double getPreco(){return preco;}

    double Custo(int num){
        if(num<=0){
            cout<< "Numero Invalido" << endl;
        }else{
            return preco*num;
        }
    return preco;
    }
};

class  CarroPasseio: public Veiculo{
private:
    int porta;
public:
    CarroPasseio(): Veiculo(), porta(0){}
    CarroPasseio(int porta ,string modelo, string  placa, int ano, double preco): Veiculo(modelo, placa, ano, preco){
        this->porta=porta;
    }
  void setPorta(int porta){this->porta=porta;}
  int getPorta(){return porta;}

   void mostrar(){
        cout << "---CarroPasseio---" << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Placa: " << placa << endl;
        cout << "Ano: " << ano << endl;
        cout << "Preco por dia: " << preco << endl;
        cout << "Porta: " << porta << endl;
    }
};

class Caminhao: public Veiculo{
private:
    double toneladas;
public:
    Caminhao(): Veiculo(), toneladas(0.0) {}
    Caminhao(double toneladas , string modelo , string  placa , int ano , double preco): Veiculo(modelo, placa, ano, preco){
        this->toneladas=toneladas;
    }
    
    void setTonelada(double toneladas){this->toneladas=toneladas;}
    double getTonelada(){return toneladas;}

    void mostrar(){
        cout << "---CarroPasseio---" << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Placa: " << placa << endl;
        cout << "Ano: " << ano << endl;
        cout << "Preco por dia: " << preco << endl;
        cout << "Toneladas: " << toneladas << endl;
    }

    
};

int main(){
int por , an;
int num;
string mod, pla; 
double pre, ton;
CarroPasseio p1;
Caminhao p2;
p1.mostrar();
p2.mostrar();

cout << "---Definir de Carro de Passeio---" << endl;
cout << "Digite a quantidade de porta" << endl;
cin >> por;
p1.setPorta(por);
cin.ignore();

cout << "Digite o modelo " <<endl;
getline(cin, mod);
cin.ignore();

p1.setModelo(mod);
cout << "Digite  a placa" << endl;
getline(cin , pla);

p1.setPlaca(pla);
cout << "Digite o ano " << endl;
cin >> an;

p1.setAno(an);

cout << "Digite o valor do preco do aluguel por dia" << endl;
cin >> pre;
p1.setPreco(pre);

cout << "---Definir de Caminhao---" << endl;
cout << "Digite as toneladas" << endl;
cin >> ton;
p2.setTonelada(ton);

cin.ignore();
cout << "Digite o modelo " <<endl;
getline(cin, mod);
p2.setModelo(mod);

cin.ignore();
cout << "Digite  a placa" << endl;
getline(cin , pla);
p2.setPlaca(pla);

cout << "Digite o ano " << endl;
cin >> an;
p2.setAno(an);

cout << "Digite o valor do preco do aluguel por dia" << endl;
cin >> pre;
p2.setPreco(pre);

cout << "Digite quanto dias deseja alugar"  << endl;
cin >> num;

p1.mostrar();
cout << "O Custo total dele é " << p1.Custo(num) << endl;
p2.mostrar();
cout << "O Custo total dele é " << p2.Custo(num) << endl;;


return 0;
}
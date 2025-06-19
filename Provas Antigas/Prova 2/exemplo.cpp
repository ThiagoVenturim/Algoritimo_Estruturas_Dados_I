#include <iostream>
#include <stdexcepct>
using namespace std
class Conta{

private:
    double saldo;
public:
    Conta(double SaldoInicial): saldo(SaldoInicial(){}
    void sacas(double valor){
        if(valor>saldo){
            throw runtime_erro("Saldo Insuficente");
        }
     saldo -=valor;
    }

};

int main(){
    Conta conta(100.00);
    try{
        conta.sacar(30);
        conta.sacar(80);   
    }catch(runtime_erros &e){
        cout<<"Erros: " << e.what << endl;
    }
return 0;
}
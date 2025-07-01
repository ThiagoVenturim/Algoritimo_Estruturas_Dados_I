#include <iostream>
using namespace std;
class Caixa{
private:
    float comprimento;
    float largura;
    float altura;

    float AreaBase(){return comprimento*largura;}
public:
    Caixa(): comprimento(0.0), largura(0.0), altura(0.0){}
    Caixa(float comprimento, float largura ,float altura){
        this->comprimento=comprimento;
        this->largura=largura;
        this->altura;altura;
    }

    void setComprimento(float comprimento){this->comprimento=comprimento;}
    void setLargura(float largura){this->largura=largura;}
    void setAltura(float altura){this->altura=altura;}

    float getComprimento(){return comprimento;}
    float getLargura(){ return largura;}
    float getAltura(){return altura;}

    float Volume(){ return comprimento*largura*altura ;}
    float ImprimirAreaBase(){return AreaBase()}
};AreaBase

int main(){
    Caixa p1;
    float altura, comprimento, altura;
    cout <<"Digite Altura: " << endl;
    cin << altura;
    p1.setAltura(altura);
    cout <<"Digite Largura: " << endl;
    cin << largura;
    p1.setLargura(largura);
    cout <<"Digite o comprimento: " << endl;
    cin << comprimento;
    p1.setComprimento(comprimento);
    cout << "O volume da caixa: " << p1.Volume() << endl;


return 0;
}
#include <iostream>
using namespace std;

class Relogio{
private:
    int seg;
    int min;
    int hor;
public:
    Relogio(): seg(0), min(0), hor(0){}
    Relogio(int h, int m , int s){
        hor=h;
        min=m;
        seg=s;
    }
    void setSegundo(int s){seg=s;}
    void setMinuto(int m){min=m;}
    void setHora(int h){hor=h;}

    int getSegundo(){return seg;}
    int getMinuto(){return min;}
    int getHora(){  return hor;}

    void DefinirHora(int h, int m , int s){
        hor=h;
        min=m;
        seg=s;
    }

    void avancar(int s){
        seg+=s;
        if(seg>=60){
            min+=seg/60;
            seg= seg%60;
        }            
        if(min >= 60){
            hor+=min/60;
            min= min%60;
        }
        if(hor >= 24){
            hor= hor%24;      
        }
    }    

    void Mostrar(){
        cout<< hor << ":" <<min <<":" << seg << endl; 
    }
    
};

int main(){
    Relogio sala;
    int h,  m,  s;
    int num=0;
    cout << "------Bem vindo ao relogio------"<<endl ;
    cout << "MENU: " << endl;
    cout << "1- Definir horario: " << endl; 
    cout << "2- Avancar horario em Segundos: " << endl;
    cout << "3- Mostrar horario: " << endl;
    cout << "4- Fechar Relogio: " << endl;
    
    while(num!=4){    
        cout << "Digite a opcao do menu: " <<endl;
        cin >> num;

        if(num > 4 || num < 1 ){
            cout << "Tinha que ser usuario" <<endl;
            continue;
        }

        switch(num){
        case 1:
            cout << "Digite o horario" << endl;
            cin >> h >> m >> s;
            if( (h < 0 || m < 0 || s <0) || (h > 23 || m > 59 || s > 59) ){
                cout << "Tinha que ser usuario" <<endl;
            }else{
                sala.DefinirHora(h, m, s);
            }
        break;

        case 2:
            cout << "Digite os segundos para avançar" << endl;
            cin >> s;
            if (s < 0){
                cout << "Tinha que ser usuario" <<endl;
            }else{
                sala.avancar(s); 
            }            
        break;
        
        case 3:
            sala.Mostrar();
        break;
        
        case 4: 
            cout<< "Fim do Programa " << endl;
        break;
        }
    }
    
return 0;
}
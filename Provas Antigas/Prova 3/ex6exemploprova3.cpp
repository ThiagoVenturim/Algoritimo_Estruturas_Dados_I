#include <iostream> 
using namespace std;

class ArCond{
private:
    float temp;
    int poten;
public:
    ArCond(): temp(0.0), poten(0){}
    ArCond(float temp, int poten): temp(temp), poten(poten){}

    void setTemp(float temp){this->temp=temp;}
    float getTemp(){return temp;}
    int getpotencia(){return poten;} 

    void aumentarPotencia(){    
        if(poten<10){
            if((poten+1)*1.8 < temp ){
                poten++;
                cout << poten << endl;
            }else{
                cout<< "A temperatura ambinte nao pode ficar menor que a externa" << endl;
            }

        }else{
            cout << "A potencia ja esta no maximo" << endl;
        }
    } 

    void DimunirPotencia(){
        if(poten>0){
            poten--;
            cout << poten << endl;
        }else{
            cout << "A potencia ja esta no minino" << endl;
        }
    }

    void Temperatura(){
        cout << "A temperatura e: "  << temp - poten*1.8 << endl;
    }
};

int main(){
    ArCond p1;
    float temperatura;
    cout<< "Digite a temperatura: " << endl;
    cin >> temperatura;
    p1.setTemp(temperatura);
    p1.DimunirPotencia();
    p1.aumentarPotencia();
    p1.aumentarPotencia();
    p1.aumentarPotencia();
    p1.aumentarPotencia();
    p1.aumentarPotencia();
    p1.Temperatura();
return 0;
}
#include <iostream>
using namespace std;

class TV{
private:    
    int calAtual;
    int volAtual;
public:
    TV(): calAtual(0), volAtual(0){}
    TV(int calAtual, int volAtual){
        this->calAtual=calAtual;
        this->volAtual=volAtual;
    }

    int getCalAtual(){return calAtual;}
    int getVolAtual(){return volAtual;}

    
    void diminuirCanal(){
        if(calAtual == 0){
            cout <<"Canal ja esta no menor limite"<<endl;
        }else{
            calAtual--;
        }
    }

    void almentarCanal(){
        if(calAtual == 100){
            cout <<"Canal ja esta no maior limite"<<endl;
        }else{
            calAtual++;
        }
    }

    void setCalAtual(int calAtual){
        if(calAtual<=100 && calAtual>=0){
            this->calAtual=calAtual;
        }else{
        cout << "Canal fora do limite" << endl;
        }
    }

    void diminuirVolume(){
        if(volAtual == 0){
            cout <<"o Volume  ja esta no menor limite"<<endl;
        }else{
            volAtual--;
        }
    }

    void almentarVolume(){
        if(volAtual == 100){
            cout <<"O volume ja esta no maior limite"<<endl;
        }else{
            volAtual++;
        }
    }

    void Mostrar(){
        cout<<"Canal Atual: " << calAtual <<endl;
        cout<<"Volume Atual: " << volAtual <<endl;
    }
};

int main(){
    TV p1;
    int num; 
    cout << "Digite o Canal que vc quer ir" << endl;
    cin >> num;
    p1.setCalAtual(num);
    p1.almentarCanal();
    p1.almentarVolume();
    p1.almentarVolume();
    p1.diminuirVolume();
    p1.diminuirVolume();
    p1.Mostrar();
return 0;    
}



#include <iostream>
using namespace std;

class Televisao{
private:
    int volume;
    int canal;
public:
    Televisao(){
        volume=0;
        canal=0;
    }

    void setDiminuirVolume(){
        if(volume > 0 ){
            volume--;
        }else{
            cout << "Volume no menor limite" << endl;            
        }
    }

    void setAumentarVolume(){
        if(volume < 100 ){
            volume++;
        }else{
            cout << "Volume no maior limite" << endl;            
        }
    }

    void setDiminuirCal(){
        if( canal > 0 ){
            canal--;
        }else{
            cout << "Canal no menor limite" << endl;            
        }
    }

    
    void setAumentarCanal(){
        if( canal < 100 ){
            canal++;
        }else{
            cout << "Canal no maior limite" << endl;            
        }
    }

    void setTrocarCanal(int c){
        if(c <= 100){
        canal=c;
        }else{
            cout<< "Canal fora do limite"<<endl;
        }
    }

    void getMostrar(int &v, int &c){
        v= volume;
        c=canal;
    }


};

int main(){
    Televisao p1;
    int v, c; 
    
    cout << "Aletere o canal" << endl;
    cin >> c; 

    p1.setTrocarCanal(c);

    p1.setAumentarCanal();
    p1.setAumentarCanal();
    p1.setAumentarCanal();
    
    p1.setAumentarVolume();
    p1.setAumentarVolume();
    p1.setAumentarVolume();
    p1.setAumentarVolume();
    p1.setAumentarVolume();
    p1.setAumentarVolume();
    p1.setAumentarVolume();
    p1.setAumentarVolume();
    p1.setAumentarVolume();
    p1.setAumentarVolume();
    p1.setAumentarVolume();
    p1.setAumentarVolume();
    p1.setAumentarVolume();

    p1.getMostrar(v, c);
    cout<< "Volume:" << v << " \n Canal:" << c << endl; 

    p1.setDiminuirCal();
    p1.setDiminuirCal();
    p1.setDiminuirVolume();
    p1.setDiminuirVolume();
    p1.setDiminuirVolume();    

     p1.getMostrar(v, c);
    cout<< "Volume:" << v << " \n Canal:" << c << endl; 


return 0;    
}
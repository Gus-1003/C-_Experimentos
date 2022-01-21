#include <iostream>
#include <locale.h>
using namespace std;


int main(){
    unsigned int distancia;
    unsigned int litro;
    float consumo;

    cout <<"\nQual a distância percorrida pelo carro:" << endl;
    cin >> distancia;
    cout <<"\nQuantos litros de gasolina ele consome ao percorrer essa distância?" << endl;
    cin >> litro;

    if (distancia > 1 && litro >= 1){
         consumo = distancia / litro;
         cout << "o consumo do seu carro é:" << consumo << endl;
        if (consumo < 8){
            cout << "Seu carro consome muita gasolina. melhor vender." << endl;
        }
            else if (consumo > 8 && consumo < 14){
                cout << "Seu carro é econômico." << endl;
            }
                else if (consumo > 14){
                    cout << "Seu carro é super econômico" << endl;
                }

    }

    cout << "Não se arrisque no trânsito. Respeite as normas." << endl;
    return 0;
}
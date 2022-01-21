#include <iostream>
using namespace std;

int main(){
     
    int n1;


    cout << "Digite um número:  " << endl;
    cin >> n1;

    if (n1 > 0 && n1 !=  1 && n1 >= 2 &&  n1 % 2 == 0){
        cout << "n1 foi identificado como um número par." << endl;
        if (n1 > 100)
            cout << "maior que 100" << endl;}
    else 
        if (n1 == 1 || n1 % 2 >= 1){
        cout << "n1 foi identificado como um némero impar." << endl;
            if (n1 > 0)
            cout << "sendo positivo" << endl;
            else 
                if(n1 < 0)
                cout << "sendo negativo" << endl; } 
        
    cout << "operação finalizada com sucesso" << endl;
    
    system ("pause");
    return 0;
}
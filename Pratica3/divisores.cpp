#include <iostream>
using namespace std;

int main(){
     
    int a, b = 1, c , d=1; // a = número escolhido, b = divisor, c = resultado da divisão.

    cout << "\tBEM-VINDO" << endl << endl;
    cout << "Quer descobrir todos os divisores de um número?" << endl << endl;
    
    do {
        cout << "Digite o valor. Lembrando que esse valor deve ser maior que 0:  " ;
        cin >> a;
            if (a < 0)
                cout << "Valor indisponivel. corrija e tente novamente.";
    } while (a < 0);

    
    while (a >= b) {
        if (a % b == 0) {
          c = a/b;
          cout << " esse número é multiplo de " << b << endl;  
        }
    b++;
    };

    return 0;
}
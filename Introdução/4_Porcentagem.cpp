/*
4. Leia um número "inteiro N" e um "percentual qualquer" e escreva qual o "valor do percentual aplicado" ao número.
*/

#include <iostream>
using namespace std;
int main(){
    cout.precision(2);
    cout<<std::fixed;
    int inteiro_N, percentual_Q;
    float percentual_A; 

    cout << "Digite um numero inteiro?" << endl;
    cin >> inteiro_N;

    cout << "Digite um valor inteiro para ser usado como percentual?" << endl;
    cin >> percentual_Q;
    cout << "De acordo com o numero digitado o seu percentual sera de: " << percentual_Q/100 << endl;

    percentual_A = ( inteiro_N * (percentual_Q / 100));

    cout << "O valor do percentual aplicado foi: " << percentual_A << endl;

    cout << "operacao finalizada" << endl;

    return 0;
}

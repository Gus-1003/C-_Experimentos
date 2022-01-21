#include <iostream>
#include <locale.h>
using namespace std;

//O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
//Equiláteros: tem os comprimentos dos três lados iguais;
//Isósceles: tem os comprimentos de dois lados iguais;
//Escaleno: tem os comprimentos dos três lados diferentes.


int main(){
    unsigned int a;
    unsigned int b;
    unsigned int c;

    cout << "quanto o comprimento do lado a:  " << endl;
    cin >> a;

    cout << "quanto o comprimento do lado de b:  " << endl;
    cin >> b;

    cout << "quanto o comprimento do lado c:  " << endl;
    cin >> c;

    if (a < (b+c) && b < (a+c) && c <(a+b)){
        cout << "a forma é um triangulo" << endl;
        if (a == b == c){
            cout << "Com os 3 lados iguais esse triângulo é equilátero" << endl;
            }         
            else 
                 if ((a == b) || (b == c) || (a == c)) {
                     cout << "Esse triângulo possui 2 lados iguais, chamamos ele de isósceles" << endl;
                     }
                      else 
                        if (a != b != c){
                             cout << "Com todos os lados deferentes esse triângulo é chamado de escaleno" << endl;
                        } }else 
                             cout << "Os lados fornecidos não formam um triângulo" << endl;
    
    cout << "fim da operação, volte sempre." << endl;
    system ("pause");
    return 0;
}
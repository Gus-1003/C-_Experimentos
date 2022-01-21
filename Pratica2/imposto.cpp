#include <iostream>
using namespace std;

int main(){
     
    unsigned int ano;
    float preço;

    cout << "Bem vindo ao programa de valores" << endl;

    cout << "Digite o ano do veículo:  " << endl;
    cin >> ano;

    cout << "Digite o preço do veículo:   " << endl;
    cin >> preço;

      if (ano < 1990 && ano > 1900){
        cout << "o seu veículo é anterior a década de 90" << endl;
        cout << "a taxa de juros sobre o seu valor é 1%, de acordo com o preço o valor será:   " << endl;
        cout << 0.01 * preço + preço << endl;}
      else
         if (ano > 1990 && ano < 2020) {
                cout << "Parabéns, você tem um veículo relativamente novo" << endl;
                cout << "a taxa de juros sobre o valor é de 1,5%, de acordo com o preço o valor será:  " << endl;
                cout << 0.015 * preço + preço << endl; }
    
            else
              if (ano < 1900){
                cout << "data invalida, volte e corrija" << endl; }

cout << "obrigado por usar o programa, volte sempre." << endl;
system ("pause");
return 0;


 }
/* 
2. Calcule e escreva a quantidade de dinheiro gasto por um fumante a partir da leitura das informações "número de anos" que ele fuma, 
"nº de cigarros fumados por dia" e "preço de uma carteira".
*/

#include <iostream>
using namespace std;

int main(){
   
   
    cout.precision(2);
    cout<<std::fixed;

    float anos_fumando, cigarros_dia, valor_carteira, carteira_Ano, carteira;

    cout << "A quantos anos fumando?"  << endl;
      cin >> anos_fumando;
    cout << "Quantos cigarros por dia?" << endl;
      cin >> cigarros_dia;
    cout << "Custo de uma carteira?" << endl;
      cin >> valor_carteira;

    carteira = cigarros_dia / 20; // Estou considerando que cada carteira tenha 20 unidades de cigarro;
    carteira_Ano = 365 * carteira;

    cout << cigarros_dia << " cigarros por dia em um ano sao: " << carteira_Ano << " carteiras de cigarro." << endl;

    cout << "De acordo com a quantidade, vezes o custo e vezes o valor da carteira. O usuario perdeu: ";

    cout << carteira_Ano * anos_fumando * valor_carteira << " Reais" << endl;;

    cout << "Fim do Sistema" << endl;
    
  return 0;
}

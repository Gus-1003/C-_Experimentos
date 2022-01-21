#include <iostream>
using namespace std;

int main(){
     
float valor1;
float valor2;
unsigned int código1;
unsigned int código2;
unsigned int quanti;

cout << "BEM VINDO" << endl << endl;
cout << "Este programa ira le ajudar com a sua conta na lachonete" << endl << endl;

cout << "Escolha a seguir o prato e a bebida para compor sua refeição" << endl << endl;
cout << "AVISO: Use os códigos para escolher os pratos" << endl << endl;

cout << "como sanduíche temos: cachorro quente (100), Baurú simples(101)" << endl; 
cout << "Baurú com ovo(102), hamburguer(103) ou cheesburger(104)" << endl << endl;

cout << "como bebida temos: refrigerante(105), suco(106) ou Nescau(107)" << endl << endl;

cout << "qual sanduiche ira querer?" << endl;
cin >> código1;
cout << "quantos ira querer?" << endl;
cin >> quanti;

cout << "qual bebida ira querer?" << endl;
cin >> código2;
cout << "quantos ira querer?" << endl;
cin >> quanti;


switch(código1){
        case 100:
          cout << "você escolheu um cachorro quente" << endl;
          cout << "O preço unitario é R$ 1,10" << endl; 
          valor1 = 1.10;
            break;
        case 101:
          cout << "você escolheu um Baurú simples" << endl;
          cout << "O preço unitario é R$ 1,30" << endl;
          valor1 = 1.30;
            break;
        case 102:
          cout << "você escolheu um Baurú com ovo" << endl;
          cout << "O preço unitario é R$ 1,50" << endl;
          valor1 = 1.50;
            break;
        case 103:
          cout << "você escolheu um hamburguer" << endl;
          cout << "O preço unitario é R$ 1,10" << endl;
          valor1 = 1.10;
            break;
        case 104:
          cout << "você escolheu um cheesburger" << endl;cout << "O preço unitario é R$ 1,30" << endl;
          valor1 = 1.30;
            break;}

switch(código2){
        case 105:
          cout << "você escolheu refrigerante" << endl;
          cout << "O preço unitario é R$ 1,00" << endl;
          valor2 = 1.00;
            break;
        case 106:
          cout << "você escolheu suco" << endl;
          cout << "O preço unitario é R$ 2,00" << endl;
          valor2 = 2.00;
            break;
        case 107:
          cout << "você escolheu Nescau" << endl;
          cout << "O preço unitario é R$ 1,50" << endl;
          valor2 = 1.50;
            break;}

cout << "A conta dos produtos pela quantidade custara:   " << endl;
cout << valor1*quanti + valor2*quanti << endl;

cout << "obrigado pela preferencia e volte sempre.";
        
return 0;
}

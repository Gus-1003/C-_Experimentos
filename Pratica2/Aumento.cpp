#include <iostream>
using namespace std;

int main(){
     
float salário;
unsigned int cargo;

cout << "BEM VINDO" << endl;
cout << "parabéns, se você está nesse app você está prestes a ganhar um aumento salárial." << endl;

cout << "Qual é o seu salário atual:   " << endl;
cin >> salário;
cout << "Identifique a seguir o ser cargo: se for gerente digite (101), se for engenheiro (102), se for um técnico (103):   " << endl;
cin >> cargo;


switch(cargo){
    case 101:
      cout << "parabéns senhor(a) gerente" << endl;
      cout << "seu salário será aumentado em 10%, seu novo salário será de:  " << endl;
      cout << 0.10 * salário + salário << endl;
      cout << "o aumento foi no valor de:  " << 0.40 * salário  << endl;
      break;
    case 102:
      cout << "Se o(a) senhor(a) é engenheiro(a) pode ficar feliz" << endl;
      cout << "seu salário será aumentado em 20%, seu novo salário será de:  " << endl;
      cout << 0.20 * salário + salário << endl;
      cout << "o aumento foi no valor de:  " << 0.40 * salário  << endl;
      break;
    case 103:
      cout << "Se o(a) senhor(a) é um(a) tecnico(a) terá uma grande recompensa" << endl;
      cout << "seu salário será aumentado em 30%, seu novo salário será de:  " << endl;
      cout << 0.30 * salário + salário << endl;
      cout << "o aumento foi no valor de:  " << 0.40 * salário  << endl;
    
    default: 
    cout << "caso o(a) senhor(a) tenha sentido falta de um código só seu é aqui que será recompensado(a)" << endl;
    cout << "seu salário será aumentado em 40%, seu novo salário será de:  " << endl;
    cout << 0.40 * salário + salário << endl;
    cout << "o aumento foi no valor de:  " << 0.40 * salário  << endl;
      break;}
    
cout << "Ficou feliz pelo aumento?" << endl;
cout << "não precisa responder kkkk" << endl;
cout << "sua operação aqui foi finalizada" << endl;
cout << "volte sempre" << endl; 

system ("pause");  
return 0;
}
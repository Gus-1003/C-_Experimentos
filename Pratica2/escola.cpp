#include <iostream>
using namespace std;

int main(){
     
short nível;
int quant_horas_aula;
const short v1=12, v2=17, v3=25;

cout << "BEM VINDO" << endl;
cout << "Aqui se encontra a ficha salárial dos professores da escola Aprender" << endl;


cout << "Identifique a seguir o nível em que o doscente lesciona: (1), (2) ou (3)?    " << endl;
cin >> nível;
cout << "quantas horas/aula o professor ministra:   " << endl;
cin >> quant_horas_aula;


switch(nível){
    case 1:
      cout << "classificado como nivel 1" << endl;
      cout << "sua hora/aula equivale a R$ 12,00. De acordo com a quatidade de aulas ministradas o seu salário é de:  " << endl;
      cout << quant_horas_aula * v1 << endl;
      break;
    case 2:
      cout << "classificado como nivel 2" << endl;
      cout << "sua hora/aula equivale a R$ 17,00. De acordo com a quatidade de aulas ministradas o seu salário é de:  " << endl;
      cout << quant_horas_aula * v2 << endl;
      break;
    case 3:
      cout << "classificado como nivel 3" << endl;
      cout << "sua hora/aula equivale a R$ 25,00. De acordo com a quatidade de aulas ministradas o seu salário é de:  " << endl;
      cout << quant_horas_aula * v3 << endl;
    
    default: 
    cout << "Nível de ensino inválido." << endl;
    cout << "seu salário não poderá ser medido por esse programa." << endl;
      break;}
    

cout << "sua operação aqui foi finalizada" << endl;
cout << "volte sempre" << endl; 

system ("pause");  
return 0;
}

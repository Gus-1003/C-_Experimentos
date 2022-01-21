#include <iostream>
using namespace std;

int main(){
     
float a;
unsigned short sexo;

cout << "lembre-se de usar ponto invés da virgula na altura" << endl;
cout << "Digite a altura:  " << endl;
cin >> a;

cout << "qual é o seu sexo? se homem digite 0 ou se for mulher digite 1:   " << endl;
cin >> sexo;

switch(sexo){
        case 0:
          cout << "você é homem" << endl;
          cout << "seu peso ideal é:   " << 72.7 * a  - 58  << endl;
            break;
        case 1:
          cout << "você é mulher" << endl;
          cout << "seu peso ideal é:   " << 62.1 * a - 44.7  << endl;
            break;}
        
return 0;
}

    

#include <iostream>
#include <locale.h>
using namespace std;


int main(){
    float nota;
    unsigned short trab, ava, exa;

    cout <<"\nAdicione a sua note (de 1 a 10) do trabalho de laboratório:" << endl;
    cin >> trab;
    cout <<"\nAdicione a sua nota (de 1 a 10) da sua avaliação semestral:" << endl;
    cin >> ava;
    cout <<"\nAdicione a sua nota (de 1 a 10)do seu exame final:" << endl;
    cin >> exa;

    nota = (trab * 0.2) + (ava * 0.3) + (exa * 0.5) ;

    if (nota > 0 && nota < 3){
        cout << "sua média foi:" << endl;
        cout << nota << endl;
        cout << "Você foi reprovado. estude" << endl<< endl;
    }          
        else if (nota >= 3 && nota < 5){
            cout << "sua média foi:" << endl;
            cout << nota << endl;
            cout << "Infelizmente você ficou em recuperação. estude mais, tente novamente."<< endl<< endl;
        }
            else if (nota >= 5 && nota <= 10){
                cout << "sua média foi:" << endl;
                cout <<  nota << endl;
                cout << "parabéns. você foi aprovado.  " << endl<< endl;
            }
                    else if (nota > 10){
                        cout << "Sua média não corresponde a média escolar." << endl<< endl;
                    }
  
  cout << "Independe do seu resultado siga estudando, nunca pare." << endl;         
  system ("pause");
  return 0;

} 

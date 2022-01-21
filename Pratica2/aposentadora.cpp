#include <iostream>
#include <locale.h>
using namespace std;


int main(){
    unsigned short idade;
    unsigned short tempo;

    cout <<"\nAdicione a sua note idade:" << endl;
    cin >> idade;
    cout <<"\nAdicione o seu tempo de contribuição:" << endl;
    cin >> tempo;

    if (idade >= 60){
        cout << "O(a) senhor(a) já alcançou o teto de idade, agora pode se aposentar." << endl;
    }          
        else if (idade < 60){
            cout << "A sua idade ainda é insuficiente, faltam:" << endl;
            cout << 60 - idade << "\tanos" << endl;

        }
            else if (tempo >= 30){
                cout << "parabéns. O(a) senhor(a) atingiu o tempo minimo de contribuição para se aposentar." << endl;
            }
                    else if (tempo < 30){
                        cout << "infelizmente o tempo de contribuição ainda não foi obtido." << endl;
                        cout << "faltam:   " << 30 - tempo << "para se aposentar" << endl;
                    }
                        else if (idade > 60 && tempo > 25){
                             cout << "Parabéns. O(A) senhor(a) pode se aposentar" << endl;}
  
  cout << "O trabalho engrandece o homem." << endl;         
  system ("pause");
  return 0;

} 
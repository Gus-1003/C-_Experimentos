/*
5. Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso em horas, minutos e segundos.
*/

#include <iostream>
using namespace std;

int main(){
     int segundosT, minutosT=0, segundos=0, minutos=0, horas=0;
     cout << "Diga a quantidade de segundos:  ";
     cin >> segundosT; //3660; //3550; //50;
     
     if (segundosT >= 60){
          minutosT = segundosT / 60; //61 = 3660/60; 59 = 3550/60;

          if (minutosT >= 60){
               horas = minutosT / 60; //1 = 61/60;

               minutos = minutosT % 60; //1 = 61%60;

               segundos = minutos % 60; //0 = 1/60;

               cout << horas << ":" << minutos << ":" << segundos << "\thoras";
          
          } else if (minutosT < 60){
               minutos = minutosT; // minutos = 59
               segundos = segundosT % 60; // 10 = 3550 % 60

               cout << horas << ":" << minutos << ":" << segundos << "\thoras";
          }
          
     } else if (segundosT < 60){
          cout << segundosT << " segundos"; // 50
     }
          
    
    return 0;
}

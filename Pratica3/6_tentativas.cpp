// aluno: Gustavo Gonçalves Maciel.
// Link do vídeo: https://we.tl/t-CxyJ5j0W0Z

#include <iostream>
using namespace std;

/*
+ o jogador deve descobrir um número entre 1 e 10.
+ usando até três tentativas.
+ A cada tentativa o jogador é informado se o número foi descoberto.
+ se ele é maior ou menor do que a tentativa. 
+ Se após três tentativas o jogador não descobrir o número, então ele perde o jogo. 
+ Faça um algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro do algoritmo e não estará visível para o usuário.
*/


int main(){
    const short n = 4; 
    short tent, cont = 1;

    cout << "\tBEM VINDO AO JOGA DA CAIXA MÁGICA" << endl;
    cout << "Você terá 3 chances para acertar um número de 1 à 10." << endl;
    cout << "está pronto para começar?" << endl;

    do {
      do {
        cout << "Escolha um número de 1 a 10:" << endl;
        cin >> tent;
          if (tent < 1 || tent > 10)
            cout << "Esse número não se escontra entre os número requeridos. por favor, esolha outro: " << endl;
        } while (tent < 1 || tent > 10);

        if (tent < n)
          cout << "O valor é maior que esse, tente novamente." << endl;

        if (tent > n)
          cout << "O valor é menor que esse, tente novamente." << endl;

        if (tent == n) {
          cout << "Parabéns, você acertou." << endl;
          break;
        }


        cont++;

    } while (cont <=3);

    if (tent != n)
      cout << "Infelizmente você perdeu. Não fique triste, tente novamente mais tarde." << endl;
    
    cout << "fim";
}

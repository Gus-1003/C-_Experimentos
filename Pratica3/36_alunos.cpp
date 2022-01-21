
// aluno: Gustavo Gonçalves Maciel.
// Link do vídeo: https://we.tl/t-XxG8cWTErq

#include <iostream>
using namespace std;

/*
Objetivo do trabalho: (Elaborar um algoritmo que calcule e escreva:)

- A porcentagem dos alunos que gasta acima de R$ 200,00 com outras despesas;
- A quantidade de alunos com renda pessoal maior que renda familiar;
- A porcentagem gasta com alimentação e outras despesas em relação ao somatório das rendas 
pessoal e familiar por aluno;
- O algoritmo deve finalizar quando for digitado 0 para a renda pessoal.

Variaveis ou entradas:
- Némuro de alunos = aluno;
- Renda pessoal = rp;
- Renda familiar = rf;
- Total gasto com alimentação = ga;
- Total gasto com outras despesas = gd;

variaveis necessarias para cada calculo:
- contagem de repetições = cont;
- porcentamgem de (despesa/renda) dos alunos = md;
- contagem de alunos que gastam acima de 200 = alunog;
- contagem de alunos com rp > rf = alunot;
- porcentagem dos (alunog / quant. de alunos) = pad;
*/




int main(){
    int aluno, alunog = 0, alunot = 0, cont = 1; 
    //alunog = aluno com altos gastos; alunot = aluno trabalhador.
    float rp, rf, ga, gd;
    float pad, md; 

    
    cout << "Digite a quantidade de alunos:   ";
    cin >> aluno;   
        
    if (cont <= aluno) {
      while (cont <= aluno){
            
            cout << "digite a renda pessoal do aluno " << cont << ":" << endl;
            cin >> rp;
              if (rp == 0){
                break;
              }

            cout << "digite a renda familiar do aluno " << cont << ":" << endl;
            cin >> rf;

            cout << "digite o total de gastos com alimentação do aluno " << cont << ":" << endl;
            cin >> ga;

            cout << "digite o total de gastos com outras despesas do aluno " << cont << ":" << endl;
            cin >> gd; 
            cout << endl;

            md = (ga+gd)*100/(rp+rf);
            cout << "A porcentagem dos gastos do aluno é: " << md << "%" << endl  << endl;

            if (gd > 200){
              alunog++;
            }
              
              
            if (rp > rf){
              alunot++;
            }
              

            if (cont != aluno){
              cout << "próxomo aluno." << endl;
            }
            cont ++;
          } 
          if (rp != 0) {
            pad = (alunog * 100) / aluno;
            cout << "A porcentagem dos alunos que gasta acima de R$ 200,00 com outras despesas é: " << pad << "%" << endl;

            cout << "A quantidade de alunos com renda pessoal maior que renda familiar é: " << alunot << endl;
          }
          
    }
        

    cout << "fim" << endl;
}

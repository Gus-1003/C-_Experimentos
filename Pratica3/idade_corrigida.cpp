#include <iostream>
using namespace std;

int main(){
     
    int idade,mdade = 0,pdade = 200, cod1, cod2, rep = 1; 
    
    while (rep <= 3) { 
      
      cout << "Qual a sua idade:" << endl;
      cin >> idade;
      cout << "digite o seu codigo:" << endl;
      cin >> cod1;
            if (idade < 1 || idade > 100){
            cout << "idade invalida, repita a questão." << endl;}
            else 
                if (idade > 1 || idade < 100){
                    cout << "sua idade é valida" << endl;
                        if (idade >= mdade){
                            mdade = idade;
                            cout << idade << "\tanos" << endl;
                            cod2 = cod1; }
                        if (idade < pdade){
                            pdade = idade;
                            cout << idade << "\tanos" << endl;
                        }
                  }
      rep ++;            
      }
                
    
    cout << "maior idade é:" << mdade << "anos" << endl;
    cout << "o código da maior idade é:" << cod2 << endl;
    cout << "menor idade é:" << pdade << "anos" << endl;
    
    return 0;
}
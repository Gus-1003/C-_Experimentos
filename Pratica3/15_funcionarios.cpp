#include <iostream>
using namespace std;

int main(){
     
int ID, id = 0, ht, dep, cont; // ht = horas trabalhadas , dep = numero de dependentes.
float sb, sb2 =0; // salario bruto
float sl, sl2 =0;  // salario liquido

    for ( cont = 0; cont < 10; cont++){ 
        do {
            cout << "Digite o seu ID, valores de 1 a 10:  ";
            cin >> ID;
            cout << "Digite o número de horas trabalhadas:  ";
            cin >> ht;
            cout << "Digite o número de dependentes:   ";
            cin >> dep; 
            cout << endl;
                if (ID < 0 || ID > 10 || ht < 0 || dep < 0)
                    cout << "Um de seus dados está incorreto. verifique e tente novamente." << endl;

            sb = (ht * 12  + dep * 40);
            sl = (sb - sb * 0.135);

                if (id < ID) {
                   id = ID; 
                if (sb2 <= sb) 
                   sb2 = sb;
                if (sl2 <= sl) 
                   sl2 = sl;   
                }
            
                                               
        cout << "Número de registro:   " << id << endl;   
        cout << "seu salário bruto é:   " << sb2 << endl;
        cout << "seu salário líquido é:   " << sl2 << endl << endl;

            sb2 = 0;
            sl2 = 0;
        } while (ID < 0 || ID > 10 || ht < 0 || dep < 0);
      }             
return 0;
}

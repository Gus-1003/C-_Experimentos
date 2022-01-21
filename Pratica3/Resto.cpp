#include <iostream>
using namespace std;

int main(){
     
    int a, b, r; // a = dividendo, b = divisor, r = resto
    float c; // c = quociente

    cout << "\tBEM-VINDO" << endl << endl;
    cout << "Quer descobrir o resto de uma operação?" << endl << endl;

    cout << "Digite o 1º valor (Dividendo) da operação:  " ;
    cin >> a;
    cout << "digite o 2º valor (divisor) da operação:  ";
    cin >> b;

    c = (a/b);
    cout << "O quociente dessa operação será:  " << c << endl;
  
    r = (b * c) - a;
    
    cout << "o resto desssa operação será:  " << r << endl;

    return 0;
}
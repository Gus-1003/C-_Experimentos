#include <iostream>
using namespace std;

int main(){
     
    int a, b, r; // a = dividendo, b = divisor, r = resto
    float c; // c = quociente

    cout << "\tBEM-VINDO" << endl << endl;
    cout << "Quer descobrir o resto de uma opera��o?" << endl << endl;

    cout << "Digite o 1� valor (Dividendo) da opera��o:  " ;
    cin >> a;
    cout << "digite o 2� valor (divisor) da opera��o:  ";
    cin >> b;

    c = (a/b);
    cout << "O quociente dessa opera��o ser�:  " << c << endl;
  
    r = (b * c) - a;
    
    cout << "o resto desssa opera��o ser�:  " << r << endl;

    return 0;
}
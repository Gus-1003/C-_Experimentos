/* 
1. Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
*/

#include <iostream>
using namespace std; 

int main (){
    int anos, meses , dias;  

    cout <<  "Quantos anos você tem? " << endl;
    cin >> anos;
    cout <<  "Quantos meses você tem? " << endl;
    cin >> meses;
    cout <<  "Quantos dias você tem? " << endl;
    cin >> dias;

    cout << ( (anos * 365) + (meses * 30) + dias ) << endl;

    return 0;
}

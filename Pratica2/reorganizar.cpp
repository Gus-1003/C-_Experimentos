#include <iostream>
using namespace std;

int main(){
     
int a,b,c;
char ordem;



cout << "BEM VINDO" << endl;
cout << "vamos organizar os seus némuros!" << endl;


cout << "Identifique a seguir 3 digitos:" << endl;
cin >> a >> endl >>  b >> endl >> c >> endl;
cout << "Qual é a ordem desejada:" << endl;

swith (ordem){
    case 'd':
    if (a > b && b > c){
        cout << "a ordem do maior para o menor é" << a << b << c << endl;
    }          
        else if (a > c && c > b){
            cout << a << c << b << endl;

        }
            else if (b > a && a > c){
                cout << "sua média foi:" << endl;
            }
                    else if (b > c && c > a){
                        cout << "Sua média não corresponde a média escolar." << endl<< endl;
                    }
                        else if (c > b && b > a){
                            cout << "Sua média não corresponde a média escolar." << endl<< endl;
                        }
                            else if (c > a && a > b){
                                cout << "Sua média não corresponde a média escolar." << endl<< endl;
                            }
    

 }
if (a > b && b > c){
        cout << "a ordem do maior para o menor é" << a << b << c << endl;
    }          
        else if (a > c && c > b){
            cout << a << c << b << endl;

        }
            else if (b > a && a > c){
                cout << "sua média foi:" << endl;
            }
                    else if (b > c && c > a){
                        cout << "Sua média não corresponde a média escolar." << endl<< endl;
                    }
                        else if (c > b && b > a){
                            cout << "Sua média não corresponde a média escolar." << endl<< endl;
                        }
                            else if (c > a && a > b){
                                cout << "Sua média não corresponde a média escolar." << endl<< endl;
                            }
    

cout << "sua operação aqui foi finalizada" << endl;
cout << "volte sempre" << endl; 

system ("pause");  
return 0;
}
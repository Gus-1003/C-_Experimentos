#include <iostream>
using namespace std;
int main(){
     cout.precision(2);
    cout<<std::fixed;
    float v1; //valor lido em dolares
    float v2; //cotação da converção
    float v3; //valor em reais

    cout << "valor em dolares:   " << endl;
    cin >> v1;
    cout << "valor de cambio:    " << endl;
    cin >> v2;
    cout << "valor monetario em reais atualmente:   " << endl;

    v3 = (v1*v2);
    
    cout << v3 << endl;
    cout << "operação finalizada" << endl;

    return 0;
}
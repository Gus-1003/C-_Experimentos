#include <iostream>
using namespace std;

int main(){
     
    float cc, cf;

    cout << "Quanto é o custo de fábrica do carro:" << endl;
    cin >> cf;

    cc = cf + (cf * 0.28) + (cf * 0.45);

    cout << "o custo ao consumidor será:  " << cc;

    return 0;
}

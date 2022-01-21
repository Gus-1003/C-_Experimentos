/*
3. Leia o "valor de uma compra" nas Lojas Sua Melhor Compra e mostre o "valor das prestações" de acordo com a "quantidade de parcelas" desejada pelo usuário. 
A loja está vendendo seus produtos a vista ou parcelado em até 10 vezes sem juros.
*/

#include <iostream>
using namespace std; 

int main (){
    ccout.precision(2);
    cout<<std::fixed;
    float valorCompra, valorPrestacao; 
    int quant_Parcelas;

    cout << "Qual o valor da compra?   " << endl;
    cin >> valorCompra;
    
    cout << "Quantas parcelas?  " << endl;
    cin >> quant_Parcela;
    
    valorPrestacao = valorCompra/quant_Parcela;
    
    cout << "O valor das suas parcelas seram:   " << valorPrestacao;
    
    return 0;
}

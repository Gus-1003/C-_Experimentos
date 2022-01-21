#include <iostream>
using namespace std;

int main(){
     
    
    short int form, triângulo = 1, quadrado = 2, Retângulo = 3, Trapézio = 4, Círculo = 5, sair = 6; 
    float b, h, B, r, d2; 
    // b = base / lado / base menor;
    // h = altura / comprimento;
    // B = nase maior;
    // r = raio e p = pi

     
    
    do { 
      
      cout << "Lembrete: As respostas dos calculos estaram na escola de metros. caso deseje calcular em outra escala faça a modificação das variáveis antecipadamente." << endl << endl;
      cout << "Insira o código do formato geometrico desejado 1-Triângulo, 2-Quadrado, 3-Retângulo, 4-Trapézio, 5-Círculo."  << endl << endl;
      cout << "caso deseje concluir a operação digite digite (6)" << endl << endl;
      cin >> form;
        switch (form){
            case 1:
                cout << "Qual o comprimento da Base:" << endl;
                cin >> b;
                cout << "Qual o comprimento da altura:" << endl;
                cin >> h;
                r = (b*h) / 2;
                cout <<  "\nA área do triângulo é:"  << r << "m" << endl;
                break;
            case 2:
                cout << "Qual o comprimento do lado:" << endl;
                cin >> b;
                r = b * b;
                cout <<  "\nA área do quandrado é:"  << r << "m" << endl;
                break;
            case 3:
                cout << "Quanto mede a largura:" << endl;
                cin >> b;
                cout << "Quanto mede o comprimento:" << endl;
                r = b * h;
                cout << "\nA área do retângulo é:"  << r << "m" << endl;
                break;
            case 4:
                cout << "Qual o comprimento da base maior:" << endl;
                cin >> B;
                cout << "Qual o comprimento da base menor:" << endl;
                cin >> b;
                cout << "Quanto mede a altura:" << endl;
                cin >> h;
                r = ((B+b)/2) * h;
                cout << "\nA área do trapézio mede:" << r << "m" << endl;
                break;
            case 5:
                cout << "Quanto mede o raio:" << endl;
                cin >> r;
                r = 3.14 * d2 * d2;
                cout << "\ná área da circunferência é:" << r << endl;
                break;}
                
      } while (form < 6);

    if (form == 6)
        cout << "operação concluida" << endl;
        else if (form > 6)
          cout << "valor inválido, reinicie o programa." << endl;

    return 0; 
}
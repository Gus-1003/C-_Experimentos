#include <iostream>
using namespace std;

int main(){
     
    
    short int form, tri�ngulo = 1, quadrado = 2, Ret�ngulo = 3, Trap�zio = 4, C�rculo = 5, sair = 6; 
    float b, h, B, r, d2; 
    // b = base / lado / base menor;
    // h = altura / comprimento;
    // B = nase maior;
    // r = raio e p = pi

     
    
    do { 
      
      cout << "Lembrete: As respostas dos calculos estaram na escola de metros. caso deseje calcular em outra escala fa�a a modifica��o das vari�veis antecipadamente." << endl << endl;
      cout << "Insira o c�digo do formato geometrico desejado 1-Tri�ngulo, 2-Quadrado, 3-Ret�ngulo, 4-Trap�zio, 5-C�rculo."  << endl << endl;
      cout << "caso deseje concluir a opera��o digite digite (6)" << endl << endl;
      cin >> form;
        switch (form){
            case 1:
                cout << "Qual o comprimento da Base:" << endl;
                cin >> b;
                cout << "Qual o comprimento da altura:" << endl;
                cin >> h;
                r = (b*h) / 2;
                cout <<  "\nA �rea do tri�ngulo �:"  << r << "m" << endl;
                break;
            case 2:
                cout << "Qual o comprimento do lado:" << endl;
                cin >> b;
                r = b * b;
                cout <<  "\nA �rea do quandrado �:"  << r << "m" << endl;
                break;
            case 3:
                cout << "Quanto mede a largura:" << endl;
                cin >> b;
                cout << "Quanto mede o comprimento:" << endl;
                r = b * h;
                cout << "\nA �rea do ret�ngulo �:"  << r << "m" << endl;
                break;
            case 4:
                cout << "Qual o comprimento da base maior:" << endl;
                cin >> B;
                cout << "Qual o comprimento da base menor:" << endl;
                cin >> b;
                cout << "Quanto mede a altura:" << endl;
                cin >> h;
                r = ((B+b)/2) * h;
                cout << "\nA �rea do trap�zio mede:" << r << "m" << endl;
                break;
            case 5:
                cout << "Quanto mede o raio:" << endl;
                cin >> r;
                r = 3.14 * d2 * d2;
                cout << "\n� �rea da circunfer�ncia �:" << r << endl;
                break;}
                
      } while (form < 6);

    if (form == 6)
        cout << "opera��o concluida" << endl;
        else if (form > 6)
          cout << "valor inv�lido, reinicie o programa." << endl;

    return 0; 
}
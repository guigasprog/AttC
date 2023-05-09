#include <iostream>
#include <math.h>

using namespace std;

int alternativaA(int a, int b){return pow(a , 2)-b;}
int alternativaB(int a, int b){return a%b;}
int alternativaC(int a, int b, int c){return pow(a, b)+c;}
float alternativaD(float a){return sqrt(pow(a,3));}

int main()
{
    /**
     *QUESTAO 13 A
     *
     */

    int numerox;
    int numeroa = 4;
    cout << "Informe Valor de X: ";
    cin >> numerox;
    cout << " " << endl;

    int resultadoa = alternativaA(numerox, numeroa);
    cout << "O Resultado de X^2-4 e: " << resultadoa << endl;
    cout << " " << endl;


    /**
    *  QUESTAO 13 B
    *
    */


    int numerob = 3;
    int resultadob = alternativaB(numerox, numerob);
    cout << "O Resto de X/3 e: " << resultadob << endl;
    cout << " " << endl;

    /**
     *QUESTAO 13 C
     *
     */


    int numeroxb;
    int numeroc = 2;
    cout << "Informe o Valor de B: ";
    cin >> numeroxb;
    cout << " " << endl;
    int resultadoc = alternativaC(numerox, numeroxb, numeroc);
    cout << "O Resultado de X^B+2 e: " << resultadoc << endl;
    cout << " " << endl;


    /**
     *QUESTAO 13 D
     *
     */


    float resultadod = alternativaD(numerox);
    cout << "O Resultado da Raiz Quadrada de X^3 e: " << resultadod << endl;

    return 0;
}

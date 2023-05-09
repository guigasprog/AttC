#include <iostream>
#include <math.h>

using namespace std;

float Area (float a, float b) {return a*pow(b,2);}
float AreaDiametro (float a, float b) {return a*pow((b/2),2);}

int main()
{
    float areadacircunferencia, raio, diametro;
    const float pi = 3.14;
    int digitocaso;
    cout << "Informe seu caso, Pressionando 1 para casos que voce possui apenas o DIAMETRO," << endl << " e 2 para casos que voce possui apenas o RAIO: "; cin >> digitocaso;
    if (digitocaso == 1)
        { cout <<
        "Informe o Valor do Diametro de sua Circunferencia: "; cin >> diametro;
        areadacircunferencia = AreaDiametro (pi, diametro);
        cout << "Essa e a Area de sua Circunferencia: " << areadacircunferencia << endl;
        cout << "Esse e seu Raio: " << diametro/2 << endl;
        }
    if (digitocaso == 2)
        {
        cout << "Informe o valor do Raio de sua Circunferencia: "; cin >> raio;
        cout << " " << endl;
        areadacircunferencia = Area(pi, raio);
        cout << "Essa e a Area de sua Circunferencia: " << areadacircunferencia << endl;
        cout << "Esse e seu Diametro: " << raio*2 << endl;
        }
    if (digitocaso != 1 && digitocaso != 2)
        {
        cout << "Seu digito nao foi correspondido tente novamente!!!" << endl;
        }

    return 0;
}

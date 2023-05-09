#include <iostream>

using namespace std;


float Distancia(float a, int b) {return a*b;}
float Quantidadedelitros(float a, int b) {return a/b;}


int main()
{
    const int kmporlitros = 12;
    float tempo;
    int velocidademedia;
    cout << "Informe o Tempo Gasto em Horas: "; cin >> tempo;
    cout << " " << endl;
    cout << "Informe a Velocidade Media: "; cin >> velocidademedia;
    cout << " " << endl;
    float distancia = Distancia(tempo, velocidademedia);
    cout << "Essa foi sua distancia percorrida: " << distancia << "Km" << " Dentro de " << tempo << " Horas, numa Velocidade de " << velocidademedia << "Km/H" << endl;
    float quantidadedelitros = Quantidadedelitros(distancia, kmporlitros);
    cout << "Esse foi a quantidade de combustivel usado: " << quantidadedelitros << " Litros" << endl;
    return 0;
}

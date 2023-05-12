#include <iostream>

using namespace std;

int main()
{
    float diagonalmaior, diagonalmenor, area;
    cout << "Informe a Diagonal Maior de seu Triangulo: "; cin >> diagonalmaior;
    cout << "Informe a Diagonal Menor de seu Triangulo: "; cin >> diagonalmenor;
    area = (diagonalmaior * diagonalmenor)/2;
    cout << "Essa foi a Area de seu Triangulo: " << area;
    return 0;
}

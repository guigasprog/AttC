#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numerodehoras;
    float salarioliquido, salariobruto, valordahora, percentualdedesconto;
    cout << "Insira Quantas Horas Trabalhadas: "; cin >> numerodehoras;
    cout << " " << endl;
    cout << "Insira Valor por Hora: "; cin >> valordahora;
    cout << " " << endl;
    cout << "Percentual de Desconto: "; percentualdedesconto = 7.5; cout << percentualdedesconto << endl;
    cout << " " << endl;
    salariobruto = valordahora * numerodehoras;
    salarioliquido = salariobruto - (salariobruto/percentualdedesconto);
    cout << "Esse foi seu Salario Bruto: R$" << salariobruto << endl;
    cout << " " << endl;
    cout << "Esse e seu Salario Liquido: R$" << salarioliquido << endl;

    return 0;
}

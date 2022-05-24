#include <iostream>
#include <string.h>
 
using namespace std;
 
int main() {
 
    int Cobaias = 0, Testes = 0, Soma = 0;
    float Coelho = 0, Rato = 0, Sapo = 0;
    char TipoDeCobaia[999];

    cin >> Testes;

    for (int i = 0; i < Testes; i++)
    {
        cin >> Cobaias >> TipoDeCobaia;

        if (1 <= Cobaias)
            Soma += Cobaias;

        if (strcmp(TipoDeCobaia, "C") == 0)
            Coelho += Cobaias;

        else if (strcmp(TipoDeCobaia, "R") == 0)
            Rato += Cobaias;

        else if (strcmp(TipoDeCobaia, "S") == 0)
            Sapo += Cobaias;        
        
    }

    cout << "Total: " << Soma << " cobaias" << endl;

    cout.precision(0);
    cout << "Total de coelhos: " << fixed << Coelho << endl;
    cout << "Total de ratos: " << fixed << Rato << endl;
    cout << "Total de sapos: " << fixed << Sapo << endl;

    cout.precision(2);
    cout << "Percentual de coelhos: " << fixed << (Coelho / Soma) * 100 << " %" << endl;
    cout << "Percentual de ratos: " << fixed << (Rato / Soma) * 100 << " %" << endl;
    cout << "Percentual de sapos: " << fixed << (Sapo / Soma) * 100 << " %" << endl;
 
    return 0;
}
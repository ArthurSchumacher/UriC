#include <iostream>
 
using namespace std;
 
int main() {
 
    int Inter, Gremio, Soma = 0;
    int Inter_V = 0, Gremio_V = 0, Tied = 0;
    int Menu = 1;

    while (Menu == 1)
    {
        cin >> Inter >> Gremio;

        if (Inter > Gremio)
        {
            Soma++;
            Inter_V++;
        }
        else if (Gremio > Inter)
        {
            Soma++;
            Gremio_V++;
        }
        else if (Inter == Gremio)
        {
            Tied++;
        }

        do
        {
            cout << "Novo grenal (1-sim 2-nao)" << endl;

            cin >> Menu;            
        }while(Menu != 1 && Menu != 2);
    }

    cout << Soma << " grenais" << endl;
    cout << "Inter:" << Inter_V << endl;
    cout << "Gremio:" << Gremio_V << endl;
    cout << "Empates:" << Tied << endl;

    if (Inter_V > Gremio_V)
        cout << "Inter venceu mais" << endl;
    else 
        cout << "Gremio venceu mais" << endl;
 
    return 0;
}
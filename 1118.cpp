#include <iostream>

using namespace std;

int main()
{

    float Nota1, Nota2;
    int Menu = 1;

    while (Menu == 1)
    {
        do
        {
            cin >> Nota1;

            if (Nota1 < 0 || Nota1 > 10)
                cout << "nota invalida" << endl;

        } while (Nota1 < 0 || Nota1 > 10);

        do
        {
            cin >> Nota2;

            if (Nota2 < 0 || Nota2 > 10)
                cout << "nota invalida" << endl;

        } while (Nota2 < 0 || Nota2 > 10);

        cout.precision(2);
        cout << "media = " << fixed << (Nota1 + Nota2) / 2 << endl;

        do
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            
            cin >> Menu;

        } while (Menu != 1 && Menu != 2);       
    }

    return 0;
}
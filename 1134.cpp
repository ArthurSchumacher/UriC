#include <iostream>

using namespace std;

int main()
{

    int Alcool = 0, Gasolina = 0, Diesel = 0;
    int N;

    while (N != 4)
    {
        cin >> N;

        if (N == 1)
            Alcool++;

        if (N == 2)
            Gasolina++;

        if (N == 3)
            Diesel++;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << Alcool << endl;
    cout << "Gasolina: " << Gasolina << endl;
    cout << "Diesel: " << Diesel << endl;

    return 0;
}
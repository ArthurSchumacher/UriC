#include <iostream>
 
using namespace std;
 
int main() {
 
    int X, Y;
    int Aux;
    int Result = 0;

    while (true)
    {
        cin >> X >> Y;

        Result = 0;

        if (X <= 0 || Y <= 0)
            break;

        if (X > Y)
        {
            Aux = X;
            X = Y;
            Y = Aux;
        }

        for (int i = X; i <= Y; i++)
        {
            Result += i;
            cout << i << " ";
        }

        cout << "Sum=" << Result << endl;
    }
 
    return 0;
}
#include <iostream>

using namespace std;

int main()
{

    int N;
    int X, Y;
    int Aux;
    int Result = 0;

    cin >> N;

    while (true)
    {
        if (N == 0)
            break;

        Result = 0;
        cin >> X >> Y;

        if (X > Y)
        {
            Aux = X;
            X = Y;
            Y = Aux;
        }

        for (int i = X+1; i < Y; i++)
        {
            if (i%2 != 0)
                Result+= i;
        }

        cout << Result << endl;
        N--;
    }

    return 0;
}
#include <iostream>
 
using namespace std;
 
int main() {
 
    int X, Y, Aux;
    int Sum = 0;

    cin >> X >> Y;

    if (X > Y)
    {
        Aux = Y;
        Y = X;
        X = Aux;        
    }

    for(int i = X; i <= Y; i++)
    {
        if (i % 13 != 0)
            Sum += i;
    }

    cout << Sum << endl;
 
    return 0;
}
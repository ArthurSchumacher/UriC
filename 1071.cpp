#include <iostream>

using namespace std;

int main()
{
    int X, Y;
    int Max, Min;
    int Result = 0;

    cin >> X >> Y;

    if(X > Y)
    {
        Max = X;
        Min = Y;
    }
    else
    {
        Max = Y;
        Min = X;
    }

    for(int i = (Min + 1); i < Max; i++)
    {
        if(i % 2 == 1 || i % 2 == -1)
            Result += i;
    }

    cout << Result << endl;

    return 0;
}
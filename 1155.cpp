#include <iostream>

using namespace std;

int main()
{

    float S = 0, Form = 1;

    for(int i = 1; i <= 100; i++)
    {
        S += (Form/i);
    }

    cout.precision(2);
    cout << fixed << S << endl;

    return 0;
}
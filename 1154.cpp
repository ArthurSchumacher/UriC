#include <iostream>

using namespace std;

int main()
{

    float Age = 0, Aux = 0, AgeQ = 0;

    while(Age >= 0)
    {
        cin >> Age;

        if (Age > 0)
        {
            Aux += Age;
            AgeQ++;
        }
    }

    cout.precision(2);
    cout << fixed << Aux / AgeQ << endl;

    return 0;
}
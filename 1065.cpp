#include <iostream>

using namespace std;

int main()
{
    int N;
    int Even = 0;

    for(int i = 0; i < 5; i++)
    {
        cin >> N;

        if(N % 2 == 0)
        {
            Even++;
        }
    }

    cout << Even << " valores pares" << endl;

    return 0;
}
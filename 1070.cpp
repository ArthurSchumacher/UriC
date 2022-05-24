#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for(int i = N; i < N+12; i++)
    {
        if (i % 2 != 0)
            cout << i << endl;
    }

    return 0;
}
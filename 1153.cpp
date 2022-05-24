#include <iostream>

using namespace std;

int main()
{
    int N, Result = 1;

    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        Result = Result * i;
    }

    cout << Result << endl;

    return 0;
}
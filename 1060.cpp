#include <iostream>

using namespace std;

int main()
{
    float N;
    int PositiveQuantity = 0;

    for(int i = 0; i < 6; i++)
    {
        cin >> N;

        if (N > 0)
        {
            PositiveQuantity++;
        }
    }

    cout << PositiveQuantity << " valores positivos" << endl;

    return 0;
}
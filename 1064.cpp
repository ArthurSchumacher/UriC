#include <iostream>

using namespace std;

int main()
{
    float N, PositiveSum;
    int PositiveQuantity = 0;

    for(int i = 0; i < 6; i++)
    {
        cin >> N;

        if (N > 0)
        {
            PositiveQuantity++;
            PositiveSum += N;
        }
    }

    cout.precision(1);
    cout << PositiveQuantity << " valores positivos" << endl;    
    cout << fixed << PositiveSum / PositiveQuantity << endl;

    return 0;
}
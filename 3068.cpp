#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    int MeteorX, MeteorY;
    int TestQuantity;
    int MeteorQuantity = 0;
    int Count = 0;

    cin >> x1 >> y1 >> x2 >> y2;

    while ((x1 + y1 + x2 + y2) > 0)
    {
        cin >> TestQuantity;
        MeteorQuantity = 0;
        Count++;

        for(int i = 0; i < TestQuantity; i++)
        {
            cin >> MeteorX >> MeteorY;

            if (x1 <= MeteorX && MeteorX <= x2 && y1 >= MeteorY && MeteorY >= y2)
            {
                MeteorQuantity++;
            }

        }

        cout << "Teste " << Count << endl;
        cout << MeteorQuantity << endl;

        cin >> x1 >> y1 >> x2 >> y2;
    }

    return 0;
}
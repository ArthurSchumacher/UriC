#include <iostream>
#include <math.h>

using namespace std;

float DistanceBetween(float a, float b, float c, float d)
{
    return sqrt(pow((a - c), 2) + pow((b - d), 2));
}

int main()
{

    float x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    cout.precision(4);
    cout << fixed << DistanceBetween(x1, y1, x2, y2) << endl;    

    return 0;
}
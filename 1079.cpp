#include <iostream>
 
using namespace std;

float Media(float X, float Y, float Z)
{
    return ((X * 2) + (Y * 3) + (Z * 5)) / 10;
}
 
int main() {
 
    int N;
    float A, B, C;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> A >> B >> C;
        
        cout.precision(1);
        cout << fixed << Media(A, B, C) << endl;
    }
 
    return 0;
}
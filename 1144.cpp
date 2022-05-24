#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cout.precision(0);
        cout << fixed << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
        cout << fixed << i << " " << (pow(i, 2) + 1) << " " << (pow(i, 3) + 1) << endl;
    }
 
    return 0;
}
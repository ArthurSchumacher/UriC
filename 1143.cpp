#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cout << i << " ";
        cout << pow(i, 2) << " ";
        cout << pow(i, 3) << endl;
    }
 
    return 0;
}
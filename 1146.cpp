#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;

    while (N != 0)
    {
        cin >> N;

        for (int i = 1; i <= N; i++)
        {
            cout << i;
            if (i != N)
                cout << " ";
            else 
                cout << endl;
        }
    }
 
    return 0;
}
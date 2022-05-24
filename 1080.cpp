#include <iostream>
 
using namespace std;
 
int main() {
 
    unsigned int X;
    int Greater = 0, Position = 0;

    for (int i = 1; i <= 100; i++)
    {
        cin >> X;

        if(X > Greater)
        {
            Greater = X;
            Position = i;
        }
    }

    cout << Greater << endl;
    cout << Position << endl;
 
    return 0;
}
#include <iostream>
 
using namespace std;
 
int main() {

    int N;
    float X, Y;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> X >> Y;

        if (Y != 0)
        {
            cout.precision(1);
            cout << fixed << X / Y << endl;
        }
        else
            cout << "divisao impossivel" << endl;  

    }
 
    return 0;
}
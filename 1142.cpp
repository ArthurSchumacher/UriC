#include <iostream>
 
using namespace std;
 
int main() {

    int N, Num = 1;

    cin >> N;

    for (int i = 1; i <= ((N * 4) - 1); i+=4)
    {
        for (int j = i; j <= i + 2; j++)
        {
            cout << j << " ";
        }
        
        cout << "PUM" << endl;
    }
 
    return 0;
}
#include <iostream>
 
using namespace std;
 
int main() {
 
    float Nota, Flag = 0;
    float Result = 0;

    while (true)
    {
        if (Flag == 2)
            break;

        cin >> Nota;

        if (Nota >= 0 && Nota <= 10)
        {
            Flag++;
            Result += Nota;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
        
    }

    cout.precision(2);
    cout << fixed << "media = " << Result / 2 << endl;
 
    return 0;
}
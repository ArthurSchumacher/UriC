#include <iostream>

using namespace std;

int main()
{
    int N;
    int Even = 0, Odd = 0;
    int Positive = 0, Negative = 0;

    for(int i = 0; i < 5; i++)
    {
        cin >> N;

        if (N % 2 == 0)
            Even++;        
        else 
            Odd++;

        if (N > 0)
            Positive++;  
            
        else if (N < 0)
            Negative++;    
    }

    cout << Even << " valor(es) par(es)" << endl;
    cout << Odd << " valor(es) impar(es)" << endl;
    cout << Positive << " valor(es) positivo(s)" << endl;
    cout << Negative << " valor(es) negativo(s)" << endl;

    return 0;
}
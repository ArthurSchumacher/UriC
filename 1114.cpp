#include <iostream>
 
using namespace std;
 
int main() {
 
    int Password = 2002;
    int Guess;

    while (true)
    {
        cin >> Guess;

        if (Guess == Password)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
        else
        {
            cout << "Senha Invalida" << endl;
        }        
    }
 
    return 0;
}
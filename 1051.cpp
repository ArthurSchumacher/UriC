#include <iostream>

using namespace std;

int main()
{
    float Salary;

    cin >> Salary;

    if (Salary <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    else if (Salary >= 2000.01 && Salary <= 3000.00)
    {
        cout.precision(2);
        cout << fixed << "R$ " <<((Salary - 2000.00) * 0.08) << endl;
    }
    else if (Salary >= 3000.01 && Salary < 4500.00)
    {
        cout.precision(2);
        cout << fixed << "R$ " << ((Salary - 3000.00) * 0.18 + (1000.00 * 0.08)) << endl;
    }
    else if (Salary >= 4500.00)
    {
        cout.precision(2);
        cout << fixed << "R$ " << ((Salary - 4500.00) * 0.28 + (1500.00 * 0.18) + (1000.00 * 0.08)) << endl;
    }
    
    return 0;
}
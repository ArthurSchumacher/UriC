#include <iostream>

using namespace std;

float Prices(int A, float B, int C, float D){
    return (A * B) + (C * D);
}

int main(){

    int Piece1, Piece2;
    int PieceQuantity1, PieceQuantity2;
    float UnitaryValue1, UnitaryValue2;

    cin >> Piece1 >> PieceQuantity1 >> UnitaryValue1;
    cin >> Piece2 >> PieceQuantity2 >> UnitaryValue2;

    cout.precision(2);
    cout << "VALOR A PAGAR = R$" << fixed << Prices(PieceQuantity1, UnitaryValue1, PieceQuantity2, UnitaryValue2) << endl;

    return 0;
}
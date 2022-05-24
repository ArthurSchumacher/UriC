#include <iostream>

using namespace std;

int Sum(int A, int B){

    return A + B;

}

int main(){

    int A, B;

    cin >> A >> B;

    cout << "X = " << Sum(A, B) << endl;

    return 0;
}
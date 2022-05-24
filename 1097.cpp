#include <iostream>

using namespace std;

int main() {

    int auxI = 1;
    int auxJ = 7;

    while (auxI <= 9) {

        for (int i = 0; i < 3; i++) {

            cout << "I=" << auxI << " ";
            cout << "J=" << auxJ << endl;
            auxJ--;

        }

        auxI += 2;
        auxJ += 5;
    }

    return 0;
}
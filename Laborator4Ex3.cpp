#include "Matrice.h"
#include <iostream>
using namespace std;

int main() {

    Matrice A(8, 8);
    Matrice B(8, 8);

    cout << "Introduceti elementele matricei A:\n";
    cin >> A;

    cout << "Introduceti elementele matricei B:\n";
    cin >> B;

    cout << "Matricea A:\n" << A;
    cout << "Matricea B:\n" << B;

    Matrice C = A + B;
    cout << "Suma matricelor A si B:\n" << C;

    return 0;
}

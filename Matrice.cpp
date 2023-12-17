#include "Matrice.h"
#include "Matrice.h"
#include <iostream>
using namespace std;


Matrice::Matrice(int linii, int coloane) : nrLinii(linii), nrColoane(coloane) {
    elemente = new int* [nrLinii];
    for (int i = 0; i < nrLinii; ++i) {
        elemente[i] = new int[nrColoane];
    }
}

Matrice::Matrice(const Matrice& matrice) : nrLinii(matrice.nrLinii), nrColoane(matrice.nrColoane) {
    elemente = new int* [nrLinii];
    for (int i = 0; i < nrLinii; ++i) {
        elemente[i] = new int[nrColoane];
        for (int j = 0; j < nrColoane; ++j) {
            elemente[i][j] = matrice.elemente[i][j];
        }
    }
}

Matrice::~Matrice() {
    for (int i = 0; i < nrLinii; ++i) {
        delete[] elemente[i];
    }
    delete[] elemente;
}

Matrice& Matrice::operator=(const Matrice& matrice) {
    if (this != &matrice) {

        for (int i = 0; i < nrLinii; ++i) {
            delete[] elemente[i];
        }
        delete[] elemente;

        nrLinii = matrice.nrLinii;
        nrColoane = matrice.nrColoane;

        elemente = new int* [nrLinii];
        for (int i = 0; i < nrLinii; ++i) {
            elemente[i] = new int[nrColoane];
            for (int j = 0; j < nrColoane; ++j) {
                elemente[i][j] = matrice.elemente[i][j];
            }
        }
    }
    return *this;
}


ostream& operator<<(ostream& out, const Matrice& matrice) {
    for (int i = 0; i < matrice.nrLinii; ++i) {
        for (int j = 0; j < matrice.nrColoane; ++j) {
            out << matrice.elemente[i][j] << " ";
        }
        out << endl;
    }
    return out;
}

istream& operator>>(istream& in, Matrice& matrice) {
    for (int i = 0; i < matrice.nrLinii; ++i) {
        for (int j = 0; j < matrice.nrColoane; ++j) {
            in >> matrice.elemente[i][j];
        }
    }
    return in;
}

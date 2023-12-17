#ifndef MATRICE_H
#define MATRICE_H

#include <iostream>
using namespace std;

class Matrice {
private:
    int nrLinii;
    int nrColoane;
    int** elemente;

public:
    Matrice(int linii, int coloane);
    Matrice(const Matrice& matrice);
    ~Matrice();

    // Operatori
    Matrice& operator = (const Matrice& matrice);
    Matrice operator + (const Matrice& matrice) const;
    Matrice operator - (const Matrice& matrice) const;
    Matrice operator * (const Matrice& matrice) const;
    Matrice operator / (const Matrice& matrice) const;

    bool operator < (const Matrice& matrice) const;
    bool operator > (const Matrice& matrice) const;
    bool operator <= (const Matrice& matrice) const;
    bool operator >= (const Matrice& matrice) const;
    bool operator != (const Matrice& matrice) const;
    bool operator == (const Matrice& matrice) const;

    Matrice& operator += (const Matrice& matrice);
    Matrice& operator -= (const Matrice& matrice);
    Matrice& operator *= (const Matrice& matrice);
    Matrice& operator /= (const Matrice& matrice);
    Matrice& operator++();  
    Matrice operator++(int);  


    int* operator[](int index) const;

    friend ostream& operator << (ostream& out, const Matrice& matrice);
    friend istream& operator >> (istream& in, Matrice& matrice);
};

#endif 

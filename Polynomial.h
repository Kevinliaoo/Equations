#include <iostream>
#include <vector>
#include "Equation.h"

using namespace std;

#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
class Polynomial : public Equation
{
private:
    vector<double> coefficients;

public:
    Polynomial();
    Polynomial(vector<double> coefs);
    Polynomial(vector<int> coefs);

    int getDegree() { return this->coefficients.size() - 1; };
    double f(double x);

    double &operator[](int degree);
    friend ostream &operator<<(ostream &strm, const Polynomial &pol);
};
#endif
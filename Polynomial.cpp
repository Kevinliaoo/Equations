#include <iostream>
#include <vector>
#include <cmath>
#include "Polynomial.h"

Polynomial::Polynomial()
{
    this->coefficients.push_back(0);
}

Polynomial::Polynomial(vector<double> coefs)
{
    for (int i = 0; i < coefs.size(); i++)
        this->coefficients.push_back(coefs[i]);
}

double &Polynomial::operator[](int degree)
{
    if (degree < 0 || degree >= this->coefficients.size())
        throw degree;

    return this->coefficients[degree];
}

ostream &operator<<(ostream &strm, const Polynomial &pol)
{
    for (int i = pol.coefficients.size() - 1; i >= 0; i--)
        strm << pol.coefficients[i] << "x^" << i << " ";

    return strm;
}

double Polynomial::f(double x)
{
    double res = 0;

    for (int i = this->coefficients.size() - 1; i >= 0; i--)
        res += this->coefficients[i] * pow(x, i);

    return res;
}
#include <cmath>
#include "Exponential.h"
#include "Equation.h"

Exponential::Exponential() : Equation()
{
    this->constant = 1;
    this->base = 1;
    this->exponent = 0;
}

Exponential::Exponential(double a, double b, double c) : Equation()
{
    this->constant = a;
    this->base = b;
    this->exponent = c;
}

double Exponential::f(double x)
{
    return this->constant * pow(this->base, (x - this->exponent));
}
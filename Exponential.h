#include "Equation.h"

#ifndef EXPONENTIAL_H
#define EXPONENTIAL_H
class Exponential : public Equation
/**
 * a * b ^ (x - c)
 *
 * a: Constant
 * b: Base
 * c: Exponent
 */
{
private:
    double constant;
    double base;
    double exponent;

public:
    Exponential();
    Exponential(double a, double b, double c);

    double f(double x);
};
#endif
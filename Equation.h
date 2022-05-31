#ifndef EQUATION_H
#define EQUATION_H
class Equation
{
public:
    Equation(){};

    virtual double f(double x) = 0;
};
#endif
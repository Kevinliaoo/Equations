#include <cmath>
#include "Trigonometric.h"
#include "Equation.h"

double Trigonometric::PI = 3.1415926535;

double Trigonometric::degToRad(double x)
{
    return (x * PI) / 180;
}

double Trigonometric::radToDeg(double x)
{
    return (x * 180) / PI;
}

Trigonometric::Trigonometric() : Equation()
{
    this->amplitude = 1;
    this->frequency = 1;
    this->horizontal_shift = 0;
    this->vertical_shift = 0;
}

Trigonometric::Trigonometric(double a, double f, double hs, double vs) : Equation()
{
    this->amplitude = a;
    this->frequency = f;
    this->horizontal_shift = hs;
    this->vertical_shift = vs;
}

double Sine::f(double x)
// Precondition: x is the angle in DEGREES
{
    x = this->frequency * x - this->horizontal_shift;
    double x_rad = this->degToRad(x);

    return sin(x_rad);
}

double Cosine::f(double x)
// Precondition: x is the angle in DEGREES
{
    x = this->frequency * x - this->horizontal_shift;
    double x_rad = this->degToRad(x);

    return cos(x_rad);
}

double Tangent::f(double x)
// Precondition: x is the angle in DEGREES
{
    x = this->frequency * x - this->horizontal_shift;
    double x_rad = this->degToRad(x);

    return tan(x_rad);
}
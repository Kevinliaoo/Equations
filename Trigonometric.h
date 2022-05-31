#include "Equation.h"

#ifndef TRIGONOMETRIC_H
#define TRIGONOMETRIC_H
class Trigonometric : public Equation
{
protected:
    double degToRad(double x);
    double radToDeg(double x);

    double amplitude;
    double frequency;
    double horizontal_shift;
    double vertical_shift;

public:
    static double PI;

    Trigonometric();
    Trigonometric(double a, double f, double hs, double vs);
    virtual double f(double x) = 0;
};
#endif

#ifndef SINE_H
#define SINE_H
class Sine : public Trigonometric
/**
 * A * sin ( B * X - C ) + D
 *
 * A: Amplitude
 * B: Frequency
 * C: Horizontal shift
 * D: Vertical shift
 */
{
public:
    Sine() : Trigonometric(){};
    Sine(double a, double b, double c, double d) : Trigonometric(a, b, c, d){};

    double f(double x);
};
#endif

#ifndef COSINE_H
#define COSINE_H
class Cosine : public Trigonometric
/**
 * A * cos ( B * X - C ) + D
 *
 * A: Amplitude
 * B: Frequency
 * C: Horizontal shift
 * D: Vertical shift
 */
{
public:
    Cosine() : Trigonometric(){};
    Cosine(double a, double b, double c, double d) : Trigonometric(a, b, c, d){};

    double f(double x);
};
#endif

#ifndef TANGENT_H
#define TANGENT_H
class Tangent : public Trigonometric
/**
 * A * tan ( B * X - C ) + D
 *
 * A: Amplitude
 * B: Frequency
 * C: Horizontal shift
 * D: Vertical shift
 */
{
public:
    Tangent() : Trigonometric(){};
    Tangent(double a, double b, double c, double d) : Trigonometric(a, b, c, d){};

    double f(double x);
};
#endif
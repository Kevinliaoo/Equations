#include <iostream>
#include <vector>
#include "Polynomial.h"
#include "Trigonometric.h"
#include "Exponential.h"

using namespace std;

int main()
{
    // Polynomial functions
    vector<double> coefs;
    coefs.push_back(1);
    coefs.push_back(2);
    coefs.push_back(3);
    // 3x^2 + 2x + 1
    Polynomial pol(coefs);
    cout << pol << endl;

    // Run f(2)
    cout << pol.f(2) << endl;

    // Trigonometric functions
    // y = 1 * sin(x)
    Sine sin;
    // y = 2 * cos(10x - 0.5) + 5
    Cosine cos(2, 10, 0.5, 5);
    Tangent tan;

    cout << sin.f(90) << endl;
    cout << cos.f(90) << endl;
    cout << tan.f(90) << endl;

    // Exponential function
    // 10 * 5 ^ (x - 1)
    Exponential expo(10, 5, 1);
    cout << expo.f(3) << endl;
}
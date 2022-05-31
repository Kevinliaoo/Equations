#include <iostream>
#include <vector>
#include "Polynomial.h"
#include "Trigonometric.h"

using namespace std;

int main()
{
    Sine sin;
    Cosine cos;
    Tangent tan;

    cout << sin.f(0) << endl;
    cout << cos.f(0) << endl;
    cout << tan.f(0) << endl;
}
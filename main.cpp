#include <iostream>
#include <vector>
#include "Polynomial.h"

using namespace std;

int main()
{
    vector<double> coefs;
    coefs.push_back(1);
    coefs.push_back(2);
    coefs.push_back(3);
    coefs.push_back(4);
    coefs.push_back(5);

    Polynomial pol(coefs);

    cout << pol << endl;
    cout << "x= " << 2 << ": " << pol.f(2) << endl;

    cout << "Coef num: 3"
         << ": " << pol[3] << endl;
    cout << "Changing coef 3 to 9\n";
    pol[3] = 9;
    cout << pol << endl;
    cout << "x= " << 2 << ": " << pol.f(2) << endl;
}
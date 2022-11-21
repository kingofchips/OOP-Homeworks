// T.2.7.

#include <iostream>
#include <math.h>
using namespace std;

int absoluteComValue(double RealPart, double ImagPart) // This function computes the absolute value for a complex number.
{                                                    
    int ComplexValue;                               
    ComplexValue = sqrt(RealPart * RealPart + ImagPart * ImagPart);
    return ComplexValue;
}

int absoluteRealValue(int n) // This function computes the absolute value for a real number.
{
    int RealValue;
    if (n >= 0)
        RealValue = n;
    else
        RealValue = n * (-1);
    return RealValue;
}

int main()
{
    struct nrComplex  // Here is defined the components of a real number: the real and imaginary part.
    {
        double a;
        double b;
    }complexNumber;

    complexNumber.a = 3;
    complexNumber.b = 4;

    float num = -56;

    std::cout << absoluteComValue(complexNumber.a, complexNumber.b)<< endl;
    std::cout << absoluteRealValue(num);
    return 0;
}


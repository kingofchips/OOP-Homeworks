// T.3.5.

#include <iostream>
using namespace std;

class ComplexNumbers {
    int RealPart1,ImagPart1,RealPart2,ImagPart2;
public:
    void set_values(int, int, int, int);
    int Sum1() { return RealPart1 + RealPart2;}
    int Sum2() { return ImagPart1 + ImagPart2;}
    int Multi1() { return RealPart1 * RealPart2 - ImagPart1 * ImagPart2; }
    int Multi2() { return RealPart1 * ImagPart2 + ImagPart1 * RealPart2; }
};

void ComplexNumbers::set_values(int a, int b, int c, int d) {
    RealPart1 = a;
    ImagPart1 = b;
    RealPart2 = c;
    ImagPart2 = d;
}

int main()
{
    int sum, product;

    ComplexNumbers numbers;
    numbers.set_values(7, 13, 20, 5);

    cout <<"The sum of the 2 complex numbers is " <<  numbers.Sum1() << " + " << numbers.Sum2() << "i" << endl;
    cout << "The product of the 2 complex numbers is " << numbers.Multi1() << " + " << numbers.Multi2() << "i";

    return 0;
}

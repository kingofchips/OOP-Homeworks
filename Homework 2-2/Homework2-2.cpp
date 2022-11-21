// T.2.2. Here is a written function which verifies if a number is rounded to 100 or not.
// For example: 99,28 can become 100. But 97,82 becomes only 98.

#include <iostream>
#include <math.h>
using namespace std;

int closestMultiple(int a, int x) // In order to show the closest multiple by 100 with relation to "n", we write another
{                                 // function which computes the closest multiple for n to 100, and it will be used in
    if (x > a)                    // the next function.
        return x;

    a = a + x / 2;
    a = a - (a % x);
    return a;
}

int f(float n, bool isRoundedTo100 = false)
{
 if (100 - n >= 0.5) // all numbers from 99.5 to 99.99 can be rounded to 100. From 99.49 and downwards, the bool variable will be false.
 {
     isRoundedTo100 = false;
     return round(n);
 }
 else
 {
     isRoundedTo100 = true;
     return closestMultiple(n, 100);
 }
}

int main()
{
    float Num1 = 76.49;
    float Num2 = 99.56;
    bool IsitRounded = false;
    std::cout << f(Num1, IsitRounded) << endl;
    std::cout << f(Num2, IsitRounded);
    return 0;
}


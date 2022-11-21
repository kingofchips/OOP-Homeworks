// T.2.8.

#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b, T c) {
    if (a >= b)
    {
        if (a >= c)
            return a;
        else
            return c;
    }
    else
    {
        if (b >= c)
            return b;
        else
            return c;
    }
}

int main()
{
    int num1, num2, num3;
    num1 = 35;
    num2 = 64;
    num3 = 18;
    std::cout << Max(num1, num2, num3);
    return 0;
}


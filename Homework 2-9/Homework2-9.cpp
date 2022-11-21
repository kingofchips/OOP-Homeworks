// T.2.9.

#include <iostream>
using namespace std;

template <typename T>
T Sum(T a, T b) {
    int s;
    s = a + b;
    return s;
}

int main()
{
    int nr1, nr2;
    nr1 = 26;
    nr2 = 9;
    cout << Sum(nr1, nr2);
    return 0;
}

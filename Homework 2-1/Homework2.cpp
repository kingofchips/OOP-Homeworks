#include <iostream>
using namespace std;
// T.2.1. Here is written a function where 2 values get interchanged.

void changeValues(int& a, int& b)
{
    int changer = a;
    a = b;
    b = changer;
}

int main(void)
{
    int Num1 = 5;
    int Num2 = 10;
    changeValues(Num1, Num2);
    std::cout<<"Num1 becomes "<< Num1 <<" amd Num2 becomes "<< Num2;
    return 0;
}

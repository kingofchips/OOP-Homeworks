#include <iostream>
#include "a.h"
#include "b.h"
using namespace std;

// IMPORTANT !!! 
// Some programs will contain more homework exercises solved together into one.
// This is to increase efficiency when writing and verifying the code,
// and to avoid writing the same code over and over again.

int test1(int a, int b)
{
    int s;
    s = a + b;
    return s;
}

int main()
{
    int nr1, nr2;
    nr1 = 3;
    nr2 = 9;
    std::cout <<"The sum is "<< test1(nr1, nr2) << endl;
 // Here, this function is both written and used in main.
    std::cout <<"The difference is "<< test2(nr1, nr2) << endl;
 // Here, this function is written in a library named "a" and is called and used in main.
    return 0;
}
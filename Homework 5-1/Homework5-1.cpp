// T.5.1.

#include <iostream>
using namespace std;

class A
{
public:
    int aa;
protected:
    int ab;
private:
    int ac;
    public void testA() {
        // set the attributes in class A
    }
};

class B : public / protected / private A
{
public:
int ba;
protected:
int bb;
private:
int bc;
public void testB() {
    // set values for the attributes in classes B and A
    }
};

class C : public / protected / private B
{
public:
int ca;
protected:
int cb;
private:
int cc;
public void testC() {
    // set values for the attributes in classes C, B and A
    }
};

int main()
{
    
}
=
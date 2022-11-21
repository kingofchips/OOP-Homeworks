#include <iostream>
#include "a.h"
using namespace std;

void test4(int e, int f)
{
	int aux;
	if (e >= f)
	{
		aux = e;
		e = f;
		f = aux;
    }

	if (f != 0)
		{
			return test3(e, f);
			f = f - 1;
		}
}

// Here, the function "test2", written in the "a" library, is taken
// and is used in the "b" library, inside of another function.
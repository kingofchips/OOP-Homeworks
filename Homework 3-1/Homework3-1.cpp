// T.3.1.

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    void set_values(int, int);
    int area() { return width * height; }
    int perimeter() { return width * 2 + height * 2;  }
};

void Rectangle::set_values(int x, int y) {
    width = x;
    height = y;
}

int main()
{
    Rectangle A;
    A.set_values(3, 4);
    cout << "Area: " << A.area()<<endl;
    cout << "Perimeter: " << A.perimeter()<<endl;

    Rectangle B;
    B.set_values(5, 2);
    cout << "Area: " << B.area() << endl;
    cout << "Perimeter: " << B.perimeter()<<endl;

    if (A.area() >= B.area())
        cout << "Rectangle A has a bigger/similar area" << endl;
    else
        cout << "Rectangle B has a bigger area" << endl;

    if(A.perimeter() >= B.perimeter())
        cout << "Rectangle A has a bigger/similar perimeter" << endl;
    else
        cout << "Rectangle B has a bigger perimeter" << endl;
    return 0;
}

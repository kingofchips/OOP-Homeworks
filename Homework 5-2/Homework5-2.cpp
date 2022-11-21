// T.5.2.

#include <iostream>
using namespace std;

    class Form {
    private:
        string color;
    protected:
        string name;
        void setColor(string color) {
            this->color = color;
        }
    public:
        Form(string name) {
            this->name = name;
        }
        string getName() {
            return this->name;
        }
        void setName(string name) {
            this->name = name;
        }
    };

    class Rectangle :public Form {
    protected:
        int width;
        int height;
    public:
        Rectangle(string name, int width, int height) :Form(name) {
            // call :Form(name){ can miss
            this->width = width;
            this->height = height;
        }
        void setWidth(int width) {
            this->width = width;
        }
        int getWidth() {
            return this->width;
        }
    };

    int main();
    {
        Form *f = new Form("forma1");
        cout << "forma: " << f->getName() << endl;
        Rectangle *r = new Rectangle("rectangle 1", 1, 2);
        cout << "rectangle name: " << r->getName() << " width:" << r->getWidth() << endl;
        return 0;
    }


#include <iostream>
#include <stdlib.h>

using namespace std;

// making a virtual class

class A {
    protected:
        int a;
};

class B : virtual public A {
    protected:
        int b;
};

class C : virtual public A {
    protected:
        int c;
};

class D : public B, public C {
    private:
        int d;
    public:
        void set_data(int x, int y, int z) {
            a = x;
            b = y;
            c = z;
            d = x+y+z;
        }
        void display(void) {
            cout <<"a : "<<a<<endl;
            cout <<"b : "<<b<<endl;
            cout <<"c : "<<c<<endl;
            cout <<"d sum of all : "<<d<<endl;
        }
};

int main() {
    D obj;
    obj.set_data(500, 200, 300);
    obj.display();
    return 0;
}
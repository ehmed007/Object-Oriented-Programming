#include <iostream>
#include <stdlib.h>

using namespace std;

class B {
    private:
        int b;
    public:
        friend class A;
        int b1;
};

class A {
    private:
        int a;
    public:
        int a1;
        void print() {
            B oj;
            a = 20;
            oj.b = 5;
            oj.b1 = 5;
            cout <<"value : "<<oj.b1+oj.b+a1+a<<endl;
        }
};

int main() {
    A obj;
    obj.a1 = 75;
    obj.print();
    return 0;
}
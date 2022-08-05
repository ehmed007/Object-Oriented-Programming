#include <iostream>
#include <stdlib.h>

using namespace std;

class one {
    private:
        int a;
    public:
        one(){};
        one(int x) {
            a = x;
        }
        // copy constructor 
        // if i comment out this constructor then class
        // has its own copy constructor or compiler a copy constructor
        one(one *obj) {
            cout <<"\ncopy constructor has run !!"<<endl;
            a = obj->a;
        }
        void print() {
            cout <<"\nvalue :: "<<a;
        }
};

int main() {
    one i = one(7);
    i.print();
    one j(i);
    j.print();
    return 0;
}
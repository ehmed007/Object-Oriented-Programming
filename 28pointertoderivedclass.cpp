#include <iostream>
#include <stdlib.h>

using namespace std;

class base {
    public:
        int varB;
        void display() {
            cout <<"base class varB : "<<varB<<endl;
        }
};

class derived : public base {
    public:
        int varD;
        void display() {
            cout <<"base clas varB : "<<varB<<endl;
            cout <<"base clas varD : "<<varD<<endl;
        }
};

int main() {
    base* ptr;
    base obj;
    derived obj1;
    ptr = &obj1;
    ptr->varB = 100;
    ptr->display();
    derived* ptr1 = &obj1;// here is a trick
    // ptr1->varB = 12;
    ptr1->varD = 13;
    ptr1->display();
    return 0;
}
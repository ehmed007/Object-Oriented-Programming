#include <iostream>
#include <stdlib.h>

using namespace std;

// virtual fucntions 
// we make virtual function bacause when we make pointer of base class to 
// point the derived class object.but when we call display it by default 
// run display of base class so for using or running derived class display
//  we make virtual function 

class base {
    public:
        int varB;
        virtual void display() { // here is a trick
            cout <<"base class varB : "<<varB<<endl;
        }
};

class derived : public base {
    public:
        int varD = 900;
        void display() {
            cout <<"base clas varB : "<<varB<<endl;
            cout <<"base clas varD : "<<varD<<endl;
        }
};


int main() {
    base* ptr;
    derived obj;
    ptr = &obj;
    ptr->varB = 100;
    ptr->display();
    // derived* ptr1;
    // ptr1 = &obj;
    // ptr1->varD = 200;
    // ptr1->display();
    return 0;
}
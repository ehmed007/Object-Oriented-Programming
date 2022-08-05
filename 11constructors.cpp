#include <iostream>
#include <stdlib.h>

using namespace std;
// creating a constructor
// constructor is special member function with same name of class
// it is used to initilize the object of its class
// it is automatically invoked or execute by creating a object

class complex {
    private:
        int a, b;
    public:
        complex(void);//constructors
        void display(void) {
            cout <<"complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(void) { //default constructor takes no arguments
    a = 4;
    b = 8;
}

int main() {
    complex num;
    num.display();
    return 0;
}

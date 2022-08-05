#include <iostream>
#include <stdlib.h>

using namespace std;

class complex {
    private:
        int a, b;
    public:
        complex(){//first constructor
            cout <<"hello i am ahmed"<<endl;
        }
        //second constructor
        complex(int x, int y);//parameterized constructors 
        void display(void) {
            cout <<"complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(int x, int y) { 
    a = x;
    b = y;
}

int main() {
    // implicit call
    complex obj;// only invoke first constructor
    complex obj(5, 6);// only invoke second constructor
    obj.display();
    
    // explicit call
    complex obj1;// only invoke first constructor
    complex obj1 = complex(10, 20);// only invoke second constructor
    obj1.display();
    return 0;
}
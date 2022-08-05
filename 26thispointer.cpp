#include <iostream>
#include <stdlib.h>

using namespace std;

class A {
    private:
        int a;
    public:
        A & set_data(int a) {
            this->a = a; //this pointer will tell will indicate 
                         // the object which is being called
                         // we can also return the object by using this pointer 
            cout <<"adress of a : "<<&this->a<<endl;
            cout <<"value : "<<(this->a)<<endl;
            cout <<"value : "<<this<<endl;
            return *this;
        }
        void display(void) {
            cout <<"value of a : "<<a<<endl;
        }
};

int main() {
    A obj;
    obj.display();
    obj.set_data(5).display();//another way when funtion returning object
    obj.set_data(5).set_data(7).display();
    // cout <<"value return : "<<;
    // obj.display();
    return 0;
}
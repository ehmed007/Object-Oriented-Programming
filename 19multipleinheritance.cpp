#include <iostream>
#include <stdlib.h>

using namespace std;
// syntax for multilevel inheritance
/*
class DerivedC: visibility-mode base1, visibility-mode base2 {
      Class body of class "DerivedC"
};*/

class base1 {
    protected:
        int value1;
    // public:
    //     void set_value(int x) {
    //         value1 = x;
    //     }
};

class base2 {
    protected:
        int value2;
    // public:
    //     void set_value2(int x) {
    //         value2 = x;
    //     }
};

class derived : public base1, public base2 {
    private:
    int value3;
    public:
        void set_values(int x, int y, int z) {
            value1 = x;
            value2 = y;
            value3 = z;
        }
        void display(void) {
            cout <<"value 1 : "<<value1<<endl;
            cout <<"value 2 : "<<value2<<endl;
            cout <<"value 3 : "<<value3<<endl;
        }
};

int main() {
    derived obj;
    obj.set_values(100, 200, 300);
    obj.display();
    return 0;
}
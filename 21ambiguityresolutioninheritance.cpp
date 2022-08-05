#include <iostream>
#include <stdlib.h>

using namespace std;

// resolving ambiguity

class base_1 {
    public:
        void greet(void) {
            cout <<"How are you ?"<<endl;
        }
};

class base_2 {
    public:
        void greet(void) {
            cout <<"Hn tou kya haal ha bhaiya ?"<<endl;
        }
};

class derived : public base_1, public base_2 {
    public:
        void greet() {
            base_2 :: greet();
        }
};

int main() {
    base_1 obj;
    base_2 obj1;
    obj.greet();
    obj1.greet();
    derived d;
    d.greet();
    return 0;
}
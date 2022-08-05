#include <iostream>
#include <stdlib.h>

using namespace std;

// >>>>>>>>>>>>>>>>>>>>>>For protected mode 

class base {
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        int for_A(int x) {
            a = x;
            return a;
        }
};

class derived : protected base {
    public:
        int n;
        void setdata(int x, int y, int z) {
            // a = x; cannot access a directly
            // another way just make a function in base class for a
            n = for_A(x);
            b = y;
            c = z;
        }
        void display() {
            cout <<n<<" "<<b<<" "<<c<<endl;
        }
};

int main() {
    derived obj;
    obj.setdata(100, 200, 300);
    obj.display();
    return 0;
}
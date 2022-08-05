#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class member {
    private:
        string a;
    public:
        string ab;
        int c;
        int foo(string ab);
        void print(int i);
};

int member :: foo(string ab) {
    a = ab;
    return 1;
}

void member :: print(int i) {
    cout <<"name : "<<a<<" "<<i<<" "<<c<<endl;
}

int main() {
    member one;
    one.c = 200;
    one.print(one.foo("ahmed"));
    member two;
    two.c = 300;
    two.print(two.foo("ahmed"));
    return EXIT_SUCCESS;    
}
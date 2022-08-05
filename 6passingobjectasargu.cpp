#include <iostream>
#include <stdlib.h>

using namespace std;

class check { 
    private:
        int a; 
        int b;
    public:
        int sum(int x, int y) {
            a = x;
            b = y;
            return a+b;
        }
        void foo(check ar1) {
            if (ar1.a%2 == 0) {
                cout <<"A is EVEN"<<endl;
            } else {
                cout <<"A is ODD"<<endl;
            }
            if (ar1.b%2 == 0) {
                cout <<"B is EVEN"<<endl;
            } else {
                cout <<"B is ODD"<<endl;
            }
        }
};

int main() {
    check num;
    cout <<"sum of A  and B is : "<<num.sum(3,9)<<endl;
    check num1;
    num1.foo(num);// passing a object to fuction 
    return 0;
}
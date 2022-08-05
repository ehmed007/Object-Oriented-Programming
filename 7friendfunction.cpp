#include <iostream>
#include <stdlib.h>

using namespace std;

class sum {
    private:
        int a;
        int b;
    public:
        friend int sum1(sum one1);//friend function
        void take(int x, int y) {
            a = x;
            b = y;
        }
};
//friend fucntion
int sum1(sum one1) {
    return one1.a+one1.b;
}

int main() {
    sum one;
    one.take(9, 100);
    cout <<"value : "<<sum1(one);
    return 0;
}
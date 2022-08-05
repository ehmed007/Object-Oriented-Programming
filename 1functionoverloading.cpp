#include <iostream>

using namespace std;

int foo(int i, int j, int k) {
    return i+j+k;
}
 
int foo(int i, int j, float k) {
    return i+j+(int)k;
}

int main() {
    cout <<"value = "<<foo(10, 20, 9)<<endl;
    float fl = 9.9;
    cout <<"value = "<<foo(10, 20, fl)<<endl;
    return 0;
}
#include <iostream>

using namespace std;

template <typename type,typename type1>
type1 add(type1 a, type1 b) {
    return a+b;
}

int main() {
    cout << add<char, char>(4,93);
    return 0;
}
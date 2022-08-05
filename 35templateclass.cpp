#include <iostream>

using namespace std;

template <class t>
class check {
    private:
        t a;
        t b;
    public:
        check();
        check(t a, t b);
        template <typename u> 
        friend istream& operator>>(istream& cin, check <u>& obj);
        template <typename s>
        friend ostream& operator<<(ostream& cout, check <s>& obj);
};
template <typename t>
check <t> :: check() {
    a = b = 0;
}

template <typename t>
check <t> :: check(t a, t b) {
    this->a = a;
    this->b = b;
}
template <typename u>
istream& operator>>(istream& cin, check <u>& obj) {
    cout << "enter value of a : ";
    cin >> obj.a;
    cout << "enter value of b : ";
    cin >> obj.b;
    return cin;
}
template <typename s>
ostream& operator<<(ostream& cout, check <s>& obj) {
    cout << "value of a : " << obj.a << endl;
    cout << "value of b : " << obj.b << endl;
    return cout;
}

int main() {
    check <int> obj;
    cout << obj;
    cin >> obj;
    cout << obj;
    return 0;
}
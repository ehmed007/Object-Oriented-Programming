#include <iostream>
#include <stdlib.h>

using namespace std;

class second;

class first {
    private:
        char name[10];
    public:
        friend void editname(first *a, second *b);
        friend void display(first a, second b);
        void take() {
            cout <<"enter name : ";
            cin >>name;
        }
};

class second {
    private: 
        char name[10];
    public:
        friend void editname(first *a, second *b);
        friend void display(first a, second b);
        void take() {
            cout <<"enter name : ";
            cin >>name;
        }
};

void display(first a, second b) {
    cout <<"name : "<<a.name<<endl;
    cout <<"name : "<<b.name<<endl;
}

void editname(first *a, second *b) {
    cout <<"enter name to edit for first : ";
    cin >>a->name;
    cout <<"enter name to edit for second : ";
    cin >>b->name;
}

int main() {
    first one;
    second two;
    one.take();
    two.take();
    display(one, two);
    editname(&one, &two);
    cout <<"lets check : "<<endl;
    display(one, two);
    return 0;
}
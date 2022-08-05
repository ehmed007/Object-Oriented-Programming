#include <iostream>
#include <stdlib.h>

using namespace std;

class student {
    private:
        char name[10];
        int id;
    public:
        void getname();      
        void getID();
        void display();
};

void student :: getname() {
    cout <<"enter your name : ";
    cin >>name;
}

void student :: getID() {
    cout <<"enter your ID : ";
    cin >>id;
}

void student :: display() {
    cout <<"Name : "<<name<<endl;
    cout <<"ID   : "<<id<<endl;
}

int main() {
    student array[5];
    for (int i=0; i<5; i++) {
        array[i].getname();
        array[i].getID();
    }
    for (int i=0; i<5; i++) {
        cout <<"\n Record "<<i+1<<endl;
        array[i].display();
    }
    return 0;
}
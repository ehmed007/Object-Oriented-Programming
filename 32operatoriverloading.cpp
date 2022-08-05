#include <iostream>
#include <string.h>

using namespace std;

class student {
    private:
        int rollno;
        string name;
    public:
        // constructor
        student(int rollno, string name) {
            this->rollno = rollno;
            this->name = name;
        }
        student() {
            this->rollno = 0;
            this->name = "";
        }
        void display() {
            cout << "Name : " << name <<endl;
            cout << "Roll : " << rollno << endl;
        }

        student operator+(student &obj) {
            student temp;
            temp.rollno = this->rollno + obj.rollno;
            temp.name = this->name + obj.name;
            return temp;
        }
        
        friend ostream& operator<<(ostream& cout, student obj);
        friend istream& operator>>(istream& cin, student& obj);
};

ostream& operator<<(ostream& cout,student obj)  {
    cout << "Name : " << obj.name <<endl;
    cout << "Roll : " << obj.rollno << endl;
    return cout;
}


istream& operator>>(istream& cin, student &obj) {
    cout << "enter your roll : ";
    cin >> obj.rollno;
    cout << "enter your name : ";
    cin >> obj.name;
    return cin;
}

int main() {
    student obj1(500, "ahmed");
    student obj2(29, " rasheed");
    student obj3(8, "ehmed");
    cout << obj1;
    cout << obj2;
    cout << obj3;
    // operator<<(cout, &obj2);
    cin >> obj1;
    cout << obj1;
    // cout << (&obj2);
    // (obj1 + obj2).display();
    return 0;
}
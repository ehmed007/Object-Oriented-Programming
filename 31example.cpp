#include <iostream>
#include <fstream>

using namespace std;

class student {
    private:
        static int studentno;
        string name;
        char rollno[10];
    public:
        student() {
            cout <<"check";
            studentno++;
        }
        void setName() {
            cout << "enter your name : ";
            cin >> name;
        }
        void setRollno() {
            cout << "enter your rollno : ";
            cin >> rollno;
        }
        void display() {
            cout << "\nStudent : "<<studentno<<endl;
            cout << "\nname : "<<name<<endl;
            cout << "roll : "<<rollno<<endl;
        }
};

int student :: studentno = 0;

int main() {
    student one;
    one.setName();
    one.setRollno();
    one.display();
    student two;
    two.setName();
    two.setRollno();
    two.display();
    return 0;
}
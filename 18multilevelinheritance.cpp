#include <iostream>
#include <stdlib.h>

using namespace std;

// multilevel inheritance

class Student {
    protected:
        int roll_num;
    public:
        void set_roll_num(int x);
        void get_roll_num(void);
};

void Student :: set_roll_num(int x) {
    roll_num = x;
}

void Student :: get_roll_num(void) {
    cout <<"Candidate Roll Number : "<<roll_num<<endl;
}

class Exams : public Student {
    protected:
        float maths;    
        float physics;
    public:
        void set_marks(float x, float y);
        void get_marks(void);
};

void Exams :: set_marks(float x, float y) {
    maths = x;
    physics = y;
} 

void Exams :: get_marks(void) {
    cout <<"Obtained marks in maths : "<<maths<<endl;
    cout <<"Obtained marks in physics : "<<physics<<endl;
} 

class Result : public Exams {
    protected:
        float result;
    public:
        void display_result(void); 
};

void Result :: display_result(void) {
    get_roll_num();
    get_marks();
    cout <<"Your result is : "<<(maths + physics) / 2 <<" %"<<endl;
}
int main() {
    for (int i=0; i<10; i++) {
        // int j := 0;
        cout <<"ahmed";
    }
    return 0;
    Result ahmed;
    ahmed.set_roll_num(29);
    // ahmed.get_roll_num();
    ahmed.set_marks(85, 98);
    // ahmed.get_marks();
    ahmed.display_result();
    return 0;
}

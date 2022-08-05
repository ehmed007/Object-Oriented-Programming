#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class simple_calculator {
    protected:
        float num_1;
        float num_2;
    public:
        void set_nums1(float x, float y);
        float process1(char ch);
        void get_result1(float x, float y, char ch);
};

void simple_calculator :: set_nums1(float x, float y) {
    num_1 = x;
    num_2 = y;
}

float simple_calculator :: process1(char ch) {
    if (ch == '+') return (num_1 + num_2);
    if (ch == '-') return (num_1 - num_2);
    if (ch == '*') return (num_1 * num_2);
    if (ch == '/') return (num_1 / num_2);
    return 0;
}

void simple_calculator :: get_result1(float x, float y, char ch) {
    set_nums1(x, y);
    if (ch == '+') cout <<"Addition of "<<num_1<<" and "<<num_2<<" is : "<<process1('+')<<endl;
    if (ch == '-') cout <<"Subtraction of "<<num_1<<" and "<<num_2<<" is : "<<process1('-')<<endl;
    if (ch == '*') cout <<"Product of "<<num_1<<" and "<<num_2<<" is : "<<process1('*')<<endl;
    if (ch == '/') cout <<"Division of "<<num_1<<" and "<<num_2<<" is : "<<process1('/')<<endl;
}

class scientific_calculator {
    protected:
        float num_s;
    public:
        void set_num2(float x);
        float process2(char ch);
        void get_result2(float x, char ch);
};

void scientific_calculator :: set_num2(float x) {
    num_s = x;
}

float scientific_calculator :: process2(char ch) {
    if (ch == '1') return (log(num_s));
    if (ch == '2') return (1/num_s);
    if (ch == '3') return (sin(num_s));
    if (ch == '4') return (cos(num_s));
    return 0;
}

void scientific_calculator :: get_result2(float x, char ch) {
    set_num2(x);
    if (ch == '1') cout <<"Log of "<<num_s<<" is "<<process2('1')<<endl;
    if (ch == '2') cout <<"Reciprocal of "<<num_s<<" is : "<<process2('2')<<endl;
    if (ch == '3') cout <<"Sine of "<<num_s<<" is : "<<process2('3')<<endl;
    if (ch == '4') cout <<"Cosine of "<<num_s<<" is : "<<process2('4')<<endl;
}

class hybrid_calculator : public simple_calculator, public scientific_calculator {
    public:
        void menu();
};

void hybrid_calculator :: menu() {
    while (1) {
        int option;
        float numb_1,numb_2;
        cout <<"\n\nenter 0 to exit        : "<<endl;
        cout <<"enter 1 to ADD numbers : "<<endl;
        cout <<"enter 2 to SUB numbers : "<<endl;
        cout <<"enter 3 to MUL numbers : "<<endl;
        cout <<"enter 4 to DIV numbers : "<<endl;
        cout <<"enter 5 to get log of number        : "<<endl;
        cout <<"enter 6 to get reciprocal of number : "<<endl;
        cout <<"enter 7 to get sine of number       : "<<endl;
        cout <<"enter 8 to get cosine of number     : "<<endl<<endl;
        cout <<"enter choice_";
        cin >>option;
        if (option < 0 || option > 8) {
            cout <<"Please enter valid option!";
            continue;
        }
        if (option == 0) exit(0);
        if (option > 0 && option < 5) {
            cout <<"\nenter first num : ";
            cin >>numb_1;
            cout <<"enter second num : ";
            cin >>numb_2;
            cout <<endl;
            switch (option) {
                case 1:
                    get_result1(numb_1, numb_2, '+');
                    break;
                case 2:
                    get_result1(numb_1, numb_2, '-');
                    break;
                case 3:
                    get_result1(numb_1, numb_2, '*');
                    break;
                case 4:
                    get_result1(numb_1, numb_2, '/');
                    break;
            }
        }
        if (option >= 5 && option < 9) {
            cout <<"\nenter num : ";
            cin >>numb_1;
            cout <<endl;
            switch (option) {
                case 5:
                    get_result2(numb_1, '1');
                    break;
                case 6:
                    get_result2(numb_1, '2');
                    break;
                case 7:
                    get_result2(numb_1, '3');
                    break;
                case 8:
                    get_result2(numb_1, '4');
                    break;
            }
        }
    }
}

int main () {
    hybrid_calculator obj;
    obj.menu();
    return 0;
}
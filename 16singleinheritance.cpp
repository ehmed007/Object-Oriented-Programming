#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
class base {
    private:
        int data1;//private cannot be inheritable
    public:
        int data2;
        void setdata() {
            data1 = 10;
            data2 = 20;
        }
        int getdata1() {
            return data1;
        }
        int getdata2() {
            return data2;
        }
};
 
class derived : public base {
    public:
        int data3;
        void process() {
            data3 = data2 * getdata1();
        }
        void display() {
            cout <<"value of data 1 :"<<getdata1()<<endl;
            cout <<"value of data 2 :"<<data2<<endl;
            cout <<"value of data 3 :"<<data3<<endl;
        }
};
 
int main() {
    derived obj;
    obj.setdata();
    obj.process();
    obj.display();
    return 0;
}

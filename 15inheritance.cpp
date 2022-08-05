#include <iostream>
#include <stdlib.h>

using namespace std;

// base class
class employee {
    private:
        int id;
        float salary; 
    public:
        int ahm;
        void setdata() {
            cout <<"enter ID : ";
            cin >>id;
            cout <<"enter salary : ";
            cin >>salary;
        }
        void diplay() {
            cout <<"ID     = "<<id<<endl;
            cout <<"salary = "<<salary<<endl;
        }
}; 

// *Default visibility mode is private
// *Public Visibility Mode: Public members of the 
//  base class becomes Public members of the derived class
// *Private Visibility Mode: Public members of 
//  the base class become private members of the derived class
// *Private members are never inherited of base class

// derived class
class programmer : private employee {
    public:
        void setdata() {
            cout <<"enter vlaue for ahm ";
            cin >>ahm;//accessing the member fo base class
        }
        void display() {
            cout <<"vlaue : "<<ahm<<endl;
        }
        int language_code;
};

int main() {
    employee ahmed;
    programmer kaaleen;
    kaaleen.setdata();
    kaaleen.display();
    /*
    kaaleen.language_code = 2; 
    kaaleen.setdata();
    kaaleen.diplay();
    ahmed.setdata();
    ahmed.diplay();
    */
    /*
    cout <<"ahmed Id        :"<<ahmed.id<<endl
         <<"ahmed salary    :"<<ahmed.salary<<endl
         <<"kaaleen Id      :"<<kaaleen.id<<endl
         <<"kaaleen salary  :"<<kaaleen.salary<<endl
         <<"kaaleen PL CODE :"<<kaaleen.language_code<<endl;
         */
    return 0;
}
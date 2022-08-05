#include <iostream>
#include <stdlib.h>

using namespace std;

class shop {
    private:
        int price[100];
        int id[100];
        static int count;
    public:
        int counter = 0;
        void setprice(void);
        void display(void);
        static void forcounter(void);
};

void shop :: setprice(void) {
    cout <<"enter price of "<<counter<<" product : ";
    cin >>price[counter];
    cout <<"enter ID of "<<counter<<" product : ";
    cin >>id[counter];
    counter++;
    // count++;
}

void shop :: display(void) {
    for (int i=0; i<counter; i++) {
        cout <<"static = "<<count<<endl;
        count++;
        forcounter();//static function
        cout <<"Product # "<<i<<endl;
        cout <<"\t price = "<<price[i]<<endl;
        cout <<"\t ID    = "<<id[i]<<endl;
    }
}

void shop :: forcounter(void) {
    count++;
}

int shop :: count = 500;

int main() {
    shop dukaan;
    int productnum;
    cout <<"enter number of products : ";
    cin >>productnum;
    for (int i=0; i<productnum; i++) {
        if (i == productnum-1) {
            cout <<"Last product:"<<endl;
        }
        dukaan.setprice();
    }   
    dukaan.display();
    // for checking static variable 
    // static variables are initialize only for one 
    // function then changed value is use for others
    // static functions can only access static varibles
    shop dukaan1;
    dukaan1.setprice();
    dukaan1.setprice();
    dukaan1.setprice();
    dukaan1.display();
    return 0;
}